#include <stdio.h>
float balance = 0.0;
void deposit()
 {
float amount;
    printf("Enter the amount to deposit: ");
    scanf("%f", &amount);
    if (amount < 0) 
    {
        printf("Invalid amount!\n");
        return;
    }
    balance += amount;
    printf("Deposit successful. Your new balance is Rs %.2f\n", balance);
}
void withdraw()
 {
    float amount;
    printf("Enter the amount to withdraw: ");
    scanf("%f", &amount);
    if (amount < 0)
     {
        printf("Invalid amount!\n");
        return;
    }
    if (amount > balance) 
    {
        printf("Insufficient balance!\n");
        return;
    }
    balance -= amount;
    printf("Withdrawal successful. Your new balance is Rs %.2f\n", balance);
}
void checkBalance() 
{
printf("Your current balance is Rs %.2f\n", balance);
}

int main() 
{
    int choice;
    printf("Welcome to the our Bank\n");
    do {
printf("\n1. Deposit\n");
printf("2. Withdraw\n");
printf("3. Check Balance\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
            case 1:
                deposit();
                break;
            case 2:
                withdraw();
                break;
            case 3:
                checkBalance();
                break;
            case 4:
                printf("Thank you for using our bank services\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
