#include <stdio.h>
#include <math.h>


#define PI 3.14159



float area_rectangle(float length, float width);
float area_circle(float radius);
float volume_cube(float side);
float volume_sphere(float radius);


int main()
{
    
    int choice;
    float length, width, radius, side,area, volume;
       printf("welcome to Geometry progarm calculation\n");
       printf("Select a shape to calculate:\n ");
    printf("1.rectangle\n2.circle\n3.cube\n4.sphere\n ");
    printf("Enter your choice(1-4): ");
    scanf("%d", &choice);

    
   
        switch (choice)
        {
        case 1:
            
            printf("Enter the length of the rectangle: ");
			 scanf("%f ", &width);
            
			 printf("Enter  width of the rectangle: ");
            scanf("%f ", &width);
            
            area = area_rectangle(length, width);
            
            printf("The area of the rectangle is %.2f\n", area);
            break;
        case 2:
            
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            
            area = area_circle(radius);
            
            printf("The area of the circle is %.2f\n", area);
            break;
        case 3:
            
            printf("Enter the side of the cube: ");
            scanf("%f", &side);
            
            volume = volume_cube(side);
            
            printf("The volume of the cube is %.2f\n", volume);
            break;
        case 4:
            
            printf("Enter the radius of the sphere: ");
            scanf("%f", &radius);
            
            volume = volume_sphere(radius);
            
            printf("The volume of the sphere is %.2f\n", volume);
            break;
        default:
            
            printf("Invalid choice. Please try again.\n");
            break;
        }    
    printf("Thank you for using this program.\n");
	printf("created by: GEORGE JAILOS CHISEBE (REg NO: 23100523140OO5) & MARCEL MLUNGU CHOLOBA(REG NO: 23100523140064)");
    return 0;
}




float area_rectangle(float length, float width)
{
    return length * width;
}


float area_circle(float radius)
{
    return PI *pow(radius,2);
}


float volume_cube(float side)
{
    return pow(side,3);
}


float volume_sphere(float radius)
{
    return (4.0 / 3.0) * PI * pow(radius,3);
}



