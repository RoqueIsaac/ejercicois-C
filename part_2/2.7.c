/*
7.- Write a program that utilizes looping to print the numbers from 1 to 10 side by side on the same line with three spaces between number
*/

#include<stdio.h>

void main(){
    int i;
    printf("\n");
    for(i=0;i<=10;i++){
        printf("%d   ",i);
    }
    printf("\n\n");
}