#include<iostream>
using namespace std;

main()
{
 int sum, num, first, last;
 cout<<"Enter a 4-digit number: ";
 cin>>num;        
 last = num%10;   
 sum = last+0;    
 first = num/10;  
 last = first%10; 
 sum += last;     
 first = first/10; 
 last = first%10; 
 sum += last;     
 first = first/10;
 last  = first%10;
 sum += last;
 cout<<"Sum: "<<sum;
}