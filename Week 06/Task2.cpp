#include<iostream>
using namespace std;

float avrg(int math, int eng, int chem, int bio, int sci)
{
    int sum, avg;
    sum = math + eng + chem + bio + sci;
    avg = sum / 5;
    return avg;
}

string grade(int avg)
{
    string grad="F";
    if(avg>=90)
        grad = "A+";
    else if(avg>=80)
        grad = "A";
    else if(avg>=70)
        grad = "B+";
    else if(avg>=60)
        grad = "C";
    else if(avg>=50)
        grad = "D";
    else if(avg>=40)
        grad = "E";
    return grad;
}

main()
{
    string name;
    int maths, english, chemistry, biology, sci;
    int average;

    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your maths marks: ";
    cin>>maths;
    cout<<"Enter your english marks: ";
    cin>>english;
    cout<<"Enter your chemistry marks: ";
    cin>>chemistry;
    cout<<"Enter your biology marks: ";
    cin>>biology;
    cout<<"Enter your science marks: ";
    cin>>sci;

    average = avrg(maths, english, chemistry, biology, sci);
    cout<<"Average is "<<average<<endl;
    cout<<"Grade is "<<grade(average);
}