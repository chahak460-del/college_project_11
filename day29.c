#include <stdio.h>
#include <string.h>

int main()
{
    int choice;

    printf("\n========== DAY 29 ==========\n");
    printf("1. Menu-Driven Calculator\n");
    printf("2. Menu-Driven Array Operations\n");
    printf("3. Menu-Driven String Operations\n");
    printf("4. Inventory Management System\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        // Q113 - Menu Driven Calculator
        case 1:
        {
            int op;
            float a, b;

            printf("\nCalculator Menu\n");
            printf("1. Addition\n");
            printf("2. Subtraction\n");
            printf("3. Multiplication\n");
            printf("4. Division\n");
            printf("Enter operation: ");
            scanf("%d", &op);

            printf("Enter two numbers: ");
            scanf("%f%f", &a, &b);

            switch(op)
            {
                case 1:
                    printf("Result = %.2f\n", a + b);
                    break;

                case 2:
                    printf("Result = %.2f\n", a - b);
                    break;

                case 3:
                    printf("Result = %.2f\n", a * b);
                    break;

                case 4:
                    if(b != 0)
                        printf("Result = %.2f\n", a / b);
                    else
                        printf("Division by Zero is not possible.\n");
                    break;

                default:
                    printf("Invalid Operation!\n");
            }

            break;
        }

        // Q114 - Menu Driven Array Operations
        case 2:
        {
            int arr[100], n, i, op, sum = 0, max;

            printf("\nEnter size of array: ");
            scanf("%d", &n);

            printf("Enter %d elements:\n", n);

            for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            printf("\nArray Operations\n");
            printf("1. Display Array\n");
            printf("2. Find Sum\n");
            printf("3. Find Maximum\n");
            printf("Enter operation: ");
            scanf("%d", &op);

            switch(op)
            {
                case 1:
                    printf("Array Elements: ");
                    for(i = 0; i < n; i++)
                        printf("%d ", arr[i]);
                    break;

                case 2:
                    for(i = 0; i < n; i++)
                        sum += arr[i];
                    printf("Sum = %d\n", sum);
                    break;

                case 3:
                    max = arr[0];
                    for(i = 1; i < n; i++)
                    {
                        if(arr[i] > max)
                            max = arr[i];
                    }
                    printf("Maximum Element = %d\n", max);
                    break;

                default:
                    printf("Invalid Operation!\n");
            }

            break;
        }

        // Q115 - Menu Driven String Operations
        case 3:
        {
            char str[100];
            int op, i, len = 0;

            getchar();

            printf("\nEnter a String: ");
            fgets(str, sizeof(str), stdin);
            str[strcspn(str, "\n")] = '\0';

            printf("\nString Operations\n");
            printf("1. Find Length\n");
            printf("2. Convert to Uppercase\n");
            printf("3. Reverse String\n");
            printf("Enter operation: ");
            scanf("%d", &op);

            switch(op)
            {
                case 1:
                    printf("Length = %lu\n", strlen(str));
                    break;

                case 2:
                    for(i = 0; str[i] != '\0'; i++)
                    {
                        if(str[i] >= 'a' && str[i] <= 'z')
                            str[i] -= 32;
                    }
                    printf("Uppercase = %s\n", str);
                    break;

                case 3:
                    len = strlen(str);

                    for(i = 0; i < len / 2; i++)
                    {
                        char temp = str[i];
                        str[i] = str[len - i - 1];
                        str[len - i - 1] = temp;
                    }

                    printf("Reversed String = %s\n", str);
                    break;

                default:
                    printf("Invalid Operation!\n");
            }

            break;
        }

        // Q116 - Inventory Management System
        case 4:
        {
            int id, quantity;
            char product[50];
            float price;

            printf("\nEnter Product ID: ");
            scanf("%d", &id);

            printf("Enter Product Name: ");
            scanf(" %[^\n]", product);

            printf("Enter Quantity: ");
            scanf("%d", &quantity);

            printf("Enter Price per Item: ");
            scanf("%f", &price);

            printf("\n----- INVENTORY DETAILS -----\n");
            printf("Product ID     : %d\n", id);
            printf("Product Name   : %s\n", product);
            printf("Quantity       : %d\n", quantity);
            printf("Price          : %.2f\n", price);
            printf("Total Value    : %.2f\n", quantity * price);

            break;
        }

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}
