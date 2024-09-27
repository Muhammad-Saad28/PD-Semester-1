#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int, int);
void printmaze();

main()
{
  system("cls");
  printmaze();
  gotoxy(4,5);
  cout<<"P";
  gotoxy(0,12);
  cout<<" ";
}

void gotoxy(int x , int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printmaze()
{
  cout<<"####################### " <<endl;
  cout<<"##                   ## " <<endl;
  cout<<"##                   ## " <<endl;
  cout<<"##                   ## " <<endl;
  cout<<"##                   ## " <<endl;
  cout<<"##                   ## " <<endl;
  cout<<"##                   ## " <<endl;
  cout<<"##                   ## " <<endl;
  cout<<"##                   ## " <<endl;
  cout<<"##                   ## " <<endl; 
  cout<<"####################### " <<endl;
}