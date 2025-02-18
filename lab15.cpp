// !!!!ONLY THIS FILE CAN BE MODIFIED!!!
#include "lab15.h"

std::string student = "Jeremy Clarkson 123456";


// prints message and exit
void message_and_exit() {
  std::cout << student  << "\n";
  exit(0);
}

// counts to 0 and then print message and exit
void check_and_exit() {
  static int check_and_exit_counter = 100;
  if(check_and_exit_counter-- < 0) 
    message_and_exit();
}

void readA()
{
  int value = 0;
  check_and_exit();
  // to be implemented by Student
  std::cout << "readA " << value ;
  print();
}

void readB()
{
  int value = 0;
  check_and_exit();
  // to be implemented by Student
  std::cout << "readB " << value ;
  print();
}

void readC()
{
  int value = 0;
  check_and_exit();
  // to be implemented by Student
  std::cout << "readC " << value ;
  print();
}

void writeA(int no)
{
  int value = 0;
  check_and_exit();
  // to be implemented by Student
  std::cout << "writeA " << value ;
  print();
}

void writeB(int no)
{
  int value = 0;
  check_and_exit();
  // to be implemented by Student
  std::cout << "writeB " << value  ;
  print();
}


