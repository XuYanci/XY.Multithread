//
//  FooBar.hpp
//  OS-Process-Sync
//
//  Created by Yanci on 2019/11/4.
//  Copyright © 2019 Yanci. All rights reserved.
//

#ifndef FooBar_hpp
#define FooBar_hpp
#include <functional>
using namespace std;
using namespace std::placeholders;
#include <stdio.h>

#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>

class FooBar {
private:
    int n;
    sem_t _sem_first;
    sem_t _sem_second;
public:
    FooBar(int n) {
        this->n = n;
        sem_init(&_sem_first,0,1);
        sem_init(&_sem_second,0,0);
    }
    
    void foo(function<void()> printFoo) {
        
        for (int i = 0; i < n; i++) {
            sem_wait(&_sem_first);
            // printFoo() outputs "foo". Do not change or remove this line.
            printFoo();
            sem_post(&_sem_second);
        }
    }
    
    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
            sem_wait(&_sem_second);
            // printBar() outputs "bar". Do not change or remove this line.
            printBar();
            sem_post(&_sem_first);
        }
    }
};
#endif /* FooBar_hpp */
