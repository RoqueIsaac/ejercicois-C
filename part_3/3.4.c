/*
4.- Write a program that prints the following patterns separately, one below the other. Use for loops to generate the patterns. All asterisks
( * ) should be printed by a single printf statement of the form printf( "*" ); (this causes the asterisks to print side by side). [Hint:
The last two patterns require that each line begins with an appropriate number of blanks.]

*/

#include<stdio.h>

void main(){
    int i,j;
    printf("\n");
    for(i=0;i<=9;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");

    for(i=9;i>=0;i--){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for(i=0;i<=9;i++){
        for(j=0;j<=i-1;j++){
            printf(" ");
        }
        for(j=0;j<=9-i;j++){
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");

    for(i=0;i<=9;i++){
        for(j=0;j<=9-i-1;j++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}