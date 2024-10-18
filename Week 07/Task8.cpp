#include <iostream>
#include<iomanip>
using namespace std;

main()
{
    int number;
    int weight;
    int money = 0, money1 = 0, money2 = 0, money3 = 0;
    float weight1 = 0, weight2 = 0 ,weight3 = 0;
    float sum = 0;

    cout << "Enter Number: ";
    cin >> number;
    
    for (int x = 1; x <= number; x++)
    {
        cout<<"Enter tonnage of Cargo: ";
        cin >> weight;
        if (weight < 4)
        {
            money1 = money1 + (weight * 200);
            weight1 = weight1 + weight;
        }
        else if (weight >= 4 && weight < 11)
        {
            money2 = money2 + (weight * 175);
            weight2 = weight2 + weight;
        }
        else if (weight >= 11)
        {
            money3 = money3 + (weight * 120);
            weight3 = weight3 + weight;
        }
        sum = weight1 + weight2 + weight3;
        money = money1 + money2 + money3;
    }
    float avg = money / sum;
    cout << avg << endl;
    float percent1 = (weight1 / sum) * 100;
    float percent2 = (weight2 / sum) * 100;
    float percent3 = (weight3 / sum) * 100;
    cout << percent1 <<setprecision(2)<< "%" << endl;
    cout << percent2 <<setprecision(2)<< "%" << endl;
    cout << percent3 <<setprecision(2) << "%" << endl;
}