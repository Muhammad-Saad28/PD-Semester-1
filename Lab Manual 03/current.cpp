#include<iostream>
using namespace std;

main()
{
 int charge, current, time;
 cout<<"Enter amount of charge: ";
 cin>>charge;
 cout<<"Enter time: ";
 cin>>time;
 current = charge/time;
 cout<<"Total current is: "<<current;
}