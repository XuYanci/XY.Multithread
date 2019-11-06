//
//  DiningPhilosophers.hpp
//  OS-Process-Sync
//
//  Created by Yanci on 2019/11/7.
//  Copyright © 2019 Yanci. All rights reserved.
//

#ifndef DiningPhilosophers_hpp
#define DiningPhilosophers_hpp
#include <functional>
#include <semaphore.h>

using namespace std;
using namespace std::placeholders;

#include <stdio.h>
class DiningPhilosophers {
public:
    DiningPhilosophers() {
        
    }
    
    void wantsToEat(int philosopher,
                    function<void()> pickLeftFork,
                    function<void()> pickRightFork,
                    function<void()> eat,
                    function<void()> putLeftFork,
                    function<void()> putRightFork) {
        
    }
};
#endif /* DiningPhilosophers_hpp */
