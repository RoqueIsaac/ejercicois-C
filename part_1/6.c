/*
6.- Write a program that prints the following shapes with asterisks.
1 *********    ***      *         *
2 *       *   *   *    ***      *   *
3 *       *  *     *  *****    *     *
4 *       *  *     *    *     *       *
5 *       *  *     *    *    *         *
6 *       *  *     *    *     *       *
7 *       *  *     *    *      *     *
8 *       *   *   *     *       *   *
9 *********    ***      *         *
*/
#include <stdio.h>
void main(){
    int j,k;

    printf("\n*********    ***      *         *");
    printf("\n*       *   *   *    ***      *   *");
    printf("\n*       *  *     *  *****    *     *");
    printf("\n*       *  *     *    *     *       *");
    printf("\n*       *  *     *    *    *         *");
    printf("\n*       *  *     *    *     *       *");
    printf("\n*       *  *     *    *      *     *");
    printf("\n*       *   *   *     *       *   *");
    printf("\n*********    ***      *         *");
    printf("\n \n");

    for(j=0;j<=8;j++){
        for(k=0;k<=8;k++){
            if (j==0 || j==8){
                printf("*");
            }else{
                if (k==0 || k==8) printf("*");
                else printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    for (j=0;j<=8;j++){
        if (j==0 || j==8){
            printf("  ***  ");
        }else{
            if(j==1 || j==7) printf(" *   * ");
            else printf("*     *");
        }
        printf("\n");
    }
    printf("\n");

    int q,r;
    for(j=0;j<9;j++){
        for(q=0;q<=2;q++) {
            printf(" ");
        }
        for(r=0;r<=2*q-1;r++) {
            printf("*");
        }
        printf("\n");


    }
    printf("\n");







    int n=0, espacio=4,p=0;

    for(k=0;k<=4;k++){
        for(j=0;j<=espacio;j++){
            printf(" ");
        }
        printf("*");
        //for(j=0;j<=espacio;j++) printf(" ");
        //printf("*");
        if(k==0) espacio=espacio-2;
        else {
            
            for(j=0;j<=espacio;j++) printf(" ");
            printf("*");
            espacio=espacio-1;
        }
        printf("\n");


        //for(j=0;j<=11;j++){
            
          



       //}
    }
    
printf("\n\n");
    

    return;
}