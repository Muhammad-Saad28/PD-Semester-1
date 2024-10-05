#include<iostream>
using namespace std;

void projectTimeCalculator(int hours, int days, int workers)
{
 float workershours = workers * 10;
 float workingtime = days * workershours;   
 float workinghr = workingtime * 0.90;
 if(workinghr>hours)
 {
   int remaining = workinghr-hours;
   cout << "Yes! " << remaining << " hours left.";
 }
 else
 {
   int remaining = workinghr - hours;
   cout << "Not enough time! " << -remaining <<" hours needed.";
 }
}

main()
{
 int hours, days, workers;
 
 cout<<"Enter the needed hours: ";
 cin>>hours;
 cout<<"Enter the days that all firm has: ";
 cin>>days;
 cout<<"Emnter the number of all workers: ";
 cin>>workers;
 projectTimeCalculator(hours, days, workers);
}
