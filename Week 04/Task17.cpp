#include<iostream>
using namespace std;

void tpChecker(int people, int tp)
{
    int totalsheets = tp * 500;
    int dailyusage = people * 57;
    int dayslast = totalsheets / dailyusage;

    if (dayslast < 14) 
        cout << "Your TP will only last " << dayslast << " days, buy more!" << endl;
    else 
        cout << "Your TP will last " << dayslast << " days, no need to panic!" << endl;
}
main()
{
 int people, tissue;
 
 cout<<"Enter number of people: ";
 cin>>people;

 cout<<"Enter number of Tissue papers: ";
 cin>>tissue;

 tpChecker(people,tissue);
}