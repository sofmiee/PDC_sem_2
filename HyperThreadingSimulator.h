#ifndef SEM_2_HYPERTHREADINGSIMULATOR_H
#define SEM_2_HYPERTHREADINGSIMULATOR_H

#include "VirtualThread.h"
#include <vector>

class HyperThreadingSimulator {
private:
    VirtualThread thread_1;
    VirtualThread thread_2;
public:
    HyperThreadingSimulator(std::vector<int> &tasks);
    void execute();
};
#endif //SEM_2_HYPERTHREADINGSIMULATOR_H