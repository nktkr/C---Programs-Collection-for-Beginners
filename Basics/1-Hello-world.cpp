#include<iostream>  

using namespace std; 

int main()
{
  cout << "Hello world" << endl;
  cout << "My Name is Ankit Kumar Singh\n";

  return 0;
}

//* When a line starts with the number sign (#), it is aimed at the pre-processor of the compiler. In the given scenario, the #include directive instructs the pre-processor to include the <iostream> header.

//* This directive directs the compiler to make use of the standard (std) namespace, which comprises various features of the C++ Standard Library.

//! using name space std => This tells the compiler to use the standard (std) namespace, which includes features of the C++ Standard Library.

//* Similar to any other programming language, in C++, the execution of the program begins with the main function: int main()

//* C++ uses the streams defined in the iostream header to perform input and output operations. 
//* To display output to the screen, we use cout << (similar to the printf statement in the C language). To take input from the terminal, we use cin >> (similar to the scanf statement in the C language).

//! The main method has int as it's return type. Hence, we need to return 0 to terminate the program.

/* Output=
{ g++ 1-Hello-world.cpp -o 1-Hello-world } ; if ($?) { .\1-Hello-world }
Hello world
My Name is Ankit Kumar Singh */