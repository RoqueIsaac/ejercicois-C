/*
One large chemical company pays its salespeople on a commission basis. The salespeople receive $200 per week plus 9% of their
gross sales for that week. For example, a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9% of $5000, or a
total of $650. Develop a program that will input each salesperson’s gross sales for the last week and will calculate and display that
salesperson's earnings. Process one salesperson's figures at a time. Here is a sample input/output dialog:
1 Enter sales in dollars (-1 to end): 5000.00
2 Salary is: $650.00
3
4 Enter sales in dollars (-1 to end): 1234.56
5 Salary is: $311.11
6
7 Enter sales in dollars (-1 to end): 1088.89
8 Salary is: $298.00
9
10 Enter sales in dollars (-1 to end): -1
*/

#include <stdio.h>

void main(){
    float salari, sales;
    while(1){
        printf("\nEnter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
        if (sales<=-1) break;
        printf("Salary is: %.2f", 200+(sales*0.09));
        printf("\n");
    }
    printf("\n");
    return;
}