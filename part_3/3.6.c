/*
6.- Write a program that prints a table of the binary, octal and hexadecimal equivalents of the decimal numbers in the range 1 through 256.
If you’re not familiar with these number systems, read Appendix C before you attempt this exercise.
*/

#include<stdio.h>

void convert(int num, int base);

void main(){
    int j;
    printf("\n");
    printf("\nDecimal \tBinario \tOctal \tHexadecimal\n");

    for(j=0;j<=256; j++){

        printf("%4d",j);
        printf(" \t\t ");
        convert(j,2);
        if(j<=15) printf(" \t\t ");
        else printf(" \t ");
        convert(j,8);
        printf(" \t ");
        convert(j,16);
        printf("\n");
    }
    printf("\n");

}


void convert(int num, int base){
    char result[]={'0','0','0','0','0','0','0','0','0'};
    int res, i=0, j=0;
    while(num>0){
        res=num%base;
        if(base==16){
            switch (res){
                case 10:
                    result[i]='A';
                    break;
                case 11:
                    result[i]='B';
                    break;
                case 12:
                    result[i]='C';
                    break;
                case 13:
                    result[i]='D';
                    break;
                case 14:
                    result[i]='E';
                    break;
                case 15:
                    result[i]='F';
                    break;
                default:
                    result[i]=res+'0';
            }
        }else {
            result[i]=res+'0';
        }
        num=num/base;
        //printf("%c   %d\n", result[i], num);
        i++;
    }
    //printf("%s",result);
    for(j=i;j>=0;j--){
        printf("%c",result[j]);
    }
}
