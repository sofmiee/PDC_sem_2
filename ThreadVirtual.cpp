#include "ThreadVirtual.h"
#include <iostream>
#include <vector>
#include <string>

static int iterator = 0;

bool ThreadVirtual::runNextTask(int thread_id) {
    if (last_task > (*tasks).size()) {
        return false;
    } else {
        if (flag) {
            std::cout << "Виртуальный поток " << thread_id << " закончил задачу "
            << (*tasks)[last_task] << std::endl;
            flag = false;
        }
        if (flag == false) {
            if (iterator >= (*tasks).size()) {
                return false;
            }
            std::cout << "Виртуальный поток " << thread_id << " начал задачу "
            << (*tasks)[iterator] << std::endl;
            last_task = iterator;
            ++iterator;
            flag = true;

            return true;
        }

    }
}

ThreadVirtual::ThreadVirtual(std::vector<std::string> & tasks) {
    this -> tasks = & tasks;
}
