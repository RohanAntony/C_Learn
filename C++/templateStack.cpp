#include <iostream>

using namespace std;

template <class dataType> class Stack{
  dataType *items;
  int size;
  int top;
public:
  Stack();
  Stack(int s);
  bool push(dataType o);
  bool pop(dataType &o);
  bool operator<<(dataType);
  bool operator>>(dataType&);
};

int main(int argc, char const *argv[]) {
  Stack<int> S1(3);
  S1<<1;
  S1<<2;
  S1<<3;
  S1<<4;
  int temp;
  S1>>temp;
  S1>>temp;
  S1>>temp;
  S1>>temp;
  return 0;
}

template<class dataType> Stack<dataType>::Stack(){
  size = 100;
  top = -1;
  items = new dataType[size];
}

template<class dataType> Stack<dataType>::Stack(int s){
  size = s;
  top = -1;
  items = new dataType[size];
}

template<class dataType> bool Stack<dataType>::push(dataType o){
  if(top == size - 1){
    std::cout << "Stack full!!!" << std::endl;
    return false;
  }else{
    items[++top] = o;
    std::cout << "Successfully pushed '"<< o <<"'" << std::endl;
    return true;
  }
}

template<class dataType> bool Stack<dataType>::pop(dataType &o){
  if(top == -1){
    std::cout << "Stack empty!!!" << std::endl;
    return false;
  }else{
    o = items[top--];
    std::cout << "Successfully popped '"<< o <<"'" << std::endl;
    return true;
  }
}

template<class dataType> bool Stack<dataType>::operator<<(dataType o){
  return push(o);
}

template<class dataType> bool Stack<dataType>::operator>>(dataType &o){
  return pop(o);
}
