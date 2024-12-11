#include <stdio.h>

double square (double num)
{
return(num*num);
}

int main()
{
int num;
double m;

printf("\nfunction:to find square of a number\n\n");

printf("please enter any number for square\n\n");
scanf("%d",&num);

m=square(num);

printf("the square of %d is:%f\n",num,m);

return 0;

}