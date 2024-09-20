#include<iostream>
using namespace std;
 
main()
{
 float adult, child ,adultsold, childsold, charity, prize, charitydonation;
 string name;
 cout<<"Enter the movie name: ";
 cin>>name;
 cout<<"Enter the adult ticket prize: ";
 cin>>adult;
 cout<<"Enter child ticket prize: " ;
 cin>>child;
 cout<<"Enter the number of adult tickets sold: ";
 cin>>adultsold;
 cout<<"Enter the number of  child tickets sold: ";
 cin>>childsold;
 cout<<"Enter the percentage of the amount to be donated to charity: ";
 cin>>charity;
 prize = (adult*adultsold) + (child*childsold);
 charitydonation = prize/charity;
 cout<<name <<endl;
 cout<<"Total amount generated from ticket sales: "<<prize <<endl;
 cout<<"Donation to charity (10%): "<<charitydonation  <<endl;
 cout<<"Remaining amount after donation: "<<prize-charitydonation  <<endl;
}