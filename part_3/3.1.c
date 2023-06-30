/*
1.- Write a program that sums a sequence of integers. Assume that the first integer read with scanf specifies the number of values
remaining to be entered. Your program should read only one value each time scanf is executed. A typical input sequence might be 5 100
200 300 400 500 where the 5 indicates that the subsequent five values are to be summed

*/

#include<stdio.h>

void main(){

    int i, j, num, sum;
    printf("\n");
    while(1){
        printf("\nCuantos sumandos (x<0 exit) ?: ");
        scanf("%d",&num);
        if(num<0) break;
        sum=0;
        for(i=0;i<num;i++){
            scanf("%d", &j);
            sum+=j;
        }
        printf("\nla suma es: %d",sum);
        printf("\n");
    }
    printf("\n\n");

}

