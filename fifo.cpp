// this file could not be modified!!!!!
#include <iostream>
#include <string>
#include <stdlib.h>     //for using the function sleep
#include "fifo.h"


static const int SIZE=30; // maximum size of the buffer, please do not USE 30 or SIZE in your program!!!!
int buffer[SIZE];
int head=0;
int tail=0;


// printing content of the buffer
void print() {
  std::cout << " [ ";
  for(int i=tail;i!=head;i++) 
    std::cout << buffer[i] << ", " ;
  std::cout << " ]" << std::endl << std::flush;
}

void push(int v) { 
   buffer[head] = v; 
   head = (head+1) % SIZE ; 
}
int pop() { 
  int result = buffer[tail] ; 
   tail = (tail+1) % SIZE ;
  return result;
}

// only reads top
int read() {
  int result = buffer[tail] ;
  return result;
}

// work for 0..SIZE-1, so there will be no possibility to store SIZE elements
int size() {
  return (head+SIZE-tail) % SIZE;
}

