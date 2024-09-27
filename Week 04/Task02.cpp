#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int, int);
void printmaze();

main()
{
  system("cls");
  printmaze();
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