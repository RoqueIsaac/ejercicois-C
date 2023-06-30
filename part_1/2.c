/*
2.- Write a program that prints the numbers 1 to 4 on the same line. Write the program using the following methods.
a) Using one printf statement with no conversion specifiers.
b) Using one printf statement with four conversion specifiers.
c) Using four printf statements.
*/
#include <stdio.h>

void main(){
    printf("\n1 2 3 4");
    printf("\n%i %i %i %i", 1, 2, 3, 4);
    printf("\n1 ");
    printf("2 ");
    printf("3 ");
    printf("4");
    printf("\n \n");

    return;
}