//
//  H2O.hpp
//  OS-Process-Sync
//
//  Created by Yanci on 2019/12/5.
//  Copyright © 2019 Yanci. All rights reserved.
//

#ifndef H2O_hpp
#define H2O_hpp

#include <stdio.h>
#include <functional>
#include <semaphore.h>

using namespace std;
using namespace std::placeholders;
class H2O {
public:
    H2O() {
        
    }
    
    void hydrogen(function<void()> releaseHydrogen) {
        
        // releaseHydrogen() outputs "H". Do not change or remove this line.
        releaseHydrogen();
    }
    
    void oxygen(function<void()> releaseOxygen) {
        
        // releaseOxygen() outputs "O". Do not change or remove this line.
        releaseOxygen();
    }
};
#endif /* H2O_hpp */
