#include<iostream>
using namespace std;

main()
{
 float veg, fruit, vegprize, fruitprize, total;
 cout<<"Enter vegetable price per kilogram (in coins): ";
 cin>>vegprize;
 cout<<"Enter fruits price per kilogram  (in coins) : ";
 cin>>fruitprize;
 cout<<"Enter total kilograms of vegetables: ";
 cin>>veg;
 cout<<"Enter total kilograms of  fruits: ";
 cin>>fruit;
 total = (vegprize*veg)/1.94+(fruitprize*fruit)/1.94;
 cout<<"Total earnings in Rupees (Rps): "<<total;
}







































