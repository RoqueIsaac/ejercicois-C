/*
Write a program that asks the user to enter two integers, obtains the numbers from the user, then prints the larger number followed by
the words “is larger.” If the numbers are equal, print the message “These numbers are equal.” Use only the single-selection form of the if
statement you learned in this chapter.
*/

#include <stdio.h>

void main(){
    int a, b;
    printf("\nenter 2 numbers: \n");
    scanf("%i", &a);
    scanf("%i", &b);
    printf("\n");
    if (a>b) printf("%i is larger",a);
    if (a<b) printf("%i is larger",b);
    if (a==b) printf("These numbers are equal");
    printf("\n");
    printf("\n");
    return;
}