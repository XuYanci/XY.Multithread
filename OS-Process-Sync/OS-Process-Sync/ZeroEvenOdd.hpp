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

using namespace std;
using namespace std::placeholders;

#include <stdio.h>
class ZeroEvenOdd {
private:
    int n;
    
public:
    ZeroEvenOdd(int n) {
        this->n = n;
    }
    
    // printNumber(x) outputs "x", where x is an integer.
    void zero(function<void(int)> printNumber) {
        
    }
    
    void even(function<void(int)> printNumber) {
        
    }
    
    void odd(function<void(int)> printNumber) {
        
    }
};
#endif /* ZeroEvenOdd_hpp */
