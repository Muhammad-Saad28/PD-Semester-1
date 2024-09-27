#include<iostream>
#include<windows.h>
using namespace std;

void menu();
void gotoxy(int x, int y);
void aggregate(string name, float matric, float inter, float ecat);
void compare(string name1, string name2, float ecat1, float ecat2);

main()
{
  int choice;
  string name1, name2, again;
  float matric1, matric2 , inter1, inter2, ecat1, ecat2;

  
  
  while(true)
  {

    system("cls");
    menu();
    
    cout<<""<<endl;
    cout<<"Enter Choice: ";
    cin>>choice;

    if(choice == 1)
    {
        system("cls");
        
	cout<< "Enter Name of student: ";
        cin>> name1;
        
	cout<< "Enter Your Matric Marks(out of 1100): ";
        cin>> matric1;
        
	cout<< "Enter Your Inter Marks(out of 550): ";
        cin>> inter1;
        
	cout<< "Enter Your ECAT Marks: ";  
        cin>> ecat1;
        
	cout<< "Enter 0 to continue... ";
        cin>> again;  
     }

    if (choice == 2)
    {
	system("cls");
        
	cout<< "Enter Name of student: ";
        cin>> name2;
        
	cout<< "Enter Your Matric Marks(out of 1100): ";
        cin>> matric2;
        
	cout<< "Enter Your Inter Marks(out of 550): ";
        cin>> inter2;
        
	cout<< "Enter Your ECAT Marks: ";  
        cin>> ecat2;
        
	cout<< "Enter 0 to continue... ";
        cin>> again;  
     }

    if (choice == 3)
    {
	system("cls");
	aggregate(name1, matric1, inter1, ecat1);

	cout<< "Enter 0 to continue... ";
        cin>> again;
    }

    if (choice == 4)
    {
	system("cls");
        
	aggregate(name2, matric2, inter2, ecat2);

	cout<< "Enter 0 to continue... ";
        cin>> again;
    }
    
    if( choice == 5)
    {
	system("cls");	
	compare(name1, name2, ecat1, ecat2);
        
        cout<< "Enter 0 to continue... ";
        cin>> again;
    }
  }
}

void menu()
{
  cout << endl;
  cout << endl;
  cout << endl;
  cout << "            *****************************************************	" << endl;
  cout << "            *      University of Enigeering and Technology      *	" << endl;
  cout << "            *****************************************************	" << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << "Welcome to University Admission Management System";
  cout << endl;
  cout << endl;
  cout << "Enter 1 for Details of 1st Student " << endl;
  cout << "Enter 2 forDetails of 2nd Student " << endl;
  cout << "Enter 3 Calculate the aggregate of 1st Student " << endl;
  cout << "Enter 4 Calculate the aggregate of 2nd Student " << endl;
  cout << "Enter 5 Display the student with RollNumber 01 " << endl;
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X =x;
  coordinates.Y =y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void aggregate(string name, float matric, float inter, float ecat)
{
  float agg = (matric/1100 * 30) + (inter/550 * 30) + (ecat/400 * 40);
  cout << name << "'s aggregate is " << agg << endl;
}

void compare(string name1, string name2, float ecat1, float ecat2)
{
  if(ecat1 > ecat2)
    cout<<name1<<"'s is Roll no 1"<<endl;
  else
    cout<<name2<<"'s is Roll no 1"<<endl;
}
