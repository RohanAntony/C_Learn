//simple programming demonstrating how exception handling is used
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[]) {
  try{
    std::cout << "Inside the try block" << std::endl;
    int temp = 10;
    throw 'q';
    throw 15.5;
    throw temp;
    std::cout << "Leaving the try block" << std::endl;
  }catch(int i){
    std::cout << "Inside the catch(int) block" << std::endl;
    std::cout << "Caught an exception:"<< i << std::endl;
    std::cout << "Leaving the catch(int) block" << std::endl;
  }catch(double i){
    std::cout << "Inside the catch(double) block" << std::endl;
    std::cout << "Caught an exception:"<< i << std::endl;
    std::cout << "Leaving the catch(double) block" << std::endl;
  }catch(...){
    std::cout << "Inside the catch(...) block" << std::endl;
    std::cout << "Caught an unidentified exception:"<< std::endl;
    std::cout << "Leaving the catch(...) block" << std::endl;
  }
  return 0;
}
