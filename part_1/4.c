/*
4.- Write a program that inputs three different integers from the keyboard, then prints the sum, the average, the product, the smallest and
the largest of these numbers. Use only the single-selection form of the if statement you learned in this chapter. The screen dialogue should
appear as follows:
1  Input three different integers: 13 27 14
2  Sum is 54
3  Average is 18
4  Product is 4914
5  Smallest is 13
6  Largest is 27
*/

#include <stdio.h>

void main(){
    int a,b,c;
    printf("\nInput three diferent integers: ");
    scanf("%i %i %i", &a, &b, &c);
    printf("Sum is %i", a+b+c);
    printf("\nAverage is %i", (a+b+c)/3);
    printf("\nProduct is %i", a*b*c);
    if(a<b && a<c) printf("\nSmallest is %i", a);
    if(b<a && b<c) printf("\nSmallest is %i", b);
    if(c<a && c<b) printf("\nSmallest is %i", c);

    if(a>b && a>c) printf("\nLargest is %i", a);
    if(b>a && b>c) printf("\nLargest is %i", b);
    if(c>a && c>b) printf("\nLargest is %i", c);
    printf("\n \n");

    return;
}