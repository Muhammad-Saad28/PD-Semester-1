#include <iostream>
using namespace std;

void pet(int);

main()
{
  int holiday, workingday, timeforgame, difference;
  
  cout << "Enter Number of Holidays: ";
  cin >> holiday;
  
  workingday = 365 - holiday;
  timeforgame = (workingday * 63) + (holiday * 127);
  
  difference = 30000 - timeforgame;
  pet(difference); 
}

void pet(int difference)
{
  int hour, mint;
  
  hour = difference / 60;
  mint = difference % 60;

  if(difference > 0)
  {  cout << "Tom sleeps well "<<endl;
    cout << hour << " hours and " << mint <<" minutes less for play.";
  }
  else
  {  cout << "Tom will run away "<<endl;
    cout <<-1 * hour << " hours and " <<-1 * mint <<" minutes for play."; 
  }
}