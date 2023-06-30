/*
1.- Drivers are concerned with the mileage obtained by their automobiles. One driver has kept track of several tankfuls of gasoline by
recording miles driven and gallons used for each tankful. Develop a program that will input the miles driven and gallons used for each
thankful. The program should calculate and display the miles per gallon obtained for each tankful. After processing all input information, the
program should calculate and print the combined miles per gallon obtained for all tankfuls. Here is a sample input/output dialog.
1 Enter the gallons used (-1 to end): 12.8
2 Enter the miles driven: 287
3 The miles / gallon for this tank was 22.421875
4
5 Enter the gallons used (-1 to end): 10.3
6 Enter the miles driven: 200
7 The miles / gallon for this tank was 19.417475
8
9 Enter the gallons used (-1 to end): 5
10 Enter the miles driven: 120
11 The miles / gallon for this tank was 24.000000
12
13 Enter the gallons used (-1 to end): -1
14 The overall average miles/gallon was 21.601423
*/

#include<stdio.h>

void main(){

    float gal, miles, t_mil=0, t_gal=0;

    while(1){
        printf("\nEnter the gallons used (-1 to end): ");
        scanf("%f", &gal);
        if(gal<=-1) break;
        printf("Enter the miles driven: ");
        scanf("%f",&miles);
        t_mil+=miles;
        t_gal+=gal;
        printf("The miles / gallon for this tank was: %.6f", miles/gal);
        printf("\n");
    }

    printf("\nThe overall average miles/gallon was: %.6f", t_mil/t_gal);
    printf("\n\n");

    return;
}

/*
void main(){

    double gal[50], miles[50], t_mil, t_gal;
    int i,j;

    for(i=0;i<=49;i++){
        printf("\nEnter the gallons used (-1 to end): ");
        scanf("%lf", &gal[i]);
        if(gal[i]==-1) break;
        printf("Enter the miles driven: ");
        scanf("%lf",&miles[i]);
        t_mil+=miles[i];
        t_gal+=gal[i];
        printf("The miles / gallon for this tank was: %.6lf", miles[i]/gal[i]);
        printf("\n");
    }

    printf("The overall average miles/gallon was: %.6lf", t_mil/t_gal);
    printf("\n\n");

    return;
}
*/


