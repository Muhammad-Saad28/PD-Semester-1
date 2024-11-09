#include<iostream>
using namespace std;

void transformation(int array[], int size, int n)
{
    for(int x=0; x<n; x++)
    {
        for(int x=0; x<size;x++)
        {
            if(array[x]%2==0)
            {
                array[x]= array[x]-2;
            }
            else 
            {
                array[x]= array[x]+2;
            }
        }
        for(int x=0; x<size; x++)
        {
            cout<<array[x]<<", ";
        }
        cout<<endl;
    }
}

main()
{
    int size, n;
    int array[size];
    cout<<"Enter number of times you want to repeat the process: ";
    cin>>n;
    cout << "Enter the size of the array: ";
    cin >> size;
    for(int x=0; x<size; x++)
    {
        cout<<"Enter Number "<<x+1<<": ";
        cin>>array[x];
    }
    transformation(array,size,n);
}
