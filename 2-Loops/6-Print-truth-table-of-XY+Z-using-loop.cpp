// 6. Program Print Truth Table Of XY+Z Using Loop
#include <iostream>
using namespace std;

int main()
{
  cout << "\n" << "X " << "Y " << "Z " << "Output\n";
  for (int x = 0; x < 2; x++)
  {
    for (int  y = 0; y < 2; y++)
    {
      for (int z = 0; z < 2; z++)
      {
        cout << x << " " << y << " " << z << "   " << ((x && y)||z) << "\n";
      }
    } 
  }
  return 0;
}