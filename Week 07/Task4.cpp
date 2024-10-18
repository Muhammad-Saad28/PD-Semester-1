#include<iostream>
using namespace std;

int dots(int n)
{
    int sum = 0;
    for(int i = 1; i<=n; i++)
    {
        sum+=i;
    }
    return sum;
}

main()
{
    int traingele;
    cout<<"Enter the number of triangle: ";
    cin>>traingele;
    cout<<"Number of dots are: "<<dots(traingele);
}