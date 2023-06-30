/*
9.- Assume i = 1 , j = 2 , k = 3 and m = 2 . What does each of the following statements print?
a) printf( "%d", i == 1 );
b) printf( "%d", j == 3 );
c) printf( "%d", i >= 1 && j < 4 );
d) printf( "%d", m < = 99 && k < m );
e) printf( "%d", j >= i || k == m );
f) printf( "%d", k + m < j || 3 - j >= k );
g) printf( "%d", !m );
h) printf( "%d", !( j - m ) );
i) printf( "%d", !( k > m ) );
j) printf( "%d", !( j > k ) );
*/

#include<stdio.h>

void main(){
    int i=1, j=2, k=3, m=2;
    printf( "a) %d\n", i == 1 );
    printf( "b) %d\n", j == 3 );
    printf( "c) %d\n", i >= 1 && j < 4 );
    printf( "d) %d\n", m <= 99 && k < m );
    printf( "e) %d\n", j >= i || k == m );
    printf( "f) %d\n", k + m < j || 3 - j >= k );
    printf( "g) %d\n", !m );
    printf( "h) %d\n", !( j - m ) );
    printf( "i) %d\n", !( k > m ) );
    printf( "j) %d\n", !( j > k ) );
    printf("\n");
}