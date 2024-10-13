#include<iostream>
#include<cmath>
using namespace std;

int calculateVolleyball(string TypeofYear, int holiday, int weekend)
{
    int totalweekend = 48;
    float Sofiaweekend = totalweekend-weekend;
    float SofiaweekendsPlay = Sofiaweekend *3/4;
    float HolidaysGame = holiday*2/3;
    float total = weekend + SofiaweekendsPlay + HolidaysGame;
     
    if(TypeofYear == "Leap")
      total = total*1.15;
    return floor(total);
}

main()
{
   string TypeofYear;
   int holidays,weekends;
   cout << "Enter the year type(Leap,Normal) : ";
   cin >> TypeofYear;
   cout << "Enter number of holidays : ";
   cin >> holidays;
   cout << "Enter the number of weekends Vladmir travels to his home : ";
   cin >> weekends;
   cout << "The number of times Vladmir plays is : " << calculateVolleyball(TypeofYear, holidays, weekends);
}