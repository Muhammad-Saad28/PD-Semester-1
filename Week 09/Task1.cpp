#include<iostream>
using namespace std;

main()
{
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};
    int quantity, prices;
    string fruits;
    cout<<"Enter the name of fruit: ";
    cin>>fruits;
    cout<<"Enter the quantity of fruit: ";
    cin>>quantity;
    for(int x=0; x<4; x++)
    {
        if(fruit[x]==fruits)
        {
            prices = price[x]*quantity; 
        }
    }
    cout<<"Price: "<<prices;
}