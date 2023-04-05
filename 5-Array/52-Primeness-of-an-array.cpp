// 52. C++ Program To Check Primeness Of An Array

#include <bits/stdc++.h>
using namespace std;

// Function to find if number is prime
int checkForPrime(int num)
{
   if (num <= 1)
   {
      return 0;
   }

   for (int j = 2; j <= sqrt(num); j++)
   {
      if (num % j == 0)
         return 0;
   }
   return 1;
}

int main()
{
   int arr[] = {1, 3, 5, 4, 8, 13, 11};
   int n = 7;
   int count = 0;
   int isElementPrime = 0;
   for (int i = 0; i < n; i++)
   {
      isElementPrime = checkForPrime(arr[i]);
      if (isElementPrime == 1)
         count++;
   }
   cout << "Count of number of primes in array : " << count << endl;
   return 0;
}