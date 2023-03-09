#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice, bank_choice, account_choice, d_amt, w_amt;
    float interest_rate;

    // list of banks
    printf("List of Banks:\n");
    printf("1. State Bank of India\n");
    printf("2. ICICI Bank\n");
    printf("3. HDFC Bank\n");
    printf("4. Axis Bank\n");

    // user input for bank choice
    printf("Enter the number of the bank you want to select: ");
    scanf("%d", &bank_choice);

    // switch case for bank choice
    switch (bank_choice) {
        case 1:
            printf("\nSelected Bank: State Bank of India\n");
            break;
        case 2:
            printf("\nSelected Bank: ICICI Bank\n");
            break;
        case 3:
            printf("\nSelected Bank: HDFC Bank\n");
            break;
        case 4:
            printf("\nSelected Bank: Axis Bank\n");
            break;
        default:
            printf("\nInvalid bank choice\n");
            exit(0);
    }
	
	operation:
    // banking operations and account details
    printf("\nBanking Operations:\n");
    printf("1. Deposit\n");
    printf("2. Withdrawal\n");
    printf("3. Account Details\n");

    // user input for banking operation choice
    printf("\nEnter the number of the operation you want to perform: ");
    scanf("%d", &choice);

    // switch case for banking operation choice
    switch (choice) {
        case 1:
            printf("\nSelected Operation: Deposit\n");
            printf("\nEnter the amount to deposit: ");
            scanf("%d", &d_amt);
            printf("\n%d has been deposited successfully.\n",d_amt);
            goto operation;
        case 2:
            printf("\nSelected Operation: Withdrawal\n");
            printf("\nEnter the amount to withdraw: ");
            scanf("%d", &w_amt);
            printf("\n%d has been withdrawn successfully.\n", w_amt);
            goto operation;
        case 3:
            // account details
            account:
            printf("\nAccount Details:\n");
            printf("1. Savings Account\n");
            printf("2. Current Account\n");
            printf("3. Demat Account\n");
            printf("4. Exit\n");

            // user input for account choice
            printf("\nEnter the number of the account you want to select: ");
            scanf("%d", &account_choice);

            // switch case for account choice
            switch (account_choice) {
                case 1:
                    printf("\nSelected Account: Savings Account\n");
                    // benefits of savings account
                    printf("\nBenefits:\n");
                    printf("1. Interest Rate: 4%% per annum\n");
                    goto account;
                case 2:
                    printf("\nSelected Account: Current Account\n");
                    // benefits of current account
                    printf("\nBenefits:\n");
                    printf("1. No minimum balance required\n");
                    goto account;
                case 3:
                    printf("\nSelected Account: Demat Account\n");
                    // benefits of demat account
                    printf("\nBenefits:\n");
                    printf("1. Hassle-free trading\n");
                    goto account;
                default:
                    printf("\nInvalid account choice\n");
                    exit(0);
            }
            goto operation;
        default:
            printf("\nInvalid operation choice\n");
            exit(0);
    }

    return 0;
}

