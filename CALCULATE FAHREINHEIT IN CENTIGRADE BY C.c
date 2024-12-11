#include <stdio.h>
int main()

{
float c;
float fh;

printf("enter temperature in fahrenheit\n");
scanf("%f",&fh);

c=(fh-32)/1.8;

printf("the temperature in centigrade is%f\n",c);

return 0;
}
