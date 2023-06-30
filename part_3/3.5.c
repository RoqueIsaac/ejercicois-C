/*
5.- One interesting application of computers is drawing graphs and bar charts (sometimes called “histograms”). Write a program that reads
five numbers (each between 1 and 30). For each number read, your program should print a line containing that number of adjacent
asterisks. For example, if your program reads the number seven, it should print ******* .
*/

#include <stdio.h>

void main(){
    int star, j, k;

    while(1){
        printf("\nDame 5 numeros entre 1 y 30 (x<=0 Exit):\n");
        for(j=0;j<=4;j++){
            scanf("%d",&star);
            if(star<=0) break;
            if(star>=1 && star<=30){
                for(k=0;k<star;k++){
                    printf("*");
                }
            }else continue;
            printf("\n");
        }
        if(star<=0) break;
    }
}