/*WAP in C to input the name, roll, marks and address of n students entered by the user and display the
entered details using the concept of structure.
*/
#include<stdio.h>
struct student
{
    char name[50],address[50];
    int roll;
    float marks;
};
int main()
{ printf("Enter number of students \n");
    int n;
    scanf("%d",&n);
    struct student s[n];
    printf("Enter student record format:::Name, roll marks address\n");
    for (int i=0;i<n;i++)
    {
        scanf("%s%d%f%s",s[i].name,&s[i].roll,&s[i].marks,s[i].address);
    }
    printf("Displaying each student details,\n");
     for (int i=0;i<n;i++)
    {
        printf("Name:%s\nRoll:%d\nMarks:%f\nAddress:%s\n\n",s[i].name,s[i].roll,s[i].marks,s[i].address);
    }
    return 0;
    
}
