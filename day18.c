/*
Q69. Bubble Sort
Q70. Selection Sort
Q71. Binary Search
Q72. Sort Array in Descending Order

Language: C
*/

#include <stdio.h>

int main()
{
    int n, i, j, temp, key;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], original[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        original[i] = arr[i];
    }

    /* Q69 - Bubble Sort */
    int bubble[n];
    for(i = 0; i < n; i++)
        bubble[i] = original[i];

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(bubble[j] > bubble[j + 1])
            {
                temp = bubble[j];
                bubble[j] = bubble[j + 1];
                bubble[j + 1] = temp;
            }
        }
    }

    printf("\nQ69. Bubble Sort (Ascending):\n");
    for(i = 0; i < n; i++)
        printf("%d ", bubble[i]);

    printf("\n");

    /* Q70 - Selection Sort */
    int selection[n];
    for(i = 0; i < n; i++)
        selection[i] = original[i];

    for(i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for(j = i + 1; j < n; j++)
        {
            if(selection[j] < selection[minIndex])
                minIndex = j;
        }

        temp = selection[i];
        selection[i] = selection[minIndex];
        selection[minIndex] = temp;
    }

    printf("\nQ70. Selection Sort (Ascending):\n");
    for(i = 0; i < n; i++)
        printf("%d ", selection[i]);

    printf("\n");

    /* Q71 - Binary Search */
    printf("\nEnter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid;
    int found = 0;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(bubble[mid] == key)
        {
            printf("Q71. Element found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if(bubble[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(!found)
        printf("Q71. Element not found\n");

    /* Q72 - Descending Order Sort */
    int desc[n];
    for(i = 0; i < n; i++)
        desc[i] = original[i];

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(desc[i] < desc[j])
            {
                temp = desc[i];
                desc[i] = desc[j];
                desc[j] = temp;
            }
        }
    }

    printf("\nQ72. Array in Descending Order:\n");
    for(i = 0; i < n; i++)
        printf("%d ", desc[i]);

    printf("\n");

    return 0;
}
