#include<stdio.h>
int main()
{
 char grade='A';

    printf("please enter your grade\n\n");
    scanf("%c",&grade);
    
    switch (grade)
    {
    
    case 'a':
    printf("EXCELLENT\n");
    break;
    
    case 'b':
    printf("VERY GOOD\n");
    break;
    
    case 'c':
    printf("GOOD\n");
    break;
    
    case 'd':
    printf("GOOD TRY\n");
    break;
    
    case 'f':
    printf("BAD\n");
    break;
    
    default:
    printf("SAMAHAN AUKUFANYA MTIHAN");
    break;
    }
    return grade;
    }
