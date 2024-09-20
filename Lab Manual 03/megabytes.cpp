#include<iostream>
using namespace std;

main()
{
 float mbs , kbs, bytes, bits;
 cout<<"Enter the size in Megabytes: ";
 cin>>mbs;
 kbs = 1024*mbs;
 bytes= 1024*kbs;
 bits= 8*bytes;
 cout<<mbs<<" MB  is equivalent to "<<bits<<" bits";
}
