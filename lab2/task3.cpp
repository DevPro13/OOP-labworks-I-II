/*Task #3:
Write a program in CPP to find the sum of two complex numbers using the OOP concept.
*/
#include<iostream>
using namespace std;
class complex
{
    float real,imag;
public:
    complex(){
        real=0;
        imag=0;
    }
    void getdata(){
        cout<<"Enter complex number ::real,imag"<<endl;
        cin>>real>>imag;
    }
    void showdata(){
        cout<<"Sum of complex number is "
            <<real<<"+i"<<imag<<"."<<endl;
    }
    friend complex sum(complex c1,complex c2);
};
complex sum(complex c1,complex c2){
    complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    return temp;
}
int main()
{
    complex c1,c2;
    c1.getdata();
    c2.getdata();
    sum(c1,c2).showdata();
    return 0;
}
