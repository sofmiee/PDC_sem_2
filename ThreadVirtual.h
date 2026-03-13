#ifndef SEM_2_THREADVIRTUAL_H
#define SEM_2_THREADVIRTUAL_H

#include <vector>
#include <string>

class ThreadVirtual {
private:
    std::vector <std::string> * tasks;
    bool flag = false;
    int last_task = 0;
public:
    bool runNextTask(int thread_id);
    ThreadVirtual(std::vector <std::string> & tasks);
};


#endif //SEM_2_THREADVIRTUAL_H