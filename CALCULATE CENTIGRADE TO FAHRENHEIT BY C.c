#include <stdio.h>

int main()

{
float c;
float fh;

printf("entere the temperature in centigrade\n");
scanf("%f",&c);

fh=(c*1.8)+32;

printf("temperature in fahrenheit is %f\n",fh);

return 0;

}