#include "HyperThreadingSimulator.h"
#include "VirtualThread.h"
#include <vector>

HyperThreadingSimulator::HyperThreadingSimulator(std::vector <int> &tasks)
    :
        thread_1 (tasks),
        thread_2 (tasks)
    {}

void HyperThreadingSimulator::execute() {
    bool running = true;
    while (running) {
        running = false; //считаем, что все закончилось, далее пробуем опровергнуть это

        if (thread_1.run(1)) {
            running = true;
        }
        if (thread_2.run(2)) {
            running = true;
        }
    }
}