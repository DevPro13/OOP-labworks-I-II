/*Task #4:
Write a program in CPP to illustrate the concept of constructor(default, parameterized and copy
constructor) and destructor taking class complex as an example.
*/
#include<iostream>
using namespace std;
class Complex
{
    int real,imag;
public:
    //default constructure
    Complex():real(0),imag(0){
        cout<<"Ok. I am a default constructor"<<endl<<"real="
            <<real<<" ,imag="<<imag<<endl;
    }
    //parameterized constructor
    Complex(int r,int i):real(r),imag(i){
        cout<<"I am goddamn parameterized constructor"<<endl<<"real="
            <<real<<" ,imag="<<imag<<endl;;        
    }
    //copy constructor
    Complex(const Complex &obj,int i,int r):real(i),imag(r){
         cout<<"Ok. I am a copy constructor"<<endl<<"real="
            <<real<<" ,imag="<<imag<<endl;
    }
    //destructor
     ~Complex(){
         cout<<"Ok. I am a goddamn destructor!"<<endl;
     }
};
int main()
{
    Complex c;
    Complex c1(5,7),c2(c1,1,2);
    return 0;
}
