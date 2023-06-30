/*
5.- Write a program that reads in the radius of a circle and prints the circle’s diameter, circumference, and area. Use the constant value
3.14159 for π. Perform each of these calculations inside the printf statement(s) and use the conversion specifier %f.
*/

#include <stdio.h>
#define pi 3.14159

void main(){
    float r;
    printf("\ncircle radio: ");
    scanf("%f",&r);
    printf("\nDiameter: %.2f", 2*r);
    printf("\nCircumference: %.2f", 2*r*pi);
    printf("\nArea: %.2f", pi*r*r);
    printf("\n \n");

    return;
}