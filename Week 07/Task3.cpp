#include<iostream>
using namespace std;

void amplify(int n)
{
    for(int i = 1; i<=n;i++)
    {
        if(i%4==0)
            cout<<i*10<<" ";
        else
            cout<<i<<" ";
    }
}

main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    amplify(num);
}