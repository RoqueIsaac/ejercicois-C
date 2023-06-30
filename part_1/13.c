/*
13.- Write a program that inputs one five-digit number, separates the number into its individual digits and prints the digits separated from
one another by three spaces each. [Hint: Use combinations of integer division and the remainder operation.] For example, if the user types
in 42139, the program should print
1.- 4 2 1 3 9
*/

#include <stdio.h>

void main(){
    int k, j=0, residuo, nums[50];
    long int pl;
    printf("\ngive me a large number: ");
    scanf("%d", &pl);
    while(pl>0){
        residuo=pl%10;
        nums[j]=residuo;
        pl=pl/10;
        j++;
    }
    printf("\n");

    for(k=j-1; k>=0; k--){
        printf("%4d", nums[k]);
    }

    printf("\n\n");

    return;
}