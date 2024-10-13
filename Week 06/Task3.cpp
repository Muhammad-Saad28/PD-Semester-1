#include<iostream>
using namespace std;

string zodiac(int day, string  month) 
{
    string zodiacs;
    if ((month == "March"  && day >= 21) || (month == "April" && day <= 19))
        zodiacs = "Aries";
    else if((month == "April" && day >= 20 ) ||  (month == "May" && day <= 20))
        zodiacs =  "Taurus";
    else if((month == "May" && day >= 21) || (month == "June" &&  day <= 20))
        zodiacs = "Gemini";
    else if((month == "June" && day >= 21) || (month == "July"  && day <= 22))
        zodiacs = "Cancer";
    else if((month == "July" && day >= 23) || (month == "August"  && day <= 22))
        zodiacs = "Leo";
    else if((month == "August"  && day >= 23) || (month == "September"  && day <= 22))
        zodiacs = "Virgo";
    else if((month == "September" && day >= 23) || (month == "October"  && day <= 22))
        zodiacs = "Libra";
    else if((month == "October" && day >= 23) || (month == "Novermber"  && day <= 21))
        zodiacs = "Scorpio";
    else if((month == "Novemebr" && day >= 22) || (month == "December"  && day <= 21))
        zodiacs = "Sagittarius";
    else if((month == "December" && day >= 22) || (month == "January"  && day <= 19))
        zodiacs = "Capricon";
    else if((month == "January" && day >= 20)  || (month == "Febuary"  && day <= 18))
        zodiacs = "Aquarious";
    
    return zodiacs;
}

main()
{
    int day;
    string  month;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;

    cout << "Your zodiac is: " << zodiac(day, month);
}
