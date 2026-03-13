#include "SimulatorHyperThread.h"
#include <vector>
#include <string>

SimulatorHyperThread::SimulatorHyperThread(std::vector <std::string> & tasks)
    : thread_1(tasks), thread_2(tasks) {}

void SimulatorHyperThread::execute() {
    bool running = true;
    while (running) {
        running = false;
        if (thread_1.runNextTask(1)) {
            running = true;
        }
        if (thread_2.runNextTask(2)) {
            running = true;
        }
    }
}