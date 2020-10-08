/*Task #1:
 WAP in C to add two complex numbers using the concept of structure.
*/
#include<stdio.h>
struct complex
{
    int real,imag;
};
int main()
{
    struct complex c1,c2,res;
    printf("Enter complex number c1 \n");
    scanf("%d%d",&c1.real,&c1.imag);
    printf("Enter complex number c2 \n");
    scanf("%d%d",&c2.real,&c2.imag);
    res.real=c1.real+c2.real;
    res.imag=c1.imag+c2.imag;
    printf("Sum of complex numbers %d+i%d and %d+i%d is %d+i%d.\n",c1.real,c1.imag,c2.real,c2.imag,res.real,res.imag);
    return 0;
}
    
    
