#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int, int);
void printmaze();
void moveplayer(int, int);

main()
{
  int x=4, y=1;
  system("cls");
  printmaze();
  while(1)
  {
    moveplayer(x,y);
    y+=1;
      if(y==9)
      {    while(y!=1)
              moveplayer(x,y--);
      }
  } 
}

void gotoxy(int x ,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void moveplayer(int x ,int y)
{
  gotoxy(x,y);
  cout<<"P";
  Sleep(200);
  gotoxy(x,y);
  cout<<" ";
}

void printmaze()
{
  cout<<"###################### " <<endl;
  cout<<"##                  ## " <<endl;
  cout<<"##                  ## " <<endl;
  cout<<"##                  ## " <<endl;
  cout<<"##                  ## " <<endl;
  cout<<"##                  ## " <<endl;
  cout<<"##                  ## " <<endl;
  cout<<"##                  ## " <<endl;
  cout<<"##                  ## " <<endl;
  cout<<"##                  ## " <<endl; 
  cout<<"###################### " <<endl;
}