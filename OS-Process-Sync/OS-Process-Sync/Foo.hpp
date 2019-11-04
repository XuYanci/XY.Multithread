//
//  Foo.hpp
//  OS-Process-Sync
//
//  Created by Yanci on 2019/11/2.
//  Copyright © 2019 Yanci. All rights reserved.
//

#ifndef Foo_hpp
#define Foo_hpp
#include <functional>

using namespace std;
using namespace std::placeholders;

#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>

class Foo {
public:
    
    sem_t _sem_first;
    sem_t _sem_second;
    sem_t _sem_third;
    
    
    Foo() {
        sem_init(&_sem_first,0,0);
        sem_init(&_sem_second,0,0);
        sem_init(&_sem_third,0,0);
    }
    
    
    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        
        sem_post(&_sem_first);
    }
    
    void second(function<void()> printSecond) {
        sem_wait(&_sem_first);
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        sem_post(&_sem_second);
    }
    
    void third(function<void()> printThird) {
        sem_wait(&_sem_second);
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
        sem_post(&_sem_third);
        
    }
    
};
#endif /* Foo_hpp */
