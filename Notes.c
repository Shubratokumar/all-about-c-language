/*
<======================================  Basic Concepts  ==============================================>

# #include <stdio.h> (Header) it's called preprocessor directive.

# Data Types: In C there are no data types like: boolean, string;

# Variables:
Variables is the name of a memory location which stores some data.

* Rules:

- Variables are case sensitive; 
- 1st character is alphabet or '_';
- no comma/blank space;
- No other symbol other than '-';
- Variables name must be meaningful one;
- Naming: int, char, float, long, etc.

# Constant: Values that don't change(fixed);

- In general constant is written in capital letter;
  const float PI = 3.1416;

* Types:
- Integer Constants: 1,2,3,4,5,0,-3,-2 etc.
- Real Constants: 1.0, 3.0, 3.14, -9.4 etc.
- Character Constants: 'A','d', '#','$','*' etc. (Character constant must be written with single quote.)

# Keywords: Reserved words that have special meaning to the compiler.(32 Keywords in C);

- Every Keywords must be written in small letter. 

* auto,     break,   case,     char, 
  continue, do,      default,  const, 
  double,   else,    enum,     extern, 
  for,      if,      goto,     float, 
  int,      long,    register, return, 
  signed,   static,  sizeof,   short, 
  struct,   switch,  typeof,   union, 
  void,     while,   volatile, unsigned.

# Output: printf("Hello, Shubrato\n"); \n for new line;

* Cases: 
- integers: printf("age is %d[decimal]", age);
- real numbers: printf("value is %f", value);
- characters: printf("hash is look something like this %c", hash);

# Input: scanf("%d", &age);

- scanf("[data_type(format specify e.g. %d for integers)]", &[address][variable name]);

# Data Types and Memory:

- bool(Boolean)     1 byte
- char(Character)   1 byte
- double(Double)    8 byte
- float(Float)      4 byte
- int(Integer)      4 byte
- long(Long)        8 byte
- string(String)    ? byte

# Compilation: A computer program that translate C code into machine code

- hello.c(computer program) -> C Compiler(translator) -> hello.exe(machine code[executable]);

# সি এর কম্পাইলার ও সি তে লিখা।

  \b ব্লাঙ্ক স্পেস (blank)
  \t হরাইজন্টাল ট্যাব (horizontal tab)
  \v ভারটিক্যাল ট্যাব (vertical tab)
  \r ক্যারিজ রিটার্ন (carriage return)
  \f ফরম ফিড (form feed)
  \n নিউ লাইন (new line)

* In C there is no true or false. Only 1 or 0, if true then will return 1 and false then will return 0;



<====================================  Instructions & Operators  ======================================>


# Instructions: These are statements in a Program

* Type Declaration Instructions: 

- Declare variable before using it. 

* Arithmetic Instructions: 

- e.g. a + b; here a&b are operand and + is operator;
- Note: single variable on the LHS;
- Note: pow(x,y) for x to the power y;
- Modular Operator: % e.g. returns remainder for int;
- Type conversion:
  * int op(operation) int ----> int; 2 bytes
  * int op(operation) float ----> float; 4 bytes
  * float op(operation) float ----> float; 4 bytes
- Operator Precedence(Priority): (*,/,%) == > (+,-) == > =(Assignment operator);
- Associativity(for same precedence): Left to Right [x = 4*3/5*8 e.g.(((4*3)/5)*2)];

* Control Instructions: Used to determine flow of program. 
- Sequence Control;
- Decision Control(if-else);
- Loop Control(for,while);
- Case Control(case);



# Operators: 

- Arithmetic Operators: +,-,*,/,% etc. 
- Relational Operators: ==(equal to), <, >, <=,>=, !=(not equal to)
- Logical Operators: &&(and), ||(or), !(not)
- Bitwise Operators: 
- Assignment Operators(short hand): =, +=, -=, *=, /=, %=; 
- Ternary Operators: Conditional ( true ? "something " : false )
- Precedence(Priority):

  Priority        Operator
  1               !
  2               *,/,%
  3               +,-
  4               <,<=,>,>=
  5               ==, !=
  6               &&
  7               ||
  8               =



<====================================   Conditional Statements   ======================================>

# Types: if-else and Switch;

* if-else Statement: 

- if(Condition) { [Compulsory]
    do something if True
  } 
  else { [Optional]
    do something if False
  }

* Ternary Operators:

- Condition ? doSomething if True : doSomething if False;

* Switch: 

- swich(number){
  case C1: do something
        break;
  case C2: do something
        break;
  default: do something
  }

- In switch case writing break is a must.
- switch properties: 
  a. Cases can be in any order;
  b. Nested switch(switch inside switch) are allowed;


<====================================  Loop Control Instruction  ======================================>

* To repeat some parts of the program
* Types: for, while, do while
* Loop counter can be float or even character;

# For loops:

* Structure:
  for(initialisation; condition; updation){
    // do something
  }

* Increment Operator:
- i++(pre increment operator): first use, then increase;
- ++i(post increment operator): first increase, then use;

* Decrement Operator:
- i--(pre decrement operator): first use, then decrease;
- --i(post decrement operator): first decrease, then use;

* break statement: exit the loop
* continue statement: skip to next iteration

* When we initialize factorial we should take 1. While sum with 0.


<====================================  Function & Recursion   =========================================>

# Functions: block of code that performs particular task

* Functions always return a single result.
* Take argument --> Do work --> Return result
- It can be used multiple times;
- It increase code reusability;

* Syntax 1: Function Protype/Declaration(tell the compiler)
- void printHello();

* Syntax 2: Function Definition(Do the work)
- void printHello(){
  printf("Hello, Shubrato!");
};

* Syntax 3: Function call(Use the work)
- int main(){
  printHello();
  return 0;
};

* Properties:

- Execution always starts from main();
- A function gets called directly or indirectly from main();
- There can be multiple functions in a program;

* Types: two types e.g. library function & user defined function

- Library function: Special functions inbuilt in C e.g. scanf(), printf() etc. 
- User defined: declared & defined by the programmer. 

* Passing Arguments: 

- Functions can take value(parameter) & give some value(return value);

* Note:
- Function can only return one value at a time;
- Changes to parameters in function don't change the values in calling function.(Because a copy of argument is passed to the function);


# Recursion: when a function calls itself, it's called recursion.

- In programming, those things can be done with loops also can be done with recursion too. 

* Properties:

- Anything that can be done with Iteration, can be done with recursion and vice-versa.
- Recursion can sometimes give the most simple solution. 
- Base case is the condition which stops recursion. 
- Iteration has infinite loop & Recursion has stack overflow. 



<==========================================  Pointers  ================================================>

# Pointers: A variable that stores the memory address of another variable. 

* Syntax: 
- int age = 28; int *ptr = &age; int _age = *ptr;
- Here, * = value at address operator;
- Here, & = address of operator;

* Declaring Pointers: 
- int *ptr;
- char *ptr;
- float *ptr;

* Format Specifier: 
- printf("%p", &age);
- Here, %p is called pointer address;
- %p prints hexadecimal numbers;
- %u prints unsigned int;

# Pointer to Pointer: A variable that stores the memory address of another pointer.

* Syntax: int **pptr; char ** pptr; float **pptr;

# Pointers in Function call:

- Call by value : we pass value of variable as argument; [square(int n)]
- Call by Reference : We pass address of variable as argument; [square(int *n)] used when we need to return multiple values from a function as a pointer. 


<==========================================   Arrays   ================================================>

# Arrays: Collection of similar data types stored at contigious memory locations. 

* Syntax: int marks[5]; here in between [size of the array] that is how many items we wants to store.
- In C Array are 0 based index e.g. count starts with 0 or first item of an array count as 0 then 1 and so on. 

* Input & Output: 
- scanf("%d", &marks[0]); here, & is the address of the value; // input
- printf("%d", marks[0]); // output

# Initialization of Array

- int marks[] = {43, 44, 45};// here, we don't need to write the size of the array. This is optional.
- int marks[3] = {45, 45, 45};// declare with size.

# Pointer Arithmetic: Pointer can be incremented & decremented. 
- int age = 28;
- int *ptr = &age;
- ptr++ or ptr--;
* we can also subtract one pointer from another. 
* we can also compare 2 pointers as well. 
* Array is a Pointer. 
- int *ptr = &arr[0] or int *ptr = arr;
* Traverse an Array: we can travel through the array. 





Last duration: 06 hrs 40 min 
Date: 06 Jun 25

*/