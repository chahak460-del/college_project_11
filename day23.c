#include <stdio.h>

int main()
{
    int choice, i, j, len = 0, found;
    char str1[100], str2[100], maxChar;
    int freq[256] = {0}, max;

    printf("\n========== DAY 23 ==========\n");
    printf("1. Find First Non-Repeating Character\n");
    printf("2. Find First Repeating Character\n");
    printf("3. Check Anagram Strings\n");
    printf("4. Find Maximum Occurring Character\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar();

    switch (choice)
    {
    // Q89 - First Non-Repeating Character
    case 1:

        printf("Enter a string: ");
        fgets(str1, sizeof(str1), stdin);

        i = 0;
        while (str1[i] != '\0')
        {
            if (str1[i] == '\n')
            {
                str1[i] = '\0';
                break;
            }
            i++;
        }

        for (i = 0; str1[i] != '\0'; i++)
            freq[(unsigned char)str1[i]]++;

        found = 0;
        for (i = 0; str1[i] != '\0'; i++)
        {
            if (freq[(unsigned char)str1[i]] == 1)
            {
                printf("First Non-Repeating Character = %c\n", str1[i]);
                found = 1;
                break;
            }
        }

        if (!found)
            printf("No Non-Repeating Character Found.\n");

        break;

    // Q90 - First Repeating Character
    case 2:

        printf("Enter a string: ");
        fgets(str1, sizeof(str1), stdin);

        i = 0;
        while (str1[i] != '\0')
        {
            if (str1[i] == '\n')
            {
                str1[i] = '\0';
                break;
            }
            i++;
        }

        for (i = 0; i < 256; i++)
            freq[i] = 0;

        found = 0;

        for (i = 0; str1[i] != '\0'; i++)
        {
            if (freq[(unsigned char)str1[i]] == 1)
            {
                printf("First Repeating Character = %c\n", str1[i]);
                found = 1;
                break;
            }
            freq[(unsigned char)str1[i]]++;
        }

        if (!found)
            printf("No Repeating Character Found.\n");

        break;

    // Q91 - Check Anagram Strings
    case 3:

        printf("Enter First String: ");
        fgets(str1, sizeof(str1), stdin);

        printf("Enter Second String: ");
        fgets(str2, sizeof(str2), stdin);

        for (i = 0; str1[i] != '\0'; i++)
            if (str1[i] == '\n')
                str1[i] = '\0';

        for (i = 0; str2[i] != '\0'; i++)
            if (str2[i] == '\n')
                str2[i] = '\0';

        for (i = 0; i < 256; i++)
            freq[i] = 0;

        for (i = 0; str1[i] != '\0'; i++)
            freq[(unsigned char)str1[i]]++;

        for (i = 0; str2[i] != '\0'; i++)
            freq[(unsigned char)str2[i]]--;

        found = 1;

        for (i = 0; i < 256; i++)
        {
            if (freq[i] != 0)
            {
                found = 0;
                break;
            }
        }

        if (found)
            printf("Strings are Anagrams.\n");
        else
            printf("Strings are NOT Anagrams.\n");

        break;

    // Q92 - Maximum Occurring Character
    case 4:

        printf("Enter a string: ");
        fgets(str1, sizeof(str1), stdin);

        i = 0;
        while (str1[i] != '\0')
        {
            if (str1[i] == '\n')
            {
                str1[i] = '\0';
                break;
            }
            i++;
        }

        for (i = 0; i < 256; i++)
            freq[i] = 0;

        for (i = 0; str1[i] != '\0'; i++)
            freq[(unsigned char)str1[i]]++;

        max = 0;
        maxChar = '\0';

        for (i = 0; i < 256; i++)
        {
            if (freq[i] > max)
            {
                max = freq[i];
                maxChar = (char)i;
            }
        }

        printf("Maximum Occurring Character = %c\n", maxChar);
        printf("Frequency = %d\n", max);

        break;

    default:
        printf("Invalid Choice!\n");
    }

    return 0;
}
