#include<iostream>
#include<fstream>
using namespace std;

void displayOutput(int age, string name)
{
    if(age%2==0)
    {
        fstream file2;
        file2.open("E:\\University\\Semester 1\\PD\\Week 13\\names.txt", ios::out);
        file2 <<"###############" << endl;
        file2 << "# " << age << " HB " << name <<"! " << age << " #" << endl;
        file2 <<"###############" << endl;
        file2.close();
    }
    else
    {
        fstream file3;
        file3.open("E:\\University\\Semester 1\\PD\\Week 13\\names.txt", ios::out);
        file3 <<"*" << endl;
        file3 << age << " HB " << name <<"! " << age << endl;
        file3 <<"*" << endl;
        file3.close();
    }
}
main()
{
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;

    fstream file;
    file.open("E:\\University\\Semester 1\\PD\\Week 13\\names.txt", ios::out);
    file << name;
    file <<",";
    file << age;
    file.close();
    string line;
    fstream file1;
    file1.open("E:\\University\\Semester 1\\PD\\Week 13\\names.txt", ios::in);
    getline(file1, line);
    file1.close();
    
    displayOutput(age,name);
}