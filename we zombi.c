#include <stdio.h>
int main()

{
char name[6];
int age;

printf("enter your name\n\n");
scanf("%5s",&name);

printf("enter your age\n\n");
scanf("%d",&age);

printf("your name is %5s\n",name);
printf("your age is %d years old\n\n",age);

return 0;
}