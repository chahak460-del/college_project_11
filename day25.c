#include <stdio.h>
#include <string.h>

int main()
{
    int choice;

    printf("\n========== DAY 25 ==========\n");
    printf("1. Merge Two Sorted Arrays\n");
    printf("2. Find Common Characters in Strings\n");
    printf("3. Sort Names Alphabetically\n");
    printf("4. Sort Words by Length\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        // Q97 - Merge Two Sorted Arrays
        case 1:
        {
            int n1, n2, i, j, k;
            int a[100], b[100], c[200];

            printf("Enter size of first array: ");
            scanf("%d", &n1);

            printf("Enter %d sorted elements:\n", n1);
            for(i = 0; i < n1; i++)
                scanf("%d", &a[i]);

            printf("Enter size of second array: ");
            scanf("%d", &n2);

            printf("Enter %d sorted elements:\n", n2);
            for(i = 0; i < n2; i++)
                scanf("%d", &b[i]);

            i = j = k = 0;

            while(i < n1 && j < n2)
            {
                if(a[i] < b[j])
                    c[k++] = a[i++];
                else
                    c[k++] = b[j++];
            }

            while(i < n1)
                c[k++] = a[i++];

            while(j < n2)
                c[k++] = b[j++];

            printf("Merged Array:\n");

            for(i = 0; i < k; i++)
                printf("%d ", c[i]);

            break;
        }

        // Q98 - Find Common Characters
        case 2:
        {
            char str1[100], str2[100];
            int i, j;

            getchar();

            printf("Enter First String: ");
            fgets(str1, sizeof(str1), stdin);

            printf("Enter Second String: ");
            fgets(str2, sizeof(str2), stdin);

            str1[strcspn(str1, "\n")] = '\0';
            str2[strcspn(str2, "\n")] = '\0';

            printf("Common Characters: ");

            for(i = 0; str1[i] != '\0'; i++)
            {
                for(j = 0; str2[j] != '\0'; j++)
                {
                    if(str1[i] == str2[j])
                    {
                        printf("%c ", str1[i]);
                        break;
                    }
                }
            }

            break;
        }

        // Q99 - Sort Names Alphabetically
        case 3:
        {
            char names[20][50], temp[50];
            int n, i, j;

            getchar();

            printf("Enter number of names: ");
            scanf("%d", &n);
            getchar();

            for(i = 0; i < n; i++)
            {
                printf("Enter Name %d: ", i + 1);
                fgets(names[i], sizeof(names[i]), stdin);
                names[i][strcspn(names[i], "\n")] = '\0';
            }

            for(i = 0; i < n - 1; i++)
            {
                for(j = i + 1; j < n; j++)
                {
                    if(strcmp(names[i], names[j]) > 0)
                    {
                        strcpy(temp, names[i]);
                        strcpy(names[i], names[j]);
                        strcpy(names[j], temp);
                    }
                }
            }

            printf("\nNames in Alphabetical Order:\n");

            for(i = 0; i < n; i++)
                printf("%s\n", names[i]);

            break;
        }

        // Q100 - Sort Words by Length
        case 4:
        {
            char words[20][50], temp[50];
            int n, i, j;

            getchar();

            printf("Enter number of words: ");
            scanf("%d", &n);
            getchar();

            for(i = 0; i < n; i++)
            {
                printf("Enter Word %d: ", i + 1);
                fgets(words[i], sizeof(words[i]), stdin);
                words[i][strcspn(words[i], "\n")] = '\0';
            }

            for(i = 0; i < n - 1; i++)
            {
                for(j = i + 1; j < n; j++)
                {
                    if(strlen(words[i]) > strlen(words[j]))
                    {
                        strcpy(temp, words[i]);
                        strcpy(words[i], words[j]);
                        strcpy(words[j], temp);
                    }
                }
            }

            printf("\nWords Sorted by Length:\n");

            for(i = 0; i < n; i++)
                printf("%s\n", words[i]);

            break;
        }

        default:
            printf("Invalid Choice!");
    }

    return 0;
}
