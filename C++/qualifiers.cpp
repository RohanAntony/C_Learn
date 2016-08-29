//C++ supports 2 qualifiers and 4 storage class specifiers
#include <iostream>
#include <cstdlib>

using namespace std;

void calledNTimes(){
  //static is a storage class specifier states that data is never changed
  static int i;
  bool a = true;
  i++;
  std::cout << "Called "<<i<<" times" << std::endl;
}

int main(int argc, char const *argv[]) {
  //this are the two qualifiers
  const int number = 1; //defines number as constant and can never be changed during program
  volatile int number2 = 10;  //defines number2 can be changed volatily which means compiler needs to
  std::cout << number <<":"<<number2 << std::endl;
  //the 4 storage class specifiers are
  extern int first , last;  //states the first has been define
  std::cout << first <<":"<< last << std::endl;
  calledNTimes();
  calledNTimes();
  calledNTimes();
  for(register int i=0;i<10;i++){
    std::cout << "i is a register variable" << std::endl;
  }
  return 0;
}

int first = 10,last = 20;
