#include <iostream>
#include <cstdlib>
#define MAX_SIZE 4

using namespace std;

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
  int temp;
  stack.push(19);
  stack.push(25);
  stack.push(12);
  stack.push(28);
  stack.push(67);
  stack.displayAllElements();
  std::cout << "Poping all elements out of stack" << std::endl;
  temp = stack.pop();
  (temp == -1)?cout<<"":cout<<temp<<endl;
  temp = stack.pop();
  (temp == -1)?cout<<"":cout<<temp<<endl;
  temp = stack.pop();
  (temp == -1)?cout<<"":cout<<temp<<endl;
  temp = stack.pop();
  (temp == -1)?cout<<"":cout<<temp<<endl;
  temp = stack.pop();
  (temp == -1)?cout<<"":cout<<temp<<endl;
  stack.displayAllElements();
  return 0;
}

int Stack::pop(){
  if(top == -1){
    cout<<"No more elements in the stack!!"<<endl;
    return -1;
  }else{
    int temp = array[(top)];
    top--;
    return temp;
  }
}

void Stack::push(int value){
  if(top == MAX_SIZE - 1)
    cout<<"Stack full, no more space to push"<<endl;
  else{
    top++;
    array[(top)] = value;
  }
}

int Stack::numberOfElements(){
  return top+1;
}

void Stack::displayAllElements(){
  if(top == -1){
    cout<<"No more elements in the stack"<<endl;
  }
  int temp = top;
  while(temp >= 0){
    cout <<array[temp]<< endl;
    temp--;
  }
}
