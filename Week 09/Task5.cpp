#include<iostream>
using namespace std;

bool isIdentical(string array[])
{
    int x = 0;
    if(array[x]==array[x+1] && array[x+1]==array[x+2] && array[x+2]==array[x+3])
    {       
        return true;
    }
    return false;
}

main()
{
    string array[4];
    for(int x = 0; x<4; x++)
    {
        cout<<"Enter any character: ";
        cin >> array[x];
    }
    bool res;
    res = isIdentical(array);
    cout<<res;
}