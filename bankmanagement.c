#include <stdio.h>
#include <stdlib.h>

struct BankAccount {
   char name[50];
   int account_number;
   float balance;
};

int main() {
   struct BankAccount customer;
   int choice;
   float amount;

   printf("Welcome to XYZ Bank\n");
   printf("Enter your name: ");
   fgets(customer.name, 50, stdin);
   printf("Enter account number: ");
   scanf("%d", &customer.account_number);
   customer.balance = 0;

   do {
      printf("\n");
      printf("1. Deposit\n");
      printf("2. Withdraw\n");
      printf("3. Check balance\n");
      printf("4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d", &choice);

      switch (choice) {
         case 1:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            customer.balance += amount;
            printf("Amount deposited successfully. Current balance: %.2f\n", customer.balance);
            break;
         case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > customer.balance) {
               printf("Insufficient balance. Current balance: %.2f\n", customer.balance);
            } else {
               customer.balance -= amount;
               printf("Amount withdrawn successfully. Current balance: %.2f\n", customer.balance);
            }
            break;
         case 3:
            printf("Your balance is: %.2f\n", customer.balance);
            break;
         case 4:
            printf("Thank you for banking with us!\n");
            exit(0);
         default:
            printf("Invalid choice. Please try again.\n");
      }
   } while (1);

    return 0;
}