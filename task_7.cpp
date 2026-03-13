#include <vector>
#include <string>
#include "SimulatorHyperThread.h"

int main() {
    std::vector <std::string> tasks = {"A", "B", "C", "D", "E", "F"};
    SimulatorHyperThread simulator(tasks);
    simulator.execute();
}