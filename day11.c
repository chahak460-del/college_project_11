// Q41: Write function to find sum of two numbers.

#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

// Q42: Write function to find maximum.

int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

// Q43: Write function to check prime.

int isPrime(int n) {
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

// Q44: Write function to find factorial.

long long factorial(int n) {
    long long fact = 1;
    int i;

    for (i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

int main() {
    int a = 10, b = 20, num = 5;

    printf("Q41: Sum of %d and %d = %d\n\n", a, b, sum(a, b));

    printf("Q42: Maximum of %d and %d = %d\n\n", a, b, maximum(a, b));

    if (isPrime(num))
        printf("Q43: %d is Prime\n\n", num);
    else
        printf("Q43: %d is Not Prime\n\n", num);

    printf("Q44: Factorial of %d = %lld\n", num, factorial(num));

    return 0;
}
