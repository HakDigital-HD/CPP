#include<stdio.h>
int main()
{
 char grade;

    printf("please enter your grade\n\n");
    scanf("%c",&grade);
    
    switch (grade)
    {
    
    case 'A':
    printf("EXCELLENT\n");
    break;
    
    case 'B':
    printf("VERY GOOD\n");
    break;
    
    case 'C':
    printf("GOOD\n");
    break;
    
    case 'D':
    printf("GOOD TRY\n");
    break;
    
    case 'F':
    printf("BAD\n");
    break;
    
    default:
    printf("SAMAHAN AUKUFANYA MTIHAN");
    break;
    }
    return 0;
    }
