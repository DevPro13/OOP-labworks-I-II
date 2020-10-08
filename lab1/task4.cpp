/*Task #4:
 WAP in CPP to illustrate the concept of inline function.
*/
#include<iostream>
using namespace std;
inline int greatest(int x,int y){
    return (x>y)?x:y;
}
int main()
{
    cout<<"max num betn 20 and 40 is "<<greatest(20,40)<<endl;
    cout<<"max num  betn 30 and 10 is "<<greatest(30,10)<<endl;
    return 0;
}
