#include<iostream>
using namespace std;

int rotation(string array[], int size);

main()
{
    int size;
    cout << "Enter the nummber of spins: ";
    cin >> size;
    string spins[size];
    for(int x = 0; x < size; x++)
    {
        cout << "Enter Spin: ";
        cin>> spins[x];
    }
    cout << rotation(spins, size);
}

int rotation(string array[], int size)
{
    int angle=0;
    int rotation=0;
    
    for(int i = 0; i < size; i++)
    {
        if(array[i]=="right" || array[i]=="Right")
        {
            angle += 90;
        }
        else 
        {
            angle -= 90;
        }
    }
    if(angle == 360)
    {
        rotation++;
    }
    return rotation;
}