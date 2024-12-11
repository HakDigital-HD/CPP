#include <stdio.h>
int main()

{

char name[10];
int age;
char gender[6];
float gpa;

printf("enter your name\n");
scanf("%9s",&name);

printf("enter your age\n");
scanf("%d",&age);

printf("enter your gender\n");
scanf("%5s",&gender);

printf("enter your gpa\n");
scanf("%f",&gpa);

printf("my name is%9s\n",name);
printf("my age is %dyears old\n",age);
printf("my gender is %5s\n",gender);
printf("my gpa is %f\n",gpa);

return 0;

}