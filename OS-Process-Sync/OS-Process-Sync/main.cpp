//
//  main.cpp
//  OS-Process-Sync
//
//  Created by Yanci on 2019/5/9.
//  Copyright © 2019 Yanci. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    /// 1.生产者消费者问题
    /// 单缓存区问题
    /// 多缓存区问题
    
    /*
     sem mutex (互斥)
     sem full  (同步)
     sem empty (同步)
     
     Producer:
     
     do {
     produce an item in next p
     ...
     wait(empty)
     wait(mutex)
     ...
     add next p to buffer
     ...
     signal(mutex)
     signal(full)
     
     }
     
     Comsumer:
     do {
     ...
     wait(full);
     wait(mutex);
     ...
     remove an item from buffer
     ...
     signal(mutex);
     signal(full);
     ...
     comsume the item in next c
     ...
     
     }
     
     
    */
    
    
    
    /// 2.读写问题
    
    /// 3.哲学家问题
    
    return 0;
}
