#include <stdio.h>
int maximamu (int,int);

int main()

{
int a;
int b;

printf("enter two integer number \n\n");
scanf("%d%d",&a,&b);

printf("maximamu of %d and %d is %d\n",a,b,maximamu(a,b));


}

int maximamu(int x,int y)
{
return(x>y?x:y);

}