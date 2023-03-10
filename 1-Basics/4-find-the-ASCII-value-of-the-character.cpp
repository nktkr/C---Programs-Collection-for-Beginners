// 4. Find the ASCII value of the character program

#include<iostream>
using namespace std;

int main()
{
  char character;
  int ASCII;

  cout << "\nEnter the character : ";
  cin >> character;

  ASCII = int(character); //converting a character to its ASCII value
  
  cout << "\n" <<ASCII;
  
  return 0;
}

/* concept 
Type-casting is a way to change the data type of a variable while accessing it. For example, to convert a character to its ASCII value, we can use the int() function. Similarly, if we have a variable v of type double and want to access its integral value, we can use type-casting like this: int a = (int) v;. */