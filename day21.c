#include <stdio.h>

int main()
{
    int choice, i, length, vowels, consonants;
    char str[100], temp;

    printf("========== DAY 21 ==========\n");
    printf("1. Find String Length\n");
    printf("2. Reverse a String\n");
    printf("3. Count Vowels and Consonants\n");
    printf("4. Convert Lowercase to Uppercase\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    getchar(); // Clear newline from input buffer

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    length = 0;
    while (str[length] != '\0')
    {
        if (str[length] == '\n')
        {
            str[length] = '\0';
            break;
        }
        length++;
    }

    switch (choice)
    {
    case 1:
        // Find String Length
        length = 0;
        while (str[length] != '\0')
        {
            length++;
        }
        printf("Length of string = %d\n", length);
        break;

    case 2:
        // Reverse String
        length = 0;
        while (str[length] != '\0')
        {
            length++;
        }

        for (i = 0; i < length / 2; i++)
        {
            temp = str[i];
            str[i] = str[length - i - 1];
            str[length - i - 1] = temp;
        }

        printf("Reversed String = %s\n", str);
        break;

    case 3:
        // Count Vowels and Consonants
        vowels = 0;
        consonants = 0;
        i = 0;

        while (str[i] != '\0')
        {
            if ((str[i] >= 'A' && str[i] <= 'Z') ||
                (str[i] >= 'a' && str[i] <= 'z'))
            {
                if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
                    str[i] == 'O' || str[i] == 'U' ||
                    str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                    str[i] == 'o' || str[i] == 'u')
                {
                    vowels++;
                }
                else
                {
                    consonants++;
                }
            }
            i++;
        }

        printf("Vowels = %d\n", vowels);
        printf("Consonants = %d\n", consonants);
        break;

    case 4:
        // Convert Lowercase to Uppercase
        i = 0;
        while (str[i] != '\0')
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
            i++;
        }

        printf("Uppercase String = %s\n", str);
        break;

    default:
        printf("Invalid Choice!\n");
    }

    return 0;
}
