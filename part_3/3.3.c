/*
3.- Write a program that finds the smallest of several integers. Assume that the first value read specifies the number of values remaining.
*/

#include<stdio.h>

void main(){

    int num, smallest, j;

    while(1){

        printf("\nCuantos numeros (x<=0 exit): ");
        scanf("%d",&num);
        if(num<=0) break;
        int nums[num];
        for(j=0;j<num;j++){
            scanf("%d", &nums[j]);
        }

        smallest=nums[0];
        for(j=0;j<num-1;j++){
            if(smallest>=nums[j+1]) smallest=nums[j+1];
        }
        printf("\nEl menor es %d", smallest);
        printf("\n\n");

    }



}