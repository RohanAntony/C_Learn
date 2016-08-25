#include<stdio.h>

//this is an additinal hidden feature in C that is not used
//the question here is on how to access the arguments, possibly as an array
void function1(){ //this can take any number of arguments!!
  printf("Calling function 1");
}

void function2(void){ //this can take no arguments!!
  printf("Calling function 2");
}

int main(int argc, char const *argv[]) {
  function1("Hello","World",2);
  function2();
  // function2("Hello"); //gives an error
  return 0;
}
