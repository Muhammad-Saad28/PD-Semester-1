#include<iostream>
using namespace std;
 
main()
{
 int mints, frames, total_frames;
 cout<<"Enter number of minutes: ";
 cin>>mints;
 cout<<"Enter number of frames per second: ";
 cin>>frames;
 total_frames = (mints*60) *frames;
 cout<<"Total Number of Frames: "<<total_frames;
}