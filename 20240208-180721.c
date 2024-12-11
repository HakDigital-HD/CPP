#include<stdio.h>
int main()
{
int choice;
int area,width,base,length,heigth;

    printf("enter\n1.to calculate area of triangler\n");
    printf("\n2.to calculate area of rectangle\n");
    printf("\n3.to calculate area of trapezium\n\n");
    
    printf("choice your desire\n");
    scanf("%d",&choice);
    
    switch(choice){
    case 1:{
    printf("please enter the base of triangler\n");
    scanf("%d",&base);
    printf("please enter the heigth of triangler\n");
    scanf("%d",&heigth);
    
    area=(base*heigth)/2;
    printf("the area of triangle is %d",area);
    break;}
    
    case 2:{
    printf("please enter the width of rectangler\n");
    scanf("%d",&width);
    printf("please enter the length of rectangler\n");
    scanf("%d",&length);
    
    area=length*width;
    printf("the area of rectangler is %d",area);
    break;}
    
    
    case 3:{
    printf("please enter the base of trapezium\n");
    scanf("%d",&base);
    printf("please enter the heigth of trapezium\n");
    scanf("%d",&heigth);
    printf("please enter the width of trapezium\n ");
    scanf("%d",&width);
    
    area=(base+width)/2*heigth;
    printf("the area of trapezium is %d",area);
    break;}
    
    default:{
    
    printf("No choicen try again");
    break;
    
    }}
    
    return 0;
    }
    