// Program to print INDIA Pattern using "INDIA" string and loops

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  
  string anystring="INDIA";
  for (int i = 0; i < anystring.size(); i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << anystring[j];
    }
    cout << "\n";
  }
  return 0;
}

// Creating a program which will ask for the string and print in above pattern
// int main()
// {
//   string anystring;
//   cout << "\nEnter the word :" ;
//   cin >> anystring;
//   for (int i = 0; i < anystring.size(); i++)
//   {
//     for (int j = 0; j <= i; j++)
//     {
//       cout << anystring[j];
//     }
//     cout << "\n";
//   }
//   return 0;
// }
