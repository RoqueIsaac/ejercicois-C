/*
7.- Write a program that prints the following diamond shape. You may use printf statements that print either a single asterisk ( * ) or a
single blank. Maximize your use of repetition (with nested for statements) and minimize the number of printf statements.
1     *
2    ***
3   *****
4  *******
5 *********
6  *******
7   *****
8    ***
9     *
*/

#include<stdio.h>


void main(){
    int i,j;
    for(j=0;j<=4;j++){
        for(i=4-j-1;i>=0;i--) printf(" ");
        for(i=0; i<=2*j;i++) printf("*");
        printf("\n");
    }
    for(j=0;j<=3;j++){
        for(i=j;i>=0;i--) printf(" ");
        for(i=0;i<=7-2*j-1;i++) printf("*");
        printf("\n");
    }
}