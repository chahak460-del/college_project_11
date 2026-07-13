#include <stdio.h>
#include <string.h>

#define MAX 100

// ---------- Functions for Q120 ----------
void addNumbers()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Sum = %d\n", a + b);
}

void displayMessage()
{
    printf("Mini Project Completed Successfully!\n");
}

int main()
{
    int choice;

    printf("\n========== DAY 30 ==========\n");
    printf("1. Student Record System\n");
    printf("2. Mini Library System\n");
    printf("3. Mini Employee Management System\n");
    printf("4. Complete Mini Project\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        // ====================================================
        // Q117 - Student Record System
        // ====================================================
        case 1:
        {
            int n, i;
            int roll[MAX];
            float marks[MAX];
            char name[MAX][50];

            printf("Enter Number of Students: ");
            scanf("%d", &n);

            for(i = 0; i < n; i++)
            {
                printf("\nStudent %d\n", i + 1);

                printf("Roll No: ");
                scanf("%d", &roll[i]);

                printf("Name: ");
                scanf(" %[^\n]", name[i]);

                printf("Marks: ");
                scanf("%f", &marks[i]);
            }

            printf("\n----- STUDENT RECORDS -----\n");

            for(i = 0; i < n; i++)
            {
                printf("\nStudent %d\n", i + 1);
                printf("Roll No : %d\n", roll[i]);
                printf("Name    : %s\n", name[i]);
                printf("Marks   : %.2f\n", marks[i]);
            }

            break;
        }

        // ====================================================
        // Q118 - Mini Library System
        // ====================================================
        case 2:
        {
            int n, i;
            int bookId[MAX];
            char title[MAX][50];
            char author[MAX][50];

            printf("Enter Number of Books: ");
            scanf("%d", &n);

            for(i = 0; i < n; i++)
            {
                printf("\nBook %d\n", i + 1);

                printf("Book ID: ");
                scanf("%d", &bookId[i]);

                printf("Book Title: ");
                scanf(" %[^\n]", title[i]);

                printf("Author: ");
                scanf(" %[^\n]", author[i]);
            }

            printf("\n----- LIBRARY RECORDS -----\n");

            for(i = 0; i < n; i++)
            {
                printf("\nBook %d\n", i + 1);
                printf("Book ID : %d\n", bookId[i]);
                printf("Title   : %s\n", title[i]);
                printf("Author  : %s\n", author[i]);
            }

            break;
        }

        // ====================================================
        // Q119 - Mini Employee Management System
        // ====================================================
        case 3:
        {
            int n, i;
            int id[MAX];
            float salary[MAX];
            char empName[MAX][50];

            printf("Enter Number of Employees: ");
            scanf("%d", &n);

            for(i = 0; i < n; i++)
            {
                printf("\nEmployee %d\n", i + 1);

                printf("Employee ID: ");
                scanf("%d", &id[i]);

                printf("Employee Name: ");
                scanf(" %[^\n]", empName[i]);

                printf("Salary: ");
                scanf("%f", &salary[i]);
            }

            printf("\n----- EMPLOYEE RECORDS -----\n");

            for(i = 0; i < n; i++)
            {
                printf("\nEmployee %d\n", i + 1);
                printf("ID     : %d\n", id[i]);
                printf("Name   : %s\n", empName[i]);
                printf("Salary : %.2f\n", salary[i]);
            }

            break;
        }

        // ====================================================
        // Q120 - Complete Mini Project
        // ====================================================
        case 4:
        {
            int option;

            printf("\n===== MINI PROJECT MENU =====\n");
            printf("1. Add Two Numbers\n");
            printf("2. Display Message\n");
            printf("Enter Option: ");
            scanf("%d", &option);

            switch(option)
            {
                case 1:
                    addNumbers();
                    break;

                case 2:
                    displayMessage();
                    break;

                default:
                    printf("Invalid Option!\n");
            }

            break;
        }

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}
