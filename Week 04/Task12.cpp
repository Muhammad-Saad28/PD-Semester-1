#include<iostream>
using namespace std;

void checkspeed(int speed)
{
 if(speed>100)
  cout<<"You are challenged";
 else
  cout<<"Perfect! You are good to go";
}
main()
{
 int speed;
 cout<<"Enter Speed: ";
 cin>>speed;
 checkspeed(speed);
}


