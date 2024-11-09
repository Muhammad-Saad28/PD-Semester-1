#include<iostream>
using namespace std;

main()
{
    string s1;
    string s2;
    cout << "Enter String 1: ";
    cin >> s1;
    cout << "Enter String 2: ";
    cin >> s2;
    int size1 = s1.length();
    int size2 = s2.length();
    int count = 0;
    for (int i = 0; i<size1; i++)
    {
        for (int x = 0; x < size2; x++)
        {
            if (s1[i] == s2[x])
            {
                count++;
                s2[x] = '-';
            }
        }
    }
    cout << "Common Digits Are: " << count;
}