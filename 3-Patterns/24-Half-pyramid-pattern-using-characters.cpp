#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the no. of rows : ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
    return 0;
}