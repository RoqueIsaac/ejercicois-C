/*
9.- Write a program that reads an integer and determines and prints whether it is odd or even. [Hint: Use the remainder operator. An even
number is a multiple of two. Any multiple of two leaves a remainder of zero when divided by 2.]
*/

#include <stdio.h>

void main(){
    int k;
    printf("\n");
    printf("give me a number: ");
    scanf("%i", &k);

    if (k%2==0) printf("number %i is even", k);
    else printf("number %i is odd", k);
    printf("\n\n");

    return;

}