#ifndef SEM_2_SIMULATORHYPERTHREAD_H
#define SEM_2_SIMULATORHYPERTHREAD_H
#include "ThreadVirtual.h"
#include <vector>
#include <string>

class SimulatorHyperThread {
private:
    ThreadVirtual thread_1;
    ThreadVirtual thread_2;
public:
    SimulatorHyperThread(std::vector <std::string> & tasks);
    void execute();
};


#endif //SEM_2_SIMULATORHYPERTHREAD_H