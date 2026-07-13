// Q45: Write a program to Write function for palindrome.

#include <stdio.h>

int isPalindrome(int n) {
    int rev = 0, temp = n;

    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    return (rev == n);
}

// Q46: Write a program to Write function for Armstrong.

int isArmstrong(int n) {
    int sum = 0, temp = n, digit;

    while (temp > 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    return (sum == n);
}

// Q47: Write a program to Write function for Fibonacci.

void fibonacci(int n) {
    int a = 0, b = 1, c, i;

    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

// Q48: Write a program to Write function for perfect number.

int isPerfect(int n) {
    int i, sum = 0;

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }

    return (sum == n);
}

int main() {
    int num1 = 121, num2 = 153, num3 = 6;

    // Q45
    if (isPalindrome(num1))
        printf("Q45: %d is Palindrome\n\n", num1);
    else
        printf("Q45: %d is Not Palindrome\n\n", num1);

    // Q46
    if (isArmstrong(num2))
        printf("Q46: %d is Armstrong Number\n\n", num2);
    else
        printf("Q46: %d is Not Armstrong Number\n\n", num2);

    // Q47
    printf("Q47: Fibonacci Series:\n");
    fibonacci(10);
    printf("\n\n");

    // Q48
    if (isPerfect(num3))
        printf("Q48: %d is Perfect Number\n", num3);
    else
        printf("Q48: %d is Not Perfect Number\n", num3);

    return 0;
}
