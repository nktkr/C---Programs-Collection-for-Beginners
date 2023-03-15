// 22. Program to print daimond pattern using stars (*)

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  int rows, no_of_space, no_of_stars = 1;
  cout << "Enter the no. of rows in the pattern : ";
  cin >> rows;

  for (int i = 1; i <= (2 * rows); i++)
  {
    // if(i < rows)
    //   no_of_space = rows-i;
    // else
    //   no_of_space = i -rows;
     no_of_space = abs(rows - i);

    for (int j = 1; j <= no_of_space; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= no_of_stars; j++)
    {
      cout << "x";
    }
    if (i >= rows)
      no_of_stars = no_of_stars - 2;
    else
      no_of_stars = no_of_stars + 2;
    cout << endl;
  }
  return 0;
}