#include<iostream>
using namespace std;

main()
{
 int people, population, n;
 cout<<"Enter the current world population: ";
 cin>>population;
 cout<<"Enter the monthly rate (number of births per month): ";
 cin>>n;
 people = 360*n + population;
 cout<<"Population in three decades will be: "<<people;
}