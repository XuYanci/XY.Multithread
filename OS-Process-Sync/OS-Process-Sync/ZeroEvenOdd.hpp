//
//  ZeroEvenOdd.hpp
//  OS-Process-Sync
//
//  Created by Yanci on 2019/11/5.
//  Copyright © 2019 Yanci. All rights reserved.
//

#ifndef ZeroEvenOdd_hpp
#define ZeroEvenOdd_hpp
#include <functional>
#include <semaphore.h>

using namespace std;
using namespace std::placeholders;

#include <stdio.h>
#include <semaphore.h>
#include <semaphore.h>
class ZeroEvenOdd {
private:
    int n;
    int i = 1;
    sem_t _sem_zero;
    sem_t _sem_odd;
    sem_t _sem_even;
public:
    ZeroEvenOdd(int n) {
        this->n = n;
        sem_init(&_sem_zero,0,1);
        sem_init(&_sem_odd,0,0);
        sem_init(&_sem_even,0,0);
    }
    
    // printNumber(x) outputs "x", where x is an integer.
    void zero(function<void(int)> printNumber) {
        for (int ii = 0; ii < n; ii++) {
            sem_wait(&_sem_zero);
            
            printNumber(0);
            if (i % 2 == 1) {
                sem_post(&_sem_odd);
            }
            else {
                sem_post(&_sem_even);
            }
        }
    }
    
    void odd(function<void(int)> printNumber) {
        for (int ii = 0; ii < (n % 2 + n / 2); ii++) {
            sem_wait(&_sem_odd);
            
            printNumber(i++);
            sem_post(&_sem_zero);
        }
    }
    
    void even(function<void(int)> printNumber) {
        for (int ii = 0; ii < n / 2; ii++) {
            sem_wait(&_sem_even);
           
            printNumber(i++);
            sem_post(&_sem_zero);
        }
    }
};
#endif /* ZeroEvenOdd_hpp */
