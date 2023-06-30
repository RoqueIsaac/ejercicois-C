/*
9.- A palindrome is a number or a text phrase that reads the same backward as forward. For example, each of the following five-digit
integers is a palindrome: 12321, 55555, 45554 and 11611. Write a program that reads in a five-digit integer and determines whether or not
it’s a palindrome. [Hint: Use the division and remainder operators to separate the number into its individual digits.]
*/

#include <stdio.h>

void main(){
    int a[5], num, k, i;
    printf("”\n");
    while(1){
        printf("\nNumero de 5 digitos [-1 exit]: ");
        scanf("%d", &num);
        k=num;
        if(num<=-1) break;
        for(i=0;i<=4;i++){
            a[i]=num%10;
            num/=10;
        }
        if(num!=0){
            printf("Numero mayor a 5 digitos !!");
        }
        else if(a[0]==a[4]  && a[1]==a[3]){
            printf(" %d es palindrome !", k);
        }
        else{
            printf(" %d no es palindrome", k);
        }
        printf("\n");
    }
}