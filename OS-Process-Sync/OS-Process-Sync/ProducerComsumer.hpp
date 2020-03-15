//
//  ProducerComsumer.hpp
//  OS-Process-Sync
//
//  Created by Yanci on 2020/3/13.
//  Copyright © 2020 Yanci. All rights reserved.
//

#ifndef ProducerComsumer_hpp
#define ProducerComsumer_hpp


#include <stdio.h>
#include <mutex>
#include <semaphore.h>
#include <dispatch/dispatch.h>
using namespace std;
class ProducerComsumer {
    
public:
    /// Buffer Size
    int bufferSize = 10;
    
    /// Buffer
    int *buffer;
    
    /// Full Sem
    dispatch_semaphore_t full;
    
    /// Empty Sem
    dispatch_semaphore_t empty;
    
    /// Mutex
    pthread_mutex_t mutex;
    
    ProducerComsumer() {
        full = dispatch_semaphore_create(0);
        empty = dispatch_semaphore_create(bufferSize);
        pthread_mutex_init(&mutex,NULL);
        buffer = (int*)malloc(sizeof(int) * bufferSize);
    }
    
    
    void* produce(void* args)
    {
        dispatch_semaphore_wait(empty,DISPATCH_TIME_FOREVER);
        pthread_mutex_lock(&mutex);
        printf("Produce...");
        pthread_mutex_unlock(&mutex);
        dispatch_semaphore_signal(full);
        return 0;
    }
    
    void* comsume(void* args)
    {
        dispatch_semaphore_wait(full,DISPATCH_TIME_FOREVER);
        pthread_mutex_lock(&mutex);
        printf("Comsume...");
        pthread_mutex_unlock(&mutex);
        dispatch_semaphore_signal(empty);
        return 0;
    }
    
    
};
#endif /* ProducerComsumer_hpp */



