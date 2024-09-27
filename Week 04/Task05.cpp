#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int, int);
void name();

main()
{
  system("cls");
  name();
  
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X =x;
  coordinates.Y =y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void name()
{
  gotoxy(30,10);
  cout<<" #########       ######         ######      ## ##      "<<endl;
  gotoxy(30,11);
  cout<<" ##     ##     ##      ##     ##      ##    ##   ##    "<<endl;
  gotoxy(30,12);
  cout<<" ##           ##       ##    ##        ##   ##    ##	"<<endl;
  gotoxy(30,13);
  cout<<" #########    ## ###### ##   ## ###### ##   ##     #	"<<endl;
  gotoxy(30,14);
  cout<<"        ##    ##        ##   ##        ##   ##    ##	"<<endl;
  gotoxy(30,15); 
  cout<<" ##     ##    ##        ##   ##        ##   ##   ##	"<<endl;
  gotoxy(30,16);
  cout<<" #########    ##        ##   ##        ##   ## ##	"<<endl;  
}