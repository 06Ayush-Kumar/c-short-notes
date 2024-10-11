                            //1.basic of c++ program
// way of taking input in string(will study more in string topic)

#include<iostream>
#include<string>
using namespace std;
int main(){
  string str;     // to take string input and print it
cout<<"enter your name";
cin>>str;   // if you give ayush kumar then only ayush will be considered 
return 0;
}

// getline function:  Function to get the entire line taking input stream and string variable.

getline(cin,str);  // ayush kumar  // it doesnt break after space like simple cin 
cout<<"hello"<<str;  // hello ayush kumar

// data types: just stores data of different types

DATA TYPE       	MEANING	         SIZE
bool	            boolean	       undefined
char	           character	      8-bits
wchar_t	         wide char	      16-bits
char16_t	       unicode char	    16-bits
char32_t	       unicode char   	32-bits
short	           short integer	  16-bits
int	              integer	         16-bits
long	             long-integer	   32-bits
long long	      very-long integer   64-bits
unsigned char	   single-precision   32-bits
float	           double-precision	  64-bits
double	         double-precision	  10/16 bytes

//sizeof(): to find size of a variable
  int a;
  float b;
cout<<sizeof(a);    //16
cout<<sizeof(b);   // 64 

// way of assigning liter
int a=4;
int a(4);  //all are same 
int a{4};

 a = 10;   // Decimal
 b1 = 010; // Octal
 c = 0x10; // Hexa

long distance=763876832L;  // use L as the end to make it long otherwise it will be just int
float s=12.4F;  // use f otherwise by default it would be double
float exponent = 123e-2; // Depicts usage of scientific notations. e to the power minus 2

//overflow: going out of the range:
// like for int the range is -128 to 128

char x = 127;
cout << "Value initialised to x = " << (int)x << endl; // Displaying the int value of char x

 int a = INT32_MAX; // Maximum integer in a 32-bit system
 int b = INT32_MIN; // Minimum integer in a 32-bit system

// using argc and argc inside main

#include <iostream>
int main(int argc, const char **argv) {
std::cout << "Number of arguments: " << argc << std::endl;  
// Print all arguments
 for (int i = 0; i < argc; ++i) {
  std::cout << "Argument " << i << ": " << argv[i] << std::endl; 
  // ouput;Number of arguments: 3
//Argument 0: ./myprogram
//Argument 1: hello
//Argument 2: world

    }
  return 0;
}
/* Arguments argc and argv:
The main() function signature can take two parameters: argc and argv.
argc (argument count) holds the number of command-line arguments passed to the program.
argv (argument vector) is an array of strings (character pointers) representing the actual arguments.
These allow you to access any input provided when the program is executed from the command line.
For example, if you run the program as ./myprogram arg1 arg2, argc will be 3 (program name + two arguments), and argv will store the name of the program and the arguments.
*/

//compound operator:
int x=4;
x+=4  // same as x=x+4;

// pre and post increament and decrement:

int x = 5, storage;
storage = ++x; // Value of x incremented first and then as 6 it is stored in storage var.
storage = x++; // Value which was in previous stage i.e. 6 is stored in storage var and then incremented to 7.
// same with decreamnet
--x or x--

  
// BITWISE OPERATOR:
  
  a&b; or a|b;
  a^b  // XOR

// ENUM TYPEDEF:It is like an identifier
//It is like an identifier
//typedef used to define our own data type or giving alias to some other data type, so it is
//easier for us to keep track, prevent errors and make code more readable.  
  enum ayush{
       a=2;  // can give any value default is 1
      b;
};
ayush var;
cout<<b // ouput will be 3 as increament of a which is 2 is 3(2+1)
var=a  // assingnig value of a to var

typedef float salary;  // salary is new data type which we created
salary basic, per_allow, per_deduct, net;
















  
  














  
