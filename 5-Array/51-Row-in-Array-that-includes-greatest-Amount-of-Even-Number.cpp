//  Program To Find Row In An Array That Includes The Greatest Amount Of Even Number

#include<iostream>
using namespace std;

int main()
{
  int m, n;
  cout << "Enter the no. of rows in Array:";
  cin >> m;
  cout << "Enter the no. of column in Array:";
  cin >> n;

  int arr[m][n];
  int max_even_count = 0;
  int max_even_row = 0;
  int count = 0;

  // taking input of elements of array
  for(int i = 0; i < m; i++)
  {
    for(int j = 0; j < n; j++)
      cin >> arr[i][j];
  }

  for(int i = 0; i < m; i++)
  {

    for(int j = 0; j < n; j++)
    {
      if(arr[i][j] / 2 == 0)
      {
        count ++;
      }
    }
    if(count > max_even_count)
      max_even_row = i;
    count = 0;
  }


}