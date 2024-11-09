#include <iostream>
using namespace std;
main()
{
    int size;
    bool flap = false;
    cout << "enter size of array: ";
    cin >> size;
    int number[size];
    for (int x = 0; x<size; x++)
    {
        cout << "Enter value: ";
        cin >> number[x];
    }
    int digit;
    for (int x = 0; x < size; x++)
    {
        if (number[x] >= 9)
        {
            while (number[x] != 0)
            {
                digit = number[x] % 10;
                number[x] = number[x] / 10;
                if (digit == 7)
                {
                    flap = true;
                    break;
                }
            }
            if (number[x] == 7)
            {
                flap = true;
                break;
            }
        }
    }
    if (flap == true)
        cout << "BOMB!";
    else
        cout << "there is no 7 in the array";
}