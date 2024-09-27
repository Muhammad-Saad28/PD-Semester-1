#include<iostream>
using namespace std;

void reverse(string);

main()
{
 string a;
 cout<<"Enter either True or False: ";
 cin>>a;
 reverse(a);
}

void reverse(string a)
{
 if(a=="True")
  cout<<"False";
 else
  cout<<"True";
}