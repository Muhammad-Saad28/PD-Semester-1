#include<iostream>
using namespace std;

int pyramidvolume (int length, int width, int height, string unit)
{
 int volume = (length*width*height)/3;
 string a = unit;
 if(unit=="millimeters")
   volume*=1000;
 else if(unit == "centimeters")
          volume*=100;
 else if(unit == "kilometers")
          volume/=1000;
 return volume;
}

main()
{
 int length, width, height;
 string unit;
 
 cout<<"Enter length: ";
 cin>>length;
 cout<<"Enter width: ";
 cin>>width;
 cout<<"Enter height: ";
 cin>>height;
 cout<<"Enter units of the quantitates: ";
 cin>>unit;
 
 if(unit=="milimeters")
     cout<<"The volume of pyramid is: "<< pyramidvolume(length, width, height, unit)<<" milimeters";
 
 if(unit=="centimeters")
     cout<<"The volume of pyramid is: "<< pyramidvolume(length, width, height, unit)<<" centimeters";
 
 if(unit=="meters")
     cout<<"The volume of pyramid is: "<< pyramidvolume(length, width, height, unit)<<" meters";
 
 if(unit=="kilometers")
     cout<<"The volume of pyramid is: "<< pyramidvolume(length, width, height, unit)<<" Kilometers";


}
