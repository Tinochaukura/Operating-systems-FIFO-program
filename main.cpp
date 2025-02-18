// this file CAN NOT BE modified by a student
#include <iostream>
#include <string>
#include "monitor.h"
#include "lab15.h"
#include <cstdlib>
#include <ctime>

int randomTime(int period) {
  int result = 1 + std::rand() / ((RAND_MAX + 1u) / period); 
  //std::cout << result << '\n';
  return result ;
}

void* threadAcode(void* arg) {
  while(true) {
    usleep(randomTime(100));
    readA();
  }
}

void* threadBcode(void* arg) {
  while(true) {
    usleep(randomTime(100));
    readB();
  }
}

void* threadCcode(void* arg) {
  while(true) {
    usleep(randomTime(100));
    readC();
  }
}

void* threadDcode(void* arg) {
  for (int i = 100; i <= 110; ++i) {
    usleep(randomTime(20));
    writeA(i);
  }
  usleep(100);   // wait 0.1 sec
  return NULL;
}

void* threadEcode(void* arg) {
  for (int i = 200; i <= 210; ++i) {
    usleep(randomTime(50));
    writeB(i);
  }
  usleep(100);   // wait 0.1 sec
  return NULL;
}


int main(){
  std::srand(std::time(nullptr)); // use current time as seed for random generator
  pthread_t threadA; pthread_create(&threadA, NULL, threadAcode, NULL);
  pthread_t threadB; pthread_create(&threadB, NULL, threadBcode, NULL);
  pthread_t threadC; pthread_create(&threadC, NULL, threadCcode, NULL);
  pthread_t threadD; pthread_create(&threadD, NULL, threadDcode, NULL);
  pthread_t threadE; pthread_create(&threadE, NULL, threadEcode, NULL);
  
  pthread_join(threadA, (void**)NULL);
  pthread_join(threadB, (void**)NULL);
  pthread_join(threadC, (void**)NULL);
  pthread_join(threadD, (void**)NULL);
  pthread_join(threadE, (void**)NULL);

  return 0;
}
