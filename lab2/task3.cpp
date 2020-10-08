/*Task #3:
Write a program in CPP to find the sum of two complex numbers using the OOP concept.
*/
#include<iostream>
using namespace std;
class complex
{
    float real1,real2,img1,img2;
public:
    float r,i;
    void getdata(){
        cout<<"Enter complex number c1:real1,img1."<<endl;
        cin>>real1>>img1;
        cout<<"Enter complex number c2:real2,img2."<<endl;
        cin>>real2>>img2;
    }
    void sum(){
        r=real1+real2;
        i=img1+img2;
    }
    void showdata(){
        cout<<"Sum of complex number "
            <<real1<<"+i"<<img1<<" and "
            <<real2<<"+i"<<img2<<" is "
            <<r<<"+i"<<i<<"."<<endl;
    }
};
int main()
{
    complex c;
    c.getdata();
    c.sum();
    c.showdata();
    return 0;
}
