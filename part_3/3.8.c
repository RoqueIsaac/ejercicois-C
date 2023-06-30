/*
8.- Modify the program you wrote in previous Exercise (7) to read an odd number in the range 1 to 19 to specify the number of rows in the
diamond. Your program should then display a diamond of the appropriate size.
*/

#include<stdio.h>

void main(){
    int i,j,size=2, up_r;
    printf("\n");
    while(size%2==0||size<0){
        printf("give me a + odd number: ");
        scanf("%d",&size);
        if(size%2==0 || size<0){
            printf("%d is not odd",size);
            printf("\n");
        }
    }
    up_r=size/2;
    for(j=0;j<=up_r;j++){
        for(i=up_r-j-1;i>=0;i--) printf(" ");
        for(i=0; i<=2*j;i++) printf("*");
        printf("\n");
    }
    for(j=0;j<=up_r-1;j++){
        for(i=j;i>=0;i--) printf(" ");
        for(i=0;i<=size-2-2*j-1;i++) printf("*");
        printf("\n");
    }
}
  

