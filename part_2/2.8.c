/*
8.- Write a program that uses looping to print the following table of values. Use the tab escape sequence, \t , 
in the printfseparate the columns with tabs
1   N   10*N 100*N 1000*N
2   1   10   100   1000
3   2   20   200   2000
4   3   30   300   3000
5   4   40   400   4000
6   5   50   500   5000
7   6   60   600   6000
8   7   70   700   7000
9   8   80   800   8000
10  9   90   900   9000
11  10  100  1000  10000
*/

#include<stdio.h>

void main(){
    int i;
    printf("\n\nN\t10*N\t100*N\t1000*N");
    for(i=1;i<=10;i++){
        printf("\n%d\t%d\t%d\t%d",i,i*10,i*100,i*1000);
    }
    printf("\n\n");
}