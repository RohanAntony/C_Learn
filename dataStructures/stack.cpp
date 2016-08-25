#include "stdio.h"
#include "stdlib.h"
#define MAX_SIZE 4

class Stack{
  int array[MAX_SIZE];
  int top = -1;
public:
  void push(int value);
  int pop();
  int numberOfElements();
  void displayAllElements();
}stack;

int main(int argc, char const *argv[]) {
  stack.push(19);
  stack.push(25);
  stack.push(12);
  stack.push(28);
  stack.push(67);
  stack.displayAllElements();
  printf("%d\n",stack.pop());
  printf("%d\n",stack.pop());
  printf("%d\n",stack.pop());
  printf("%d\n",stack.pop());
  printf("%d\n",stack.pop());
  stack.displayAllElements();
  return 0;
}

int Stack::pop(){
  if(top == -1)
    printf("%s\n","No more elements in the stack!!" );
  else{
    return array[(top)--];
  }
}

void Stack::push(int value){
  if(top == MAX_SIZE - 1)
    printf("%s\n","Stack full, no more space to push" );
  else{
    array[++(top)] = value;
  }
}

int Stack::numberOfElements(){
  return top+1;
}

void Stack::displayAllElements(){
  int temp = top;
  while(temp >= 0){
    printf("%d \n",array[temp] );
    temp--;
  }
}
