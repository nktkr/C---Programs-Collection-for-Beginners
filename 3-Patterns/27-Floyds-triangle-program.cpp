// Floyd's Triangle Program

#include <iostream>
using namespace std;

int main()
{
    int rows, count = 1;
    cout << "Enter the number of rows in the triangle: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << "  ";
            count++;
        }
        cout << endl;
    }
    return 0;
}