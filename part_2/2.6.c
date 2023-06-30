/*
6.- Write a program that demonstrates the difference between predecrementing and postdecrementing using the decrement operator -- .
*/

#include<stdio.h>

void main(){
    int a=3,b=0;

    printf("a=%d    b=%d", a, b);
    printf("\nantes de incremento: b=a++");
    b=a++;
    printf("\nb=%d",b);
    printf("\na=%d",a);
    printf("\n\n");

    a=3,b=0;
    printf("a=%d    b=%d", a, b);
    printf("\ndespues de incremento: b=++a");
    b=++a;
    printf("\nb=%d",b);
    printf("\na=%d",a);
    printf("\n");


}