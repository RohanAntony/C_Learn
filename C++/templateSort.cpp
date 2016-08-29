#include <iostream>

using namespace std;

template <class X> void swapValues(X &a,X &b){
  X temp;
  temp = a;
  a = b;
  b = temp;
}

template <class X> void sortArray(X *items,int count,int neg){
  X temp;
  for(int i=0;i<count-1;i++){
    for(int j=0;j<count-i-1;j++){
      if(items[j]*neg < items[j+1]*neg){
        swap(items[j],items[j+1]);
      }
    }
  }
}

template <class X> void printArray(X *items,int count){
  for(int i=0;i<count;i++){
    std::cout << items[i] <<" ";
  }
  std::cout << std::endl;
}

int main(int argc, char const *argv[]) {
  int array[] = {10,8,6,4,2,1,3,5,7,9};
  sortArray(array,10,1);
  printArray(array,10);

  float array2[] = {10.01,10.02,10.05,10.06,10.08,10.1,10.03,10.04,10.07,10.09};
  sortArray(array2,10,-1);
  printArray(array2,10);
  return 0;
}
