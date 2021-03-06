#ifndef EACIRC_H
#define EACIRC_H

#include "EACglobals.h"
#include <GASStateGA.h>
#include "projects/IProject.h"
#include "circuit/ICircuit.h"

//! constants for EACirc configuration state
#define EACIRC_CONFIG_LOADED 0x01
#define EACIRC_PREPARED 0x02
#define EACIRC_INITIALIZED 0x04

class EACirc {
public: 
    /** Visitor function pointer for EACirc.
     */
    typedef void (*EACircVisitor)(EACirc *);
    
private:    
    //! current error status
    int m_status;
    //! main seed for this computation (can be reproduced with this seed and settings)
    unsigned long m_originalSeed;
    //! seed used to reseed GAlib the last time
    unsigned int m_currentGalibSeed;
    //! structure of main settings
    SETTINGS m_settings;
    //! representation of an individual
    ICircuit* m_circuit;
    //! project
    IProject* m_project;
    //! genetics algorithm instance
    GASteadyStateGA* m_gaData;
    //! state of preparations we are in (config loaded? state initialized? see defines)
    unsigned int m_readyToRun;
    //! generation currently computed
    int m_actGener;
    //! generations completed in previous runs
    int m_oldGenerations;
    //! evaluateStep function visitor - called on evaluate step.
    EACirc::EACircVisitor m_evaluateStepVisitor;

    /** checks, if configuration has no contradictions
      */
    void checkConfigurationConsistency();

    /** reinstantialized genetic algorithm object and resets population stats
      * - GAlib is reseeded by current seed at the beginning
      * @param population   will be used to init new instance of genetic algorithm
      *                     (given by reference, copied to new GA object)
      */
    void seedAndResetGAlib(const GAPopulation& population);

    /** saves current state (random generators, seeds, etc.) to file
      * - random generator states
      * - main seed, current galib seed
      * - number of generations required and finished
      * @param filename     file to write to (contents overwritten)
      * @note sets eventual error code in m_status
      */
    void saveState(const string filename);

    /** loads state from file
      * - creates random generators
      * - restores main seed and currnet galib seed
      * - GAlib is not yet reseeded!
      * @param filename     file to read from
      * @note sets eventual error code in m_status
      */
    void loadState(const string filename);

    /** create new initial state
      * - generate main seed if needed
      * - create all random generatos needed
      * - seed GAlib with newly generated seed
      * @note sets eventual error code in m_status
      */
    void createState();

    /** saves current population to file
      * - population size
      * - genome size
      * - full genome for each individual in a population
      * - individual genomes are ordered (SCLAED), so if needed, scaing is done before writing
      * @param filename     file to write to (contents overwritten)
      * @note sets eventual error code in m_status
      */
    void savePopulation(const string filename);

    /** load population from file
      * full genome is loaded for each saved individual
      * - checks if loaded genomes have correct genome size
      * - checks if file provides at least as many genomes as stated in the file header
      * - GAlib seeded and reset
      * @param filename     file to read from (binary population)
      * @note sets eventual error code in m_status
      */
    void loadPopulation(const string filename);

    /** creates new initial population according to settings
      * - seeds galib
      * - reseed and reset GAlib with newly generated seed
      * @note sets eventual error code in m_status
      */
    void createPopulation();

    /** statistics gathered with new test vectors but before population evaluation
     * - can use statistics based on old test vectors (e.g. best)
     * - used to save pvalue of best individual on new test set
     */
    void preEvaluate();

    /** evaluate computation
      * - writes to stats files, graph files
      * - print the best individual in current generation
      */
    void evaluateStep();
    
public:
    EACirc();
    ~EACirc();

    /** loads configuration from xml file to settings attribute
      * - allocate circuit representation, load appropriate configuration
      * - allocate project, load project configuration
      * checks basic consistency of the settings
      * @param filename     configuration file to use
      * @note sets eventual error code in m_status
      */
    void loadConfiguration(const string filename);

    /** does the necessary peparations needed just before running
      * - initializes project
      * - allocates evaluator
      * must be called after loading settings and before state initialization
      * @note sets eventual error code in m_status
      */
    void prepare();

    /** according to settings either loads state and population
      * or creates new initial state and population
      * must be called after loading settings
      * @note sets eventual error code in m_status
      */
    void initializeState();

    /** runs the main program loop accoring to settings
      * must be run after preparing
      * @note sets eventual error code in m_status
      */
    void run();

    /** returns current error status
      * @return status
      */
    int getStatus() const;

    /** save computation (current state and population) to allow recommencing later
      * @param stateFilename        file to save the state (contents overwritten)
      * @param populationFilename   file to save the population (contents overwritten)
      * @note sets eventual error code in m_status
      */
    void saveProgress(const string stateFilename, const string populationFilename);
};

#endif
