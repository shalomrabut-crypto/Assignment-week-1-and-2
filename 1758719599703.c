/* Name:RABUT RE SHALOM
Registration number:PA106/G/29293/25
Assignement about  calculation of surface area and volume of a cylinder*/
#include<stdio.h>
int main(){
   float radius, height, pi, Volume, Area;
  
   printf("\nEnter radius : ");
   scanf("%f", &radius);
   
   printf("\nEnter the height ");
   scanf("%f", &height);
  
   pi= 22/7;
   
   Volume = pi * radius* radius *height;
   printf("\nThe volume is: %.2f\n", Volume);
    
    Area=( 2* pi * radius*radius)+(2 *pi* radius * height);
    printf("The surface area of the cylinder is: %.2f \n", Area);
   
   
    
    return 0;
    }
   
   
   
   