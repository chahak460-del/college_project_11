/*
------------------------------------------------------------
1. Write a program to Find sum of digits of a number.
   (TCS, Infosys, Wipro)
------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    int n, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}


/*
------------------------------------------------------------
2. Write a program to Reverse a number.
   (TCS, Infosys, Wipro)
------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    int n, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    printf("Reversed number = %d\n", rev);

    return 0;
}


/*
------------------------------------------------------------
3. Write a program to Find product of digits.
   (TCS, Infosys, Wipro)
------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    int n, product = 1, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        product *= digit;
        n /= 10;
    }

    printf("Product of digits = %d\n", product);

    return 0;
}


/*
------------------------------------------------------------
4. Write a program to Check whether a number is palindrome.
   (TCS, Infosys, Wipro)
------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    int n, original, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    if (original == rev)
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome Number\n");

    return 0;
}