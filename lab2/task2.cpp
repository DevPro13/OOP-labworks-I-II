/*Task #2:
Write a program in CPP to input the name, roll, marks and address of n students from the user and
display the entered details using the concept of class and objects.
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
{ cout<<"Enter number of students,"<<endl;
    int n;
    cin>>n;
    Student s[n];
    for(int a=0;a<n;++a){
    s[a].getdata();
    }
    for(int b=0;b<n;++b){
    s[b].showdata();
    }
    return 0;
}
