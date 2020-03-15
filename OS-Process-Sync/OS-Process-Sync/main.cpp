//
//  main.cpp
//  OS-Process-Sync
//
//  Created by Yanci on 2019/5/9.
//  Copyright © 2019 Yanci. All rights reserved.
//

#include <iostream>
#include "ProducerComsumer.hpp"
#include "pthread.h"
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

ProducerComsumer PC;


void *produce(void *args) {
    while(1) {
        PC.produce(NULL);
        sleep(2);
    }
    return 0;
}

void *comsume(void *args) {
    while(1) {
        PC.comsume(NULL);
       sleep(1);
    }
    return 0;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
  
    pthread_t thread1;
    pthread_create(&thread1, NULL, produce, NULL);
    
    pthread_t thread2;
    pthread_create(&thread2, NULL, comsume, NULL);
    
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    
    
    return 0;
}


