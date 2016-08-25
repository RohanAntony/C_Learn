#include <stdio.h>
#define INCREMENT(x) 1+x
// x can be any type (int,float,double,char) which is helpul
#define MUL(a,b) a*b
// MACROS are not computed or parsed but only substituted
#define MERGE(a,b) a##b
// mergeing 2 params passed can be done by ## symbol

int main(int argc, char const *argv[]) {
  /* code */
  printf("%d\n",INCREMENT(1));
  printf("%f\n",INCREMENT(1.1));
  printf("%s\n","-------------");
  printf("MUL(2+3,3+4):%d\n",MUL(2+3,3+4));
  printf("2+3*3+4:%d\n",2+3*3+4);
  printf("(2+3)*(3+4):%d\n",(2+3)*(3+4));
  printf("%s\n","-------------" );
  printf("MERGE(12,24):%d\n",MERGE(12,24) );
  printf("MERGE(12.04,12):%f\n",MERGE(12.04,12) ); // it performs a simple merge
  printf("%s\n","-------------" );
  return 0;
}
