// 14.  Program To Print Half Pyramid Alternative
//  Output:   
// Enter the No Of Row : 6
// *
// *A
// *A*
// *A*A
// *A*A*
// *A*A*A

#include<iostream>
using namespace std;

int main(){
  int height;
  cout << "Enter the height of the pyramid : ";
  cin >> height;
  for (int i = 1; i <= height; i++){
    for (int j = 1; j <= i; j++){
      if(j%2 == 0)
        cout << "A";
      else
        cout << "*";
    }
    cout << "\n";    
  }
  return 0;
}

