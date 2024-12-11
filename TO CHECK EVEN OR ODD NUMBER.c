#include<stdio.h>

int main()
{
int number;

printf("please enter your number\n");
scanf("%d",&number);

if(number%2==0){

printf("\neven number");
}

else if(number%2==1){
printf("\nodd number");
}

else {
printf("\nwrong please try again");
}
    return 0;
}