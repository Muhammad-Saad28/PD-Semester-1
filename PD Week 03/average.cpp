#include<iostream>
using namespace std;

main()
{
 int age, year, average;
 cout<<"Enter the person's age:  ";
 cin>>age;
 cout<<"Enter the number of years lived in the same house: ";
 cin>>year;
 average = age/(year+1);
 cout<<"Average number of years lived in a same house: "<<average;
}
