#include<iostream>
using namespace std;

float taxCalculator(char type, float price)
{
 float tax;
 if(type=='M')
    tax = price+(price*0.06);
 if(type=='E')
    tax = price+(price*0.08);
 if(type=='S')
    tax = price+(price*0.10);
 if(type=='V')
    tax = price+(price*0.12);
 if(type=='T')
    tax = price+(price*0.15);
 return tax;
}

main()
{
 char code;
 float price;
 
 cout<<"Enter vehicle code(M, E, S, V, T): ";
 cin>>code;
 cout<<"Enter the price of the vehicle: ";
 cin>>price;

 cout<<"The final price of a vehicle of type "<<code<<" after adding the tax is: "<<taxCalculator(code, price)<<"$";
}