#include<iostream>
using namespace std;

void rearrange(int array[], int size);
string consecutive(int array[], int size);

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    for(int i = 0; i<size; i++)
    {
        cout<<"Enter Elemets of Array: ";
        cin >> array[i];
    }
    rearrange(array, size);
    cout << consecutive(array, size);
    
}

void rearrange(int array[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

string consecutive(int array[], int size)
{
    if(size == 0 || size == 1)
    {
        return "True";
    }
    for(int i = 0; i < size - 1; i++)
    {
        if(array[i] + 1 != array[i + 1])
        {
            return "False";
        }
    }
    return "True";
}