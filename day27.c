#include <stdio.h>

int main()
{
    int choice;

    printf("\n========== DAY 27 ==========\n");
    printf("1. Student Record Management System\n");
    printf("2. Employee Management System\n");
    printf("3. Salary Management System\n");
    printf("4. Marksheet Generation System\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        // Q105 - Student Record Management System
        case 1:
        {
            int roll;
            char name[50];
            float marks;

            printf("\nEnter Student Roll No: ");
            scanf("%d", &roll);

            printf("Enter Student Name: ");
            scanf(" %[^\n]", name);

            printf("Enter Student Marks: ");
            scanf("%f", &marks);

            printf("\n----- STUDENT RECORD -----\n");
            printf("Roll No : %d\n", roll);
            printf("Name    : %s\n", name);
            printf("Marks   : %.2f\n", marks);

            break;
        }

        // Q106 - Employee Management System
        case 2:
        {
            int empId;
            char empName[50], department[30];
            float salary;

            printf("\nEnter Employee ID: ");
            scanf("%d", &empId);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", empName);

            printf("Enter Department: ");
            scanf(" %[^\n]", department);

            printf("Enter Salary: ");
            scanf("%f", &salary);

            printf("\n----- EMPLOYEE DETAILS -----\n");
            printf("Employee ID : %d\n", empId);
            printf("Name        : %s\n", empName);
            printf("Department  : %s\n", department);
            printf("Salary      : %.2f\n", salary);

            break;
        }

        // Q107 - Salary Management System
        case 3:
        {
            char name[50];
            float basic, hra, da, gross;

            printf("\nEnter Employee Name: ");
            scanf(" %[^\n]", name);

            printf("Enter Basic Salary: ");
            scanf("%f", &basic);

            hra = basic * 0.20;
            da = basic * 0.10;
            gross = basic + hra + da;

            printf("\n----- SALARY DETAILS -----\n");
            printf("Employee Name : %s\n", name);
            printf("Basic Salary  : %.2f\n", basic);
            printf("HRA (20%%)     : %.2f\n", hra);
            printf("DA (10%%)      : %.2f\n", da);
            printf("Gross Salary  : %.2f\n", gross);

            break;
        }

        // Q108 - Marksheet Generation System
        case 4:
        {
            char name[50];
            float m1, m2, m3, m4, m5;
            float total, percentage;
            char grade;

            printf("\nEnter Student Name: ");
            scanf(" %[^\n]", name);

            printf("Enter Marks of 5 Subjects:\n");
            scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);

            total = m1 + m2 + m3 + m4 + m5;
            percentage = total / 5;

            if (percentage >= 90)
                grade = 'A';
            else if (percentage >= 75)
                grade = 'B';
            else if (percentage >= 60)
                grade = 'C';
            else if (percentage >= 40)
                grade = 'D';
            else
                grade = 'F';

            printf("\n----- MARKSHEET -----\n");
            printf("Name       : %s\n", name);
            printf("Total      : %.2f / 500\n", total);
            printf("Percentage : %.2f%%\n", percentage);
            printf("Grade      : %c\n", grade);

            break;
        }

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}
