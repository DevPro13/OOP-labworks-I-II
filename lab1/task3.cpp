//WAP in CPP to find the area of circle and rectangle using the concept of function overloading
#include<iostream>
#define PI 3.14
using namespace std;
void area(int,int);
void area(int);
void area(int l,int b)
{
    cout<<"Area of rect is "<<l*b<<endl;
}
void area(int r)
{
    cout<<"Area if circle is "<<PI*r*r<<endl;
}
int main()
{
    area(1,1);//rect
    area(1);
    return 0;
}

