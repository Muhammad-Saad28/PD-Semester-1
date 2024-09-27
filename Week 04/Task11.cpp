#include<iostream>
using namespace std;

void airlines(string, int);

main()
{
 string name;
 int price;
 cout<<"Enter name of Country: ";
 cin>>name;
 cout<<"Enter Price of Ticket in dollars: ";
 cin>>price;
 airlines(name, price);
}

void airlines(string a, int p)
{
 int disc;
 if(a=="Pakistan")
	disc = p-(p*0.05);
 else if(a=="Ireland")
	disc = p-(p*0.10);
 else if(a=="India")
	disc = p-(p*0.20);
 else if(a=="England")
	disc = p-(p*0.30);
 else if(a=="Canada")
	disc = p-(p*0.45);
 cout<<"Final ticket price after discounts: "<<disc;
}