// Program for draw a perfectt Christmas Tree

#include <iostream>
using namespace std;

int main()
{
  int floor, foot_width, foot_height;
  cout << "\nEnter How many floors are in the Chrismas Tree : ";
  cin >> floor;
  cout << "\nEnter the height of foot : " ;
  cin >> foot_height;
  cout << "\nEnter the width of foot (should be odd) : ";
  cin  >> foot_width;
  // Printing the upper portion of the tree
  int height = (floor) * 4;
  int width = 4 + (floor - 1) * 2;
  int stars = 0;
  for (int i = 1; i <= height; i++)
  {
    for (int j = 1; j <= width - stars; j++)
    {
      cout << "  ";
    }
    for (int k = 1; k <= stars * 2 + 1; k++)
    {
      cout << " *";
    }
    if (i % 4 == 0)
    {
      stars = stars - 1;
    }
    else
    {
      stars = stars + 1;
    }
    cout << "\n";
  }
  for (int i = 1; i <= foot_height; i++)
  {
    for (int j = 1; j <= width - (foot_width/2); j++)
    {
      cout << "  ";
    }
    for (int k = 1; k <= foot_width; k++)
    {
      cout << " *";
    }
    cout << "\n";
  }
  return 0;
}