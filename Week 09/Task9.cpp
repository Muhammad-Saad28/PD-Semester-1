#include <iostream>
using namespace std;
int number(char code);
main()
{
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "BoxStep", "Headscode", "Dosado", "Pop", "Lock", "Arabesque"};
    string code;
    cout<<"Enter PIN: ";
    cin >> code;

    for (int index = 0; code[index] != '\0'; index++)
    {
        if (code[index] != '0' && code[index] != '1' && code[index] != '2' && code[index] != '3' && code[index] != '4' && code[index] != '5' && code[index] != '6' && code[index] != '7' && code[index] != '8' && code[index] != '9')
        {
            cout << "invalid";
            return 0;
        }
    }
    int num[4];
    for (int index = 0; code[index] != '\0'; index++)
    {
        num[index] = number(code[index]);
    }

    cout << moves[num[0]] << " ";
    cout << moves[(num[1] + 1) % 10] << " ";
    cout << moves[(num[2] + 2) % 10] << " ";
    cout << moves[(num[3] + 3) % 10];
}

int number(char code)
{
    int value;
    for(int x=0; x<9;x++)
    {
        if(code == 'x')
        {
            value = x;
        }
    }
    return value;
}