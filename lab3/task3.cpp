/*Task #3:
Write a program in CPP to find the sum of two complex numbers using the concept of the overloading
binary + operator using member function.
*/
#include<iostream>
using namespace std;
class complex{
        int real,imag;
public:
    complex():real(0),imag(0){}
    complex(int r,int i):real(r),imag(i){}//parameterized
    void showdata(){
        cout<<real<<" + i"<<imag<<endl;
    }
    complex operator+(const complex &c){
        int r=real+c.real;
        int i=imag+c.imag;
        complex c3(r,i);
        return c3;
}
};
int main(){
    complex c1(5,9),c2(10,12),c3;
    cout<<"c1:";
    c1.showdata();
    cout<<endl<<"c2:";
    c2.showdata();
    cout<<endl;
    c3=c1+c2;
    c1=c3+c2;
    c2=c1+c3;
    cout<<"sum c1+c2 is,"<<endl;
    c3.showdata();
    cout<<"sum c2+c3 is,"<<endl;
    c1.showdata();
    cout<<"sum n1+n3 is,"<<endl;
    c2.showdata();
    return 0;
}

