#include<iostream>
using namespace std;

void duration(float h, float m)
{
  float hinm = h*60;
  if(hinm>m)
   cout<<"Longest duration is: "<<h<<" Hours";
  else
   cout<<"Longest duration is: "<<m<<" Minutes";
}

main()
{
 float h, m;
 cout<<"Enter hours: ";
 cin>>h;
 cout<<"Enter minutes: ";
 cin>>m;
 duration(h,m);
}