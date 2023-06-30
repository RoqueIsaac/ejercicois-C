/*
13.- Write a program that reads in the side of a square and then prints that square out of asterisks. Your program should work for squares of
all side sizes between 1 and 20. For example, if your program reads a size of 4, it should print
*/

#include<stdio.h>

void main(){
    printf("\n");

    while(1){

        int i,j,sq;

        printf("\nnumero 1-20 (x<=0 exit): ");
        scanf("%d",&sq);
        if(sq<=0) break;
        if(sq>20) continue;
        for(i=0;i<sq;i++){
            for(j=0;j<sq;j++){
                printf("*");
            }
            printf("\n");
        }
    }
    printf("\n");
}