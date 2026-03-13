#ifndef SEM_2_THREADVIRTUAL_H
#define SEM_2_THREADVIRTUAL_H

#include <vector>

class ThreadVirtual {
private:
    std::vector <int> tasks;
public:
    void runNextTask();
};


#endif //SEM_2_THREADVIRTUAL_H