#include<iostream>
using namespace std;

bool isPrime(int num)
{
    int count = 0; 

    for(int i = 2; i<num; i++)
    {
        if( num%i==0)
            return count;
        else
            count = 1;
    }
    return count;
}

main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<isPrime(num);
}