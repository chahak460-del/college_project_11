#include <stdio.h>

int main()
{
    int choice, i, j, k, len1 = 0, len2 = 0;
    char str1[100], str2[100], temp[200];
    char longest[100];

    printf("\n========== DAY 24 ==========\n");
    printf("1. Check String Rotation\n");
    printf("2. Compress a String\n");
    printf("3. Find Longest Word\n");
    printf("4. Remove Duplicate Characters\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar();

    switch(choice)
    {
        // Q93 - Check String Rotation
        case 1:

            printf("Enter First String: ");
            fgets(str1, sizeof(str1), stdin);

            printf("Enter Second String: ");
            fgets(str2, sizeof(str2), stdin);

            // Remove newline
            for(i = 0; str1[i] != '\0'; i++)
                if(str1[i] == '\n') str1[i] = '\0';

            for(i = 0; str2[i] != '\0'; i++)
                if(str2[i] == '\n') str2[i] = '\0';

            while(str1[len1] != '\0') len1++;
            while(str2[len2] != '\0') len2++;

            if(len1 != len2)
            {
                printf("Strings are NOT rotations.\n");
                break;
            }

            // Concatenate str1 with itself
            for(i = 0; i < len1; i++)
                temp[i] = str1[i];

            for(i = 0; i < len1; i++)
                temp[len1 + i] = str1[i];

            temp[2 * len1] = '\0';

            int found = 0;

            for(i = 0; temp[i] != '\0'; i++)
            {
                for(j = 0; str2[j] != '\0'; j++)
                {
                    if(temp[i + j] != str2[j])
                        break;
                }

                if(str2[j] == '\0')
                {
                    found = 1;
                    break;
                }
            }

            if(found)
                printf("Strings are Rotations.\n");
            else
                printf("Strings are NOT Rotations.\n");

            break;

        // Q94 - Compress String
        case 2:

            printf("Enter a String: ");
            fgets(str1, sizeof(str1), stdin);

            for(i = 0; str1[i] != '\0'; i++)
                if(str1[i] == '\n') str1[i] = '\0';

            i = 0;

            while(str1[i] != '\0')
            {
                int count = 1;

                while(str1[i] == str1[i + 1])
                {
                    count++;
                    i++;
                }

                printf("%c%d", str1[i], count);
                i++;
            }

            printf("\n");

            break;

        // Q95 - Find Longest Word
        case 3:

            printf("Enter a Sentence: ");
            fgets(str1, sizeof(str1), stdin);

            int max = 0, current = 0, start = 0, maxStart = 0;

            for(i = 0;; i++)
            {
                if(str1[i] != ' ' && str1[i] != '\0' && str1[i] != '\n')
                {
                    if(current == 0)
                        start = i;

                    current++;
                }
                else
                {
                    if(current > max)
                    {
                        max = current;
                        maxStart = start;
                    }

                    current = 0;

                    if(str1[i] == '\0')
                        break;
                }
            }

            for(i = 0; i < max; i++)
                longest[i] = str1[maxStart + i];

            longest[max] = '\0';

            printf("Longest Word = %s\n", longest);
            printf("Length = %d\n", max);

            break;

        // Q96 - Remove Duplicate Characters
        case 4:

            printf("Enter a String: ");
            fgets(str1, sizeof(str1), stdin);

            for(i = 0; str1[i] != '\0'; i++)
                if(str1[i] == '\n') str1[i] = '\0';

            for(i = 0; str1[i] != '\0'; i++)
            {
                for(j = i + 1; str1[j] != '\0';)
                {
                    if(str1[i] == str1[j])
                    {
                        for(k = j; str1[k] != '\0'; k++)
                            str1[k] = str1[k + 1];
                    }
                    else
                    {
                        j++;
                    }
                }
            }

            printf("String after removing duplicates: %s\n", str1);

            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}
