#include <stdio.h>
int main()
{
	int x;
	while(1==1){
		printf("How many numbers do you want to input: ");
		scanf("%d",&x);
		if(x<=0){
			printf("Enter a number greater than zero\n\n");
		}
		else{
			break;
		}
	}
    int Number[x];
    int Max, Min;
    int i;
    printf("Enter the mark to calculate min and max \n");
    for (i = 0; i < x; i++)
    {
        printf("%d>", i + 1);
        scanf("%d", &Number[i]);
    }
    Min = Max = Number[0];
    for (i = 1; i < x; i++)
    {
        if (Number[i] < Min)
        {
            Min = Number[i];
        }
        if (Number[i] > Max)
        {
            Max = Number[i];
        }
    }
    printf("MaxMum Value is %d \n", Max);
    printf("Your MinMum Value is %d \n", Min);
}