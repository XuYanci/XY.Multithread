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
class Foo {
public:
    Foo() {
        
    }
    
    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
    }
    
    void second(function<void()> printSecond) {
        
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
    }
    
    void third(function<void()> printThird) {
        
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
};
#endif /* Foo_hpp */
