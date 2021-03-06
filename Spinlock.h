#ifndef THREADSLEARN_SPINLOCK_H
#define THREADSLEARN_SPINLOCK_H

#include <thread>
#include <chrono>

class Spinlock {
private:
    bool lock;
public:
    void acquire();

    void release();

    bool try_lock();

    Spinlock() {
        lock = false;
    }
};


#endif //THREADSLEARN_SPINLOCK_H
