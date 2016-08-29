#include <iostream>
#include <cstdlib>

using namespace std;

template <class X> void swapArgs(X &a,X &b){
  X temp;
  temp = a;
  a = b;
  b = temp;
}

int main(int argc, char const *argv[]) {
  int i=10,j=20;
  std::cout << "i:" <<i<< ",j:" <<j<< std::endl;
  swapArgs(i,j);
  std::cout << "i:" <<i<< ",j:" <<j<< std::endl;

  float k=10.10,l=20.20;
  std::cout << "k:" <<k<< ",l:" <<l<< std::endl;
  swapArgs(k,l);
  std::cout << "k:" <<k<< ",l:" <<l<< std::endl;
  return 0;
}
