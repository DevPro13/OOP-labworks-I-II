/*
Task #1:
Write a program in CPP to overload unary ++ for postfix and prefix increment operation on complex
numbers using member function.
*/
#include<iostream>
using namespace std;
class complex
{
    int imag,real;
public:
    complex():real(0),imag(0){}
    complex(int r,int i):real(r),imag(i){}//parameterized
    void showdata(){
        cout<<"Complex num is "<<endl;
        cout<<real<<" + i"<<imag<<endl;
    }
    complex operator++(){//prefix increment
        ++real;
        ++imag;
        complex c(real,imag);
        return c;
    }
    complex operator++(int){//postfix increment
        real++;
        imag++;
        complex c(real,imag);
        return c;
    }
};
int main(){
    complex c(11,12);
    c.showdata();
    cout<<"prefix increment oprt.."<<endl;
    ++c;
    c.showdata();
    cout<<"postfix increment oprt.."<<endl;
    c++;
    c.showdata();
    return 0;
}
