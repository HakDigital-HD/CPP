#include <stdio.h>
int main(){
	int n;
	while(1==1){
		printf("How many marks do you want to input: ");
		scanf("%d",&n);
		if(n<0){
			printf("Please enter number greater than 0\n\n");
		}
		else{
			break;
		}
	}
	float marks[n];
	printf("\nEnter your marks below\n");
	for(int i=0;i<n;i++){
		printf("%d: ",i+1);
		scanf("%f",&marks[i]);
	}
	printf("\n\n");
	int reply;
	float Av, sum = 0;
	while(1==1){
		printf("Choose one of the following:\n1. Calculate Average \n2. calculate grade\n- ");
		scanf("%d",&reply);
		if(reply<0 || reply>2){
			printf("Wrong input\n\n");
		}
		else{
			break;
		}
	}
	printf("\n\n");
	switch(reply){
		case 1:
			for(int i=0;i<n;i++){
				sum = sum + marks[i];
			}
			Av = sum/n;
			printf("\nThe average is: %.2f",Av);
			break;
		case 2:
			for(int i=0;i<n;i++){
				if(marks[i]>74){
					printf("%.2f: A\n",marks[i]);
				}
				else if(marks[i]>65){
					printf("%.2f: B\n",marks[i]);
				}
				else if(marks[i]>45){
					printf("%.2f: C\n",marks[i]);
				}
				else if(marks[i]>30){
					printf("%.2f: D\n",marks[i]);
				}
				else if(marks[i]<29){
					printf("%.2f: F\n",marks[i]);
				}
				
			}
	}
}