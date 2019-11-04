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
class FooBar {
private:
    int n;
    
public:
    FooBar(int n) {
        this->n = n;
    }
    
    void foo(function<void()> printFoo) {
        
        for (int i = 0; i < n; i++) {
            
            // printFoo() outputs "foo". Do not change or remove this line.
            printFoo();
        }
    }
    
    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
            
            // printBar() outputs "bar". Do not change or remove this line.
            printBar();
        }
    }
};
#endif /* FooBar_hpp */
