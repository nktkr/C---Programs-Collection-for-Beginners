// 36. Program to Calculate Standard Deviation Using Function

#include <iostream>
#include <cmath>
using namespace std;

float standardDevOfData(float arrayOfElements[], int n)
{
  float meanOfElements = 0;
  for (int i = 0; i < n; i++)
  {
    meanOfElements += arrayOfElements[i];
  }
  if (n > 0) {
    meanOfElements = meanOfElements / n;
  }

  float upperTermSum = 0;
  for (int i = 0; i < n; i++)
  {
    upperTermSum = upperTermSum + pow(arrayOfElements[i] - meanOfElements, 2);
  }

  return (sqrt(upperTermSum/n));
}

int main()
{
  int n;
  cout << "How many elements do you have: ";
  cin >> n;

  float arrayOfElements[n];

  cout << "Enter the elements one by one:";
  for (int i = 0; i < n; i++)
  {
    cin >> arrayOfElements[i];
  }

  cout << "Standard deviation of the data given: " << (standardDevOfData(arrayOfElements, n)) << endl;
  return 0;
}
