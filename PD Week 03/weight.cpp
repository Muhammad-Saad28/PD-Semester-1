#include<iostream>
using namespace std;

main()
{
 string name;
 float kgs, days;
 cout<<"Enter the name of person: ";
 cin>>name;
 cout<<"Enter the  target weight loss in kilograms: ";
 cin>>kgs;
 days=kgs*15;
 cout<<name<<" will need "<<days<<" days to loss "<<kgs<<" weight by following the doctor's suggestions";

}