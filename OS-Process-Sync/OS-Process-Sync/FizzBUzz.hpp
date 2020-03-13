//
//  FizzBUzz.hpp
//  OS-Process-Sync
//
//  Created by Yanci on 2020/3/13.
//  Copyright © 2020 Yanci. All rights reserved.
//

#ifndef FizzBUzz_hpp
#define FizzBUzz_hpp
#include <functional>
#include <semaphore.h>
using namespace std;
#include <stdio.h>
class FizzBuzz {
private:
    int n;
    
public:
    FizzBuzz(int n) {
        this->n = n;
    }
    
    // printFizz() outputs "fizz".
    void fizz(function<void()> printFizz) {
        
    }
    
    // printBuzz() outputs "buzz".
    void buzz(function<void()> printBuzz) {
        
    }
    
    // printFizzBuzz() outputs "fizzbuzz".
    void fizzbuzz(function<void()> printFizzBuzz) {
        
    }
    
    // printNumber(x) outputs "x", where x is an integer.
    void number(function<void(int)> printNumber) {
        
    }
};
#endif /* FizzBUzz_hpp */
