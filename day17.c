/*
Q65. Merge Arrays
Q66. Union of Arrays
Q67. Intersection of Arrays
Q68. Find Common Elements

Language: C
*/

#include <stdio.h>

int main()
{
    int n1, n2, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    /* Q65 - Merge Arrays */
    printf("\nQ65. Merged Array:\n");
    int merged[n1 + n2];

    for(i = 0; i < n1; i++)
        merged[i] = arr1[i];

    for(i = 0; i < n2; i++)
        merged[n1 + i] = arr2[i];

    for(i = 0; i < n1 + n2; i++)
        printf("%d ", merged[i]);

    printf("\n");

    /* Q66 - Union of Arrays */
    printf("\nQ66. Union of Arrays:\n");

    int unionArr[n1 + n2];
    int k = 0;

    for(i = 0; i < n1; i++)
        unionArr[k++] = arr1[i];

    for(i = 0; i < n2; i++)
    {
        int found = 0;

        for(j = 0; j < k; j++)
        {
            if(arr2[i] == unionArr[j])
            {
                found = 1;
                break;
            }
        }

        if(!found)
            unionArr[k++] = arr2[i];
    }

    for(i = 0; i < k; i++)
        printf("%d ", unionArr[i]);

    printf("\n");

    /* Q67 - Intersection of Arrays */
    printf("\nQ67. Intersection of Arrays:\n");

    int foundIntersection = 0;

    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                foundIntersection = 1;
                break;
            }
        }
    }

    if(!foundIntersection)
        printf("No common elements");

    printf("\n");

    /* Q68 - Find Common Elements */
    printf("\nQ68. Common Elements:\n");

    int foundCommon = 0;

    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                foundCommon = 1;
                break;
            }
        }
    }

    if(!foundCommon)
        printf("No common elements");

    printf("\n");

    return 0;
}
