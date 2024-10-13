#include<iostream>
using namespace std;

string  hotelPrice(string month, int days)
{
    int appartmentprice, studioprice;
    int appartmentdisc, studiosdisc;
    if(month=="May" || month == "may"  || month == "Octuber" || month == "Octuber")
    {
        appartmentprice = days*65;
        studioprice =  days*50;
        if(days>7)
            appartmentdisc = appartmentprice-(appartmentprice*0.05);
        else
            appartmentdisc = appartmentprice;
        if(days>14)
            studiosdisc  = studioprice - (studioprice*0.10);
        else
            studiosdisc = studioprice;
          
    }
    else if(month == "June" || month == "june"  || month == "September" || month == "september")
    {
        appartmentprice = days*68.70;
        studioprice =  days*72.20;
        if(days>14)
            appartmentdisc = appartmentprice-(appartmentprice*0.30);
        else
            appartmentdisc = appartmentprice;
        if(days>14)
            studiosdisc  = studioprice - (studioprice*0.10);
        else
            studiosdisc = studioprice;
    }
    else if(month == "July" || month == "july"  || month == "August" || month == "august")
    {
        appartmentprice = days*77;
        studioprice =  days*76;
        if(days>14)
            appartmentdisc = appartmentprice-(appartmentprice*0.20);
        else
            appartmentdisc = appartmentprice; 
        if(days>14)
            studiosdisc  = studioprice - (studioprice*0.10);
        else
            studiosdisc = studioprice;
    }
    return  "Appartment " + to_string(appartmentdisc) + "\nStudio " +to_string(studiosdisc);
}

main()
{
    string month;
    int days;

    cout<<"Enter  Month: ";
    cin>>month;
    cout<<"Enter number of days you want to stay: ";
    cin>>days;
    cout<<hotelPrice(month,days);
}