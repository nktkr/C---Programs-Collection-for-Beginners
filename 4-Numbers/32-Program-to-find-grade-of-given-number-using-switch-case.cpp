// 32. Program To Find A Grade Of Given Numbers Using Switch Case

#include <iostream>
using namespace std;

char grade(int score)
{
  if (score > 100 || score < 0)
    return 'I';
  switch(score/10)
  {
    case 10:
      return 'A';
    case 9:
      return 'A';
    case 8:
      return 'B';
    case 7:
      return 'C';
    case 6:
      return 'D';
    case 5:
      return 'E';
    default:
      return 'F'; 
  }
}
int main()
{
  int score;
  cout << "Enter the score: ";
  cin >> score;
  char grade_value = grade(score);
  if(grade_value == 'I')
    cout << "You have entered invalid score." << endl;
  else
    cout << "Grade: " << grade_value << endl;  
  return 0;
}
