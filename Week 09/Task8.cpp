#include<iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    string color[n];
    for(int x=0; x<n; x++)
    {
        cout << "Enter color: ";
        cin >> color[x];
    }
    int counter=0;
    for(int x=0; x<n; x++)
    {
        if(color[x]==color[x+1])
            counter = counter;
        else
            counter++;
    }
    int res = n*2+counter-1;
    cout<<res;
}