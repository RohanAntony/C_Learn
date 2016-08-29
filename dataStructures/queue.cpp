#include <iostream>
#include <cstdlib>

using namespace std;

class Queue{
  int m_front,m_rear,m_numberOfElements;
  int *m_queue;
public:
  Queue();
  Queue(int);
  bool enqueue(int);
  bool dequeue(int &);
  int size();
};

int main(int argc, char const *argv[]) {
  Queue *q1 = new Queue(10);  //created in the heap run time with 10 elements
  Queue *q2 = new Queue();  //created in the heap run time with 100 elements
  Queue q3; //created in the stack compile time with 100 elements
  Queue q4(10); //created in the stack compile time with 10 elements
  return 0;
}

Queue::Queue(){
  std::cout << "Setting number of elements to default:100" << std::endl;
  m_numberOfElements = 100;
  m_queue = new int(100);
  m_front = 0;
  m_rear = -1;
}

Queue::Queue(int numberOfElements){
  std::cout << "Setting number of elements as defined:"<<numberOfElements<< std::endl;
  m_numberOfElements = numberOfElements;
  m_queue = new int(numberOfElements);
  m_front = 0;
  m_rear = -1;
}

//rear points to the last element added in queue
bool Queue::enqueue(int value){
  array[m_front++] = value;
}
