#include <stdio.h>
#include <conio.h>
void main()

{
int n;
int fact=1;

printf("enter any number\n\n");
scanf("%d",&n);

do{
fact=fact*n;
n++; 

}

while(n>0);

printf("the factorial of the given number is %d",fact);

getch();

}