#include <stdio.h>
int main()

{
int marks;
char name[100];
char grade[4];


printf("enter your name \n");
scanf("%[^\n]s",&name);


printf("enter your marks \n");
scanf("%d",&marks);


printf("enter your grade \n");
scanf("%s",&grade);


printf("your name is %s \n your marks is %d \n your grade is %s \n",name,marks,grade);

return 0;
}