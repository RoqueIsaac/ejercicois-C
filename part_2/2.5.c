/*
5.- The simple interest on a loan is calculated by the formula interest = principal * rate * days / 365; The preceding formula
assumes that rate is the annual interest rate, and therefore includes the division by 365 (days). Develop a program that will input
principal , rate and days for several loans, and will calculate and display the simple interest for each loan, using the preceding
formula. Here is a sample input/output dialog:

1 Enter loan principal (-1 to end): 1000.00
2 Enter interest rate: .1
3 Enter term of the loan in days: 365
4 The interest charge is $100.00
5
6 Enter loan principal (-1 to end): 1000.00
7 Enter interest rate: .08375
8 Enter term of the loan in days: 224
9 The interest charge is $51.40
10
11 Enter loan principal (-1 to end): 10000.00
12 Enter interest rate: .09
13 Enter term of the loan in days: 1460
14 The interest charge is $3600.00
15
16 Enter loan principal (-1 to end): -1
*/

#include<stdio.h>

void main(){
    float loan, interest;
    int days;
    while(1){
        printf("\nEnter loan principal (-1 to end): ");
        scanf("%f", &loan);
        if(loan<=-1) break;
        printf("Enter interest rate: ");
        scanf("%f", &interest);
        printf("Enter term of the loan in days: ");
        scanf("%d", &days);
        printf("The interest charge is $%.2f", loan*interest*days/365);
        printf("\n");
    }
    printf("\n");

}