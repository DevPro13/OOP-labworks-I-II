/*Task #1:
Write a program in CPP to input the name, roll, marks and address of a student from the user and
display the entered details using the concept of class and object.
*/
#include<iostream>
using namespace std;
class Student
{
    char name[50],address[50];
    int roll;
    float marks;
public:
    Student()
      { roll=0;
        marks=0;
    }
    void getdata(){
        cout<<"Enter student details::Name,roll,marks,address."<<endl;
        cin>>name>>roll>>marks>>address;
    }
    void showdata(){
        cout<<"Entered Student detail is,"<<endl;
        cout<<"Name:"<<name<<endl
            <<"Roll:"<<roll<<endl
            <<"Marks:"<<marks<<endl
            <<"Address:"<<address<<endl;
    }        
};
int main()
{ Student s;
    s.getdata();
    s.showdata();
    return 0;
}
