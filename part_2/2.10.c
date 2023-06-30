/*
10.- Input an integer containing only 0s and 1s (i.e., a “binary” integer) and print its decimal equivalent. [Hint: Use the remainder and
division operators to pick off the “binary” number’s digits one at a time from right to left. Just as in the decimal number system, in which the
rightmost digit has a positional value of 1, and the next digit left has a positional value of 10, then 100, then 1000, and so on, in the binary
number system the rightmost digit has a positional value of 1, the next digit left has a positional value of 2, then 4, then 8, and so on. Thus
the decimal number 234 can be interpreted as 4 * 1 + 3 * 10 + 2 * 100. The decimal equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8
or 1 + 0 + 4 + 8 or 13.]

para compilar
gcc -o 2.10 2.10.c -lm
-lm enlaza la biblioteca math de manera explicita

por defecto no se enlaza la biblioteca de funciona al generar el ejecutable, sin embargo si solo 
se compila no dara error, pero mas adelante si se quiere el executable, dara error nuevamente.

por el tipo de dato, solo soporta hasta 16 digitos, 7 bytes en dec.
una mejora es haciendo uso de string para no agotar el tipo de dato en dec.
*/

#include <stdio.h>
#include <math.h>

void main(){
    long int i, dec, k, b, num,res;
    while(1){
    
        printf("\nnumero binario + (-1 exit) +: ");
        scanf("%ld",&num);
        if(num<1) break;

        k=num;
        dec=0;
        i=0;
        while(num>=1){
            res=fmod(num,10);
            num/=10;
            if((int)res>1){
                printf("%ld no es binario",k);
                b=0;
                num=-1;
                break;
            }else{
                dec+=res*pow(2,i);
                b=1;
                i++;
            }
        }
        if(b==1) printf("%ld binario en decimal es %ld",k,dec);
    printf("\n\n");
    }
    printf("\n");
}