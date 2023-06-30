/*
11.- Write a program that reads in two integers and determines and prints if the first is a multiple of the second. [Hint: Use the remainder
operator.]
*/

#include <stdio.h>

void main(){
    int a,b;
    printf("\n");
    printf("num a: ");
    scanf("%i", &a);
    printf("num b: ");
    scanf("%i", &b);

    if ((a%b)==0) printf("\nnumber %i is multiple of %i", a, b);
    else printf("\n%i is not multiple of %i", a, b);
    printf("\n\n");  

    return;
}