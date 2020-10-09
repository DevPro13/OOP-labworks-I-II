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
    copy Complex(){
         cout<<"Ok. I am a default constructor"<<endl<<"real="
            <<real<<" ,imag="<<imag<<endl;
    }
};
int main()
{
    Complex c;
    Complex c1(5,7);
    return 0;
}
