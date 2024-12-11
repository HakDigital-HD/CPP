#include <stdio.h>
int main( )


{
float weight ;
float height ;
float BMI;
float height²;

printf("enter your weight in kirogram\n\n");
scanf("%f",&weight);

printf("enter your height in meter\n\n");
scanf("%f",&height);

height²=height*height;
BMI=weight/height²;

printf("the BMI is %f\n",BMI);

return 0;


}
        
        
        