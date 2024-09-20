#include<iostream>
using namespace std;

main()
{
 int square, width, height, walls;
 cout<<"Number of square wall (in meters): ";
 cin>>square;
 cout<<"Width of the single wall: ";
 cin>>width;
 cout<<"Height of the single wall: ";
 cin>>height;
 walls =  square/(width*height);
 cout<<"Number of walls you can paint:  "<<walls;
}