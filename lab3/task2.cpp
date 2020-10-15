/*Task #2:
Write a program in CPP to overload unary ++ for postfix and prefix increment operation on complex
numbers using non-member/friend function.
*/
#include<iostream>
using namespace std;
class complex{
        int imag,real;
public:
    complex():real(0),imag(0){}
    complex(int r,int i):real(r),imag(i){}//parameterized
    void showdata(){
        cout<<"Complex num is "<<endl;
        cout<<real<<" + i"<<imag<<endl;
    }
    friend complex operator++(complex&);
    friend complex operator++(complex&,int);
};
complex operator++(complex &c){//prefix increment
        ++c.real;
        ++c.imag;
        complex ctemp(c.real,c.imag);
        return ctemp;
}
    complex operator++(complex &c,int x){//postfix increment
        c.real++;
        c.imag++;
        complex ctemp(c.real,c.imag);
        return ctemp;
}
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

