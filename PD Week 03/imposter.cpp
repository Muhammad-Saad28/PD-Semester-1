#include<iostream>
using namespace std;

main()
{
 float i ,p ,chances;
 cout<<"Enter Imposter Count: ";
 cin>>i;
 cout<<"Enter Player count: ";
 cin>>p;
 chances= 100*(i/p);
 cout<<"Chances of being an imposter: "<<chances<< " %";
} 