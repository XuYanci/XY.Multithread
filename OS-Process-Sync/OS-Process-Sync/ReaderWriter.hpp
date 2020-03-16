//
//  ReaderWriter.hpp
//  OS-Process-Sync
//
//  Created by Yanci on 2020/3/13.
//  Copyright © 2020 Yanci. All rights reserved.
//

#ifndef ReaderWriter_hpp
#define ReaderWriter_hpp

#include <stdio.h>
#include <mutex>
#include <semaphore.h>
#include <dispatch/dispatch.h>
using namespace std;


/// 读写者
/// 读者优先
class ReaderWriter {

    
    dispatch_semaphore_t w;

    /// Mutex
    pthread_mutex_t mutex;
    
    /// Read Count
    int rc = 0;
    
    ReaderWriter() {
        /// 10 = reader count
        w = dispatch_semaphore_create(10);
        pthread_mutex_init(&mutex,NULL);
    }
    
    void read() {
        pthread_mutex_lock(&mutex);
        rc++;
        if (rc==1) dispatch_semaphore_wait(w, DISPATCH_TIME_FOREVER);
        pthread_mutex_unlock(&mutex);
        printf("Read...");
        
        pthread_mutex_lock(&mutex);
        rc--;
        if (rc==0) dispatch_semaphore_signal(w);
        pthread_mutex_unlock(&mutex);
    }
    
    void write() {
        dispatch_semaphore_wait(w, DISPATCH_TIME_FOREVER);
        printf("Write...");
        dispatch_semaphore_signal(w);
    }
    
    
};
#endif /* ReaderWriter_hpp */
