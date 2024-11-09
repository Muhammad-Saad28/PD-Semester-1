#include<iostream>
using namespace std;

string string_name;

string length(string name)
{
    int count;
    count = name.length();
    if(count % 2 ==0)
    {
        return "true";
    }
    else 
    {
        return "false";
    }
}

main()
{
    cout<<"Enter string: ";
    getline(cin,string_name);
    string res = length(string_name);
    cout<<res;
}