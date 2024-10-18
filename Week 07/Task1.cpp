#include<iostream>
using namespace std;

main()
{
    int rows, col;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> col;
    for(int i = rows; i>=1; i--)
    {
        for(int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}