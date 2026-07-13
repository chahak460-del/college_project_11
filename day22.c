#include <stdio.h>

int main()
{
    int choice, i, j, length = 0, count = 1, freq = 0;
    char str[200], ch, temp;

    printf("\n===== DAY 22 =====\n");
    printf("1. Check Palindrome String\n");
    printf("2. Count Words in a Sentence\n");
    printf("3. Character Frequency\n");
    printf("4. Remove Spaces from String\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar(); // Clear input buffer

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
        i++;
    }

    switch (choice)
    {
        // Q85 - Check Palindrome String
        case 1:
            length = 0;
            while (str[length] != '\0')
                length++;

            j = length - 1;

            for (i = 0; i < length / 2; i++)
            {
                if (str[i] != str[j - i])
                {
                    printf("String is NOT a Palindrome.\n");
                    return 0;
                }
            }

            printf("String is a Palindrome.\n");
            break;

        // Q86 - Count Words
        case 2:
            if (str[0] == '\0')
            {
                count = 0;
            }
            else
            {
                count = 1;
                for (i = 0; str[i] != '\0'; i++)
                {
                    if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
                        count++;
                }
            }

            printf("Total Words = %d\n", count);
            break;

        // Q87 - Character Frequency
        case 3:
            printf("Enter character to find frequency: ");
            scanf("%c", &ch);

            freq = 0;
            for (i = 0; str[i] != '\0'; i++)
            {
                if (str[i] == ch)
                    freq++;
            }

            printf("Frequency of '%c' = %d\n", ch, freq);
            break;

        // Q88 - Remove Spaces
        case 4:
            j = 0;
            while (str[j] != '\0')
            {
                if (str[j] == ' ')
                {
                    for (i = j; str[i] != '\0'; i++)
                    {
                        str[i] = str[i + 1];
                    }
                    j--;
                }
                j++;
            }

            printf("String without spaces: %s\n", str);
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}
