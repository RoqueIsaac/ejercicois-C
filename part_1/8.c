/*
8.- Write a program that reads in five integers and then determines and prints the largest and the smallest integers in the group. Use only
the programming techniques you have learned in this chapter.
*/

#include <stdio.h>

void main(){
    int i,j,smallest, largest, num[5];
    printf("\n5 integers: ");
    printf("\n");
    for(i=0; i<=4; i++){
        scanf("%i", &num[i]);
    }
    printf("\n");

    largest=num[0];
    smallest=num[0];

    for(i=0; i<=4; i++){
        for(j=0; j<=4; j++){
            if (num[i] > num[j] && num[i] > largest) largest = num[i];
            if (num[i] < num[j] && num[i] < smallest) smallest = num[i];
        }       
    }
    printf("smallest: %i", smallest);
    printf("\nlargest:  %i", largest);

    printf("\n \n");
    return;
}