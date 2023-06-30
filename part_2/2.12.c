/*
12.- Write a program that reads an integer and determines and prints how many digits in the integer are 7s.

por el tipo de dato, solo llega a 16 digitos
*/

#include<stdio.h>

void main(){
    long int num, k;
    int i, res;
    printf("\n\n");
    while(1){
        i=0;
        printf("Numero entero (x<0 exit):" );
        scanf("%ld",&num);
        if(num<0) break;
        k=num;
        while(num>1){
            res=num%10;
            if(res==7) i++;
            num/=10;
        }
        printf("%ld tiene %d 7's",k,i);
        printf("\n\n"); 
        
    }
}