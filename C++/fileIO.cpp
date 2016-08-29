#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;

struct node{
  char string[100];
  node(const char * str){ strcpy(string,str); }
};

int main(int argc, char const *argv[]) {
  ofstream out;
  ifstream in;
  fstream io;
  node name1("Rohan"),name2("Antony");
  int val=20;
  char str[100];
  in.open("test/file1", ios::in);
  out.open("test/file1", ios::out | ios::trunc );
  if(in && out){
    std::cout << "Connected to the test file!!" << std::endl;
    out<<"10";
    std::cout << val << std::endl;
    out.flush();
    in>>val;
    std::cout << val << std::endl;
    out.close();
    in.close();
  }else{
    std::cout << "Unable to connect to the test file!!!" << std::endl;
  }

  io.open("test/file2",ios::in | ios::out | ios::trunc);
  if(io){
    std::cout << "Connected to file2 to read|write!!" << std::endl;
    io.write((char *)&name1,sizeof(node));
    io.flush();
    io.write((char *)&name2,sizeof(node));
    io.flush();
    char *text;
    io.getline(text,100);
    if(io)
      std::cout << text << std::endl;
  }
  return 0;
}
