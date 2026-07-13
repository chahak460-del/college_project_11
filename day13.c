// Q49: Write a program to Input and display array.

#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int i, sum = 0;
    int largest, smallest;
    int evenCount = 0, oddCount = 0;

    // Q49
    printf("Q49: Array Elements:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // Q50: Find sum and average of array.
    for (i = 0; i < 5; i++) {
        sum += arr[i];
    }

    printf("Q50:\n");
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n\n", (float)sum / 5);

    // Q51: Find largest and smallest element.
    largest = smallest = arr[0];

    for (i = 1; i < 5; i++) {
        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Q51:\n");
    printf("Largest Element = %d\n", largest);
    printf("Smallest Element = %d\n\n", smallest);

    // Q52: Count even and odd elements.
    for (i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Q52:\n");
    printf("Even Elements = %d\n", evenCount);
    printf("Odd Elements = %d\n", oddCount);

    return 0;
}
