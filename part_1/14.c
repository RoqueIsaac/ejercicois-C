/*
14.- Using only the techniques you learned in this chapter, write a program that calculates the squares and cubes of the numbers from 0 to
10 and uses tabs to print
the following table of values
1 number square cube
2   0      0      0
3   1      1      1
4   2      4      8
.
.
.
12 10     100    1000
*/

#include <stdio.h>

void main(){
    int i;
    printf("\n\n");
    printf("\nnumber  square  cube");


    for(i=0; i<=10; i++){
        printf("\n  %-2d       %-3d    %-4d", i, i*i, i*i*i);
    }
    printf("\n\n"); 
    return;

}