#include<iostream>
using namespace std;

string decideActivity(string temp, string humidity)
{
    if(temp=="Warm" || temp=="warm")
    {
        if(humidity=="Dry" || humidity=="dry")
            return "Play Tennis";
        else if(humidity=="Humid" || humidity=="humid")
            return "Swim";
    }
    else if(temp=="Cold" || temp=="cold")
        {
            if(humidity=="Dry" || humidity=="dry")
            return "Play BasketBall";
        else if(humidity=="Humid" || humidity=="humid")
            return "Watch TV";
        }
    return "";    
}

main()
{
    string temp, humidity;

    cout<<"Enter the temperature: ";
    cin>>temp;
    cout<<"Enter humidity: ";
    cin>>humidity;
    cout<<"Recommened Activity: "<<decideActivity(temp, humidity);
}