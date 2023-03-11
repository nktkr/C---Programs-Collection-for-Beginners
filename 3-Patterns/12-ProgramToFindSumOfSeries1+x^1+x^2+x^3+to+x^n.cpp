//12. Program To Find Sum Of Series 1 + x ^ 1 + x ^ 2 + x ^ 3 + . . . . . . . . . x ^ n

#include<iostream>
#include<math.h>

using namespace std;

int main(){
  double x, n, sum =0;
  cout << "\nEnter the value of x : " ;
  cin >> x;
  cout << "\nEnter the value of no. of terms n : " ;
  cin >> n;
  for (int i = 0; i < n; i++){
    sum = sum + pow(x , n);
  }
  cout << "Sum : " << sum;
  return 0;
}