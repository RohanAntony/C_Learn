5 basic data types
  char , int , float , double , bool

4 modifier types
  signed , unsigned , long , short

local variables and global variables
  - scope of each

qualifiers
  const - defines constant that must be assigned at definition and do not change
  `const int MAX_VALUE = 255;`
  volatile - defines that value of variable can change externally of the program logic
  `volatile int portValue = 10; portValue = 20;`

storage qualifiers
  extern - defines that variable are declared externally
  `extern int a,b;
   //after main
   int a=10,b=20;`
  static
    static local  - local variables to function that cannot be accessed outside but exist with same value across all function calls
    static global - global variables to function that can be accessed anywhere
  register  - used to define variables with higher importance
  auto

Literals
  - Character (ASCII) 'a'
  - Hexadecimal (0xFF)
  - Octal (012)
  - String "Alter"
  - Escape Characters

Operators
  - Assignment
  - Arithmetic  (5 operators)
  - Inc and Dec
  - Relational (>,<,>=,<=,!=,==)
  - Logical   (&&,||,!)
  - Bitwise (&,|,^(XOR),~(1's Complement),>>,<<)
  - ?:
  - &(address), * (pointer)
  - sizeof()
  - .(dot)  access structure that is defined in stack or during compile time
    ->(arrow) access structure that is defined with a pointer

if else, switch case, for, while, do while

exit() <cstdlib>
  - EXIT_SUCCESS, EXIT_FAILURE

Array
  One dimensional
    - definition `int a[10]`
    - arrays are also implicitly a pointer to a memory location
    - can pass unsized array to a function whose value will be size of array when passed
    - strings are null terminated
    - important string functions strcmp(),strcpy(),strlen(),strcat()
    - strstr(s1,s2) returns pointer to first occurence of s2 in s1
    - strchr(s1,ch) returns pointer to first occurence of ch in s1
  Two dimensional
    - `char str_array[30][80]`
  Multi dimensional arrays

Pointers
  - defining a pointer  `int *p`
  - assigning   `p = &a`
  - increment and decrement , happens based on size of data type
  - array of pointers `int *a[10]`
  - pointer to functions
  - pointer of pointer `int **q; q = &p`

Functions
  - passing by value
  - passing by reference
    - use `&` and `*`

Structures
  - defining a structure
  - accessing members
  - assigning one structure data to another

Unions and Enums

IO
  - fopen(),fclose()
  - fputc(),fgetc() //write and read single character from and to a file
  - fputs(),fgets() //write and read strings from and to a file
  - fseek() //seeks to specified byte in a file
  - fflush()  //flushes a file
  - feof()  //returs if eof encountered or not
  - FILE* fp;

Classes
  - same as Structures
  - except , default all members are private
  - defining methods outside using scope resolution operators
  - defining constructors and destructors

Function overloading
  - 2 functions can have same name but different set of parameters
  - difference in type of parameters can be used to overload the functions

Operator overloading

Inheritance
  - class baseClass{};
    class derivedClass : public baseClass {};

Friend functions
`  class MyClass{
    int a,b;  //private
  public:
    friend int sum(MyClass x);  //define that MyClass is a non member function that can access private members of MyClass
    int member();
  };
  int MyClass::member(){}
  int sum(MyClass x){ // x.a and x.b accessible here }
`
  - friend functions are non member functions with access to private and protected members of the class
  - friend functions need to be prototyped inside the class definition with the friend keyword
  - many classes can have a common friend function that can access all the class objects private members
  - Friend classes are similar to friend functions except the class defined as friend has complete access to private members of the class it is defined in.

Inline functions
  - `inline int max(a,b){ return a>b?a:b; }`
  - inline states the compiler to replace the body with the function call

constructors
  - can have parameters, default one doesnt have any parameter
  - execution chain
  - copy constructors (one parameter only and that is the object of that class as a reference)

static data members
  - static data members of a class are created only once for 'n' objects
  - static member functions are methods that access only static data members

pointers with objects
  - base class pointer can point to derived class object but the reverse is not possible
  - but base class pointer still considers the object as base class and only those member functions can be accessed.
  - using type casting to derived class * , derived class member functions can also be accessed.

operator overloading
`returnType classname::operator#(arg-list){}`
  - # is the placeholder
  - returnType is type of object
  - arg-list for binary operators consist of 1 parameter
  - arg-list for unary operators consist of no parameter
