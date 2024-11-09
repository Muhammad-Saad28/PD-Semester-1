#include<iostream>
using namespace std;

main()
{
    string movies[5] = {"Gladiator", "Star Wars", "Terminator", "Taking Lives", "Tomb Rider"};
    string movie;
    cout<<"Enter the movie name: ";
    cin>>movie;
    int disc;
    for(int x=0; x<5; x++)
    {
        if(movie==movies[x] && x%2==0)
        {
            disc = 500-(500*0.10);
        }
        else 
        {
            disc = 500-(500*0.05);
        }
    }
    cout<<"Price after discount: "<<disc;
}