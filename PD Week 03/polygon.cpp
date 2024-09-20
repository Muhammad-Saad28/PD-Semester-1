#include<iostream>
using namespace std;
main()
{
 int n,  angle;
 cout<<"Enter The number of sides of polygon: ";
 cin>>n;
 angle = (n-2)*180;
 cout<<"The sum of internal angles of a "<<n<<" sided polygon is " <<angle<< " degree";
}