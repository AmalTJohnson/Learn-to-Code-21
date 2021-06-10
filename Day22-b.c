//  Q -  Write a C program that reads and displays details of 4 students. 
// The 'structure' should contain the RollNo(int), FirstName(string) and marks(float).
#include <stdio.h>
#include <string.h>

#include <stdlib.h>
 struct student
{
int roll;
            char name[100];
                 float marks;
                 
}
                 s[10];


int main() 
{
int i;

for(i=0;i<4;++i)

{
scanf("%d",&s[i].roll);
scanf("%s",&s[i].name);
scanf("%f",&s[i].marks);
}
for(i=0;i<4;i++)
{printf("DETAILS OF ROLLNO %d",s[i].roll);
 printf("\nNAME: ");
 puts(s[i].name);
 printf("MARKS: %.2f\n",s[i].marks);
}
   
    return 0;
}
