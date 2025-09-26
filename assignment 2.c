#include<stdio.h>
int main(){
   float radius, height, pi, Area;
  
   printf("\nEnter radius : ");
   scanf("%f", &radius);
   
   printf("\n Enter the height ");
   scanf("%f", &height);
  
   pi= 22/7;
   
   Area = pi * radius* radius *height;
   printf("\nThe area is: %.2f", Area);
    
    return 0;
    }
   
   
   
   