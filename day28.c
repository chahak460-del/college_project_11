#include <stdio.h>

int main()
{
    int choice;

    printf("\n========== DAY 28 ==========\n");
    printf("1. Library Management System\n");
    printf("2. Bank Account System\n");
    printf("3. Ticket Booking System\n");
    printf("4. Contact Management System\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        // Q109 - Library Management System
        case 1:
        {
            int bookId;
            char title[100], author[100];
            int quantity;

            printf("\nEnter Book ID: ");
            scanf("%d", &bookId);

            printf("Enter Book Title: ");
            scanf(" %[^\n]", title);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", author);

            printf("Enter Quantity: ");
            scanf("%d", &quantity);

            printf("\n----- LIBRARY RECORD -----\n");
            printf("Book ID   : %d\n", bookId);
            printf("Title     : %s\n", title);
            printf("Author    : %s\n", author);
            printf("Quantity  : %d\n", quantity);

            break;
        }

        // Q110 - Bank Account System
        case 2:
        {
            int accountNo;
            char name[50];
            float balance, amount;
            int option;

            printf("\nEnter Account Number: ");
            scanf("%d", &accountNo);

            printf("Enter Account Holder Name: ");
            scanf(" %[^\n]", name);

            printf("Enter Initial Balance: ");
            scanf("%f", &balance);

            printf("\n1. Deposit\n");
            printf("2. Withdraw\n");
            printf("Choose Option: ");
            scanf("%d", &option);

            if(option == 1)
            {
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                balance += amount;
            }
            else if(option == 2)
            {
                printf("Enter Withdrawal Amount: ");
                scanf("%f", &amount);

                if(amount <= balance)
                    balance -= amount;
                else
                    printf("Insufficient Balance!\n");
            }
            else
            {
                printf("Invalid Option!\n");
            }

            printf("\n----- ACCOUNT DETAILS -----\n");
            printf("Account No : %d\n", accountNo);
            printf("Name       : %s\n", name);
            printf("Balance    : %.2f\n", balance);

            break;
        }

        // Q111 - Ticket Booking System
        case 3:
        {
            char passenger[50];
            int age, tickets;
            float fare, total;

            printf("\nEnter Passenger Name: ");
            scanf(" %[^\n]", passenger);

            printf("Enter Age: ");
            scanf("%d", &age);

            printf("Enter Number of Tickets: ");
            scanf("%d", &tickets);

            fare = 250.0;
            total = fare * tickets;

            printf("\n----- TICKET DETAILS -----\n");
            printf("Passenger Name : %s\n", passenger);
            printf("Age            : %d\n", age);
            printf("Tickets        : %d\n", tickets);
            printf("Fare/Ticket    : %.2f\n", fare);
            printf("Total Fare     : %.2f\n", total);

            break;
        }

        // Q112 - Contact Management System
        case 4:
        {
            char name[50];
            char phone[20];
            char email[50];

            printf("\nEnter Contact Name: ");
            scanf(" %[^\n]", name);

            printf("Enter Phone Number: ");
            scanf("%s", phone);

            printf("Enter Email ID: ");
            scanf("%s", email);

            printf("\n----- CONTACT DETAILS -----\n");
            printf("Name  : %s\n", name);
            printf("Phone : %s\n", phone);
            printf("Email : %s\n", email);

            break;
        }

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}
