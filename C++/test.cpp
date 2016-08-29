#include <iostream>
#include <cstdlib>

struct node{
    int a,b;
  public:
    node();
    node(int,int);
};

node::node(){
  a = 10;
  b = 20;
}

node::node(int a,int b){
  this->a = a;
  this->b = b;
}

int main(int argc, char const *argv[]) {
  node *p = new node [100];
  return 0;
}
