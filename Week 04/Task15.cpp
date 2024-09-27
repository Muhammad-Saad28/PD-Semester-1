#include <iostream>
using namespace std;

void price(int, int, int);

main()
{
  int redRose, whiteRose, tulips;
  
  cout << "Enter Quantity of Red Roses: ";
  cin >> redRose;
  
  cout << "Enter Quantity of White Roses: ";
  cin >> whiteRose;
  
  cout << "Enter Quantity of Tulips: ";
  cin >> tulips;
  price(redRose, whiteRose, tulips);
   

}
void price(int red, int white, int tulip)
{
  float totalprice, disc;
  totalprice = (red * 2.00) + (white * 4.10) + (tulip * 2.50);      
  cout << "Original Price is: " << totalprice <<endl;
  if( totalprice > 200)
     disc = totalprice-(totalprice*0.20);
     cout<<"Price after discount: "<<disc;
}