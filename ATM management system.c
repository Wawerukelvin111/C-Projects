#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int balance = 0; // Initial balance

void checkBalance() {
    printf("Your current balance is: Ksh %d\n", balance);
}

void deposit(int amount) {
    balance += amount;
    printf("Ksh %d deposited successfully\n", amount);
}

void withdraw(int amount) {
    if (amount > balance) {
        printf("Insufficient funds\n");
    } else {
        balance -= amount;
        printf("Ksh %d withdrawn successfully\n", amount);
        printf("Remaining balance: Ksh %d\n", balance);
    }
}

void sendMoney(int bankOption, int amount) {
    const char* banks[] = {"EQUITY BANK", "COOPERATIVE BANK", "FAMILY BANK", "KCB BANK"};

    if (bankOption < 1 || bankOption > 4) {
        printf("Invalid bank option. Please select a valid bank option.\n");
        return;
    }

    const char* bankName = banks[bankOption - 1];

    if (balance < amount) {
        printf("Insufficient funds\n");
        return;
    }

    balance -= amount;
    printf("Ksh %d sent successfully to %s\n", amount, bankName);
    printf("Remaining balance: Ksh %d\n", balance);
}

int main() {
    int option, amount, bankOption;
    char bankOptionStr[5]; 

    do {
        printf("\nATM Management System Menu\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Send Money\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                checkBalance();
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);
                deposit(amount);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);
                withdraw(amount);
                break;
            case 4:
                printf("Select the bank to transfer money to:\n");
                printf("1. EQUITY BANK\n");
                printf("2. COOPERATIVE BANK\n");
                printf("3. FAMILY BANK\n");
                printf("4. KCB BANK\n");
                printf("Enter your choice: ");
                scanf("%s", bankOptionStr);
                bankOption = atoi(bankOptionStr);

                if (bankOption < 1 || bankOption > 4) {
                    printf("Invalid bank option. Please select a valid bank option.\n");
                    break;
                }

                printf("Enter amount to send: ");
                scanf("%d", &amount);

                sendMoney(bankOption, amount);
                break;
            case 5:
                printf("Exiting ATM Management System. Thank you!\n");
                break;
            default:
                printf("Invalid option. Please try again\n");
        }
    } while(option != 5);

    return 0;
}