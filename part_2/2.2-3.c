/*2.2 - 2.3
2.- Develop a C program that will determine if a department store customer has exceeded the credit limit on a charge account. For each
customer, the following facts are available:
a) Account number
b) Balance at the beginning of the month
c) Total of all items charged by this customer this month
d) Total of all credits applied to this customer's account this month
e) Allowed credit limit
3.- The program should input each of these facts, calculate the new balance (= beginning balance + charges – credits), and determine if the
new balance exceeds the customer's credit limit. For those
customers whose credit limit is exceeded, the program should display the customer's account number, credit limit, new balance and the
message “Credit limit exceeded.” Here is a sample input/out-
put dialog
1 Enter account number (-1 to end): 100
2 Enter beginning balance: 5394.78
3 Enter total charges: 1000.00
4 Enter total credits: 500.00
5 Enter credit limit: 5500.00
6 Account: 100
7 Credit limit: 5500.00
8 Balance: 5894.78
9 Credit Limit Exceeded.
10
11 Enter account number (-1 to end): 200
12 Enter beginning balance: 1000.00
13 Enter total charges: 123.45
14 Enter total credits: 321.00
15 Enter credit limit: 1500.00
16
17 Enter account number (-1 to end): 300
18 Enter beginning balance: 500.00
19 Enter total charges: 274.73
20 Enter total credits: 100.00
21 Enter credit limit: 800.00
22
23 Enter account number (-1 to end): -1

*/

#include <stdio.h>

void main(){
    int account;
    float balance, charges, credits, limit, bal_t;
    while(1){
        printf("\nEnter account number (-1 to end): ");
        scanf("%d",&account);
        if (account<=-1) break;
        printf("Enter beginning balance: ");
        scanf("%f", &balance);
        printf("Enter total charges: ");
        scanf("%f", &charges);
        printf("Enter total credits: ");
        scanf("%f", &credits);
        printf("Enter credit limit: ");
        scanf("%f", &limit);

        bal_t=balance + charges - credits;

        if(limit<bal_t){
            printf("\nAccount: %d", account);
            printf("\nCredit limit: %.2f", limit);
            printf("\nBalance: %.2f", bal_t);
            printf("\nCredit Limit Exceeded.");

        }
        printf("\n");
    }
}

