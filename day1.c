/*Write a program to Calculate sum of first N natural numbers.*/
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}

/*Q2	Write a program to Print multiplication table of a given number.	*/
#include <stdio.h>

int main() {
    int n;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print multiplication table
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

/*Q3	Write a program to Find factorial of a number.*/
#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate factorial
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }

    // Display result
    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}

/*Q4	Write a program to Count digits in a number.	*/
#include <stdio.h>

int main() {
    int n, count = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Special case for 0
    if(n == 0) {
        count = 1;
    } else {
        // Count digits
        while(n != 0) {
            n = n / 10;
            count++;
        }
    }

    // Display result
    printf("Number of digits = %d\n", count);

    return 0;
}
