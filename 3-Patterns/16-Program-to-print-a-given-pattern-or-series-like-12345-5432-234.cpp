// Program To Print A Given Pattern Or Series Like 12345, 5432, 234, 43, 3

#include <iostream>
using namespace std;

long long reverse(long long num, long long rev_num = 0){
  
  while(num > 0){
    rev_num = (num % 10) + rev_num * 10;
    num = num / 10;
  }
  return rev_num/10;
}

int main()
{
  int long long num , sum = 0;
  cout << "\nEnter the first number of this pattern : ";
  cin >> num;
  while (num > 0)
  {
    cout <<num << ", ";
    num = reverse(num);
  }
  return 0;
}