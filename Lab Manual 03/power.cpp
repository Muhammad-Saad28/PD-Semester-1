#include<iostream>
using namespace  std;

main()
{
 float watts, volt,  current;
 cout<<"Enter voltages (in volts): ";
 cin>>volt;
 cout<<"Enter current (in amperes): ";
 cin>>current;
 watts = volt*current;
 cout<<"The power is "<<watts<<" watts"; 
}