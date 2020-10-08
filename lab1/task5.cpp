#include<iostream>
using namespace std;
int sum (int,int,int,int,int,int);
int sum(int a,int b,int c=0,int d=0,int e=0,int f=0){
    return (a+b+c+d+e+f);
}
int main()
{
    cout<<"sum of 1 ,2 is "<<sum(1,2)<<endl;
    cout<<"sum of 1,2,3 is "<<sum(1,2,3)<<endl;
    cout<<"sum of 1,2,3,4 is "<<sum(1,2,3,4)<<endl;
    cout<<"sum of 1,2,3,4,5 is "<<sum(1,2,3,4,5)<<endl;
    cout<<"sum of 1,2,3,4,5,6 is "<<sum(1,2,3,4,5,6)<<endl;
    return 0;
}
