#include<iostream>
using namespace std;

float price (string day, string fruit, int quantity)
{
    float tprice;
    if(day != "Saturday" || day != "saturday" || day != "Sunday" || day != "Sunday")
    {
        if(fruit=="Banana")
           tprice = 2.5*quantity;
        else if (fruit == "Apple")
            tprice = 1.2* quantity;
        else if (fruit == "Orange")
            tprice = 0.85*quantity;
        else if (fruit == "Grapefruit")
            tprice = 1.45*quantity;
        else if (fruit == "Kiwi")
            tprice = 2.70*quantity;
        else if (fruit == "Pineapple")
            tprice = 5.50*quantity;
        else if (fruit == "Grapes")
            tprice =  3.85*quantity;
    }
    else 
    {
        if(fruit=="Banana")
           tprice = 2.7*quantity;
        else if (fruit == "Apple")
            tprice = 1.25* quantity;
        else if (fruit == "Orange")
            tprice = 0.90*quantity;
        else if (fruit == "Grapefruit")
            tprice = 1.6*quantity;
        else if (fruit == "Kiwi")
            tprice = 3.00*quantity;
        else if (fruit == "Pineapple")
            tprice = 5.60*quantity;
        else if (fruit == "Grapes")
            tprice = 4.20*quantity;
    }
    return tprice;
}

main()
{
    string fruit, day;
    int quantity;

    cout<<"Enter the day of the week: ";
    cin>>day;
    cout<<"Enter the fruit: ";
    cin>>fruit;
    cout<<"Enter the quantity: ";
    cin>>quantity;
    cout<<price(day, fruit, quantity);
}