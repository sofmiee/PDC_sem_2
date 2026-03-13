#ifndef SEM_2_VIRTUALTHREAD_H
#define SEM_2_VIRTUALTHREAD_H

#include <vector>

class VirtualThread {
private:
    std::vector<int>* tasks; //список заданий
    static int iteration; //текущее задание
public:
    VirtualThread(std::vector<int> &tasks); //конструктор
    bool run(int thread_id);
};


#endif //SEM_2_VIRTUALTHREAD_H