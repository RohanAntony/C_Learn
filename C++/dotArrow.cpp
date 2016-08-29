#include <iostream>
#include <cstdlib>

struct node{
  int a;
}emp;

int main(int argc, char const *argv[]) {
  struct node *p = &emp;
  p->a = 10;
  // std::cout << " -> is used to access a pointer pointing to a memory. p->a:" << p->a << std::endl;
  emp.a = 11;
  // std::cout << " . is used to access data of a structure variable stored in stack. emp.a:" << emp.a << std::endl;
  struct node *nodeObject = new node();
  struct node *nodeObjectArray[50];
  for(register int i = 0; i < 50 ; i++ ){
    nodeObjectArray[i] = new node();
    nodeObjectArray[i]->a = 50 - i;
  }
  for (register int i = 0; i < 50; i++) {
    std::cout << i << ":" << nodeObjectArray[i]-> a << std::endl;
  }
  return 0;
}
