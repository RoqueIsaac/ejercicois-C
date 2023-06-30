/*
Write a program that asks the user to enter two numbers, obtains them from the user, and prints their sum, product, difference, quotient,
and remainder.
*/

#include <stdio.h>

void main(){
    float a, b;
    printf("dame 2 numeros: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    printf("\nsuma = %.2f", a + b);
    printf("\nproducto = %.2f", a*b);
    printf("\ndiferencia = %.2f", a - b);
    printf("\ndivision = %.2f", a/b);
    printf("\nresiduo = %i", (int)a%(int)b);
    printf("\n");
    printf("\n");


    return;
}
