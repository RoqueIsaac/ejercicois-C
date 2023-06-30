/*
2.- Write a program that calculates and prints the average of several integers. Assume the last value read with scanf is the sentinel 9999 .
A typical input sequence might be 10 8 11 7 9 9999 indicating that the average of all the values preceding 9999 is to be calculated.
*/


#include<stdio.h>

void main(){

    int num, sum,j=0;
    sum=0;
    num=0;
    printf("\nEnteros a sumar (9999 = fin de sumandos):\n");
    while(num!=9999){
        sum+=num;
        j++;
        scanf("%d",&num);
    }
    printf("\nel promedio es: %.2f: ",(float)sum/(j-1));  
    printf("\n\n");
}
