#include<iostream>
using namespace std;

void numb(int, int);

main()
{
 int num1, num2;
 cout<<"Enter Number 1: ";
 cin>>num1;
 cout<<"Enter number 2: ";
 cin>>num2;
 numb(num1, num2);
}

void numb(int num1,int num2)
{
  if(num1==num2)
    cout<<"True";
  else
   cout<<"False";

}
