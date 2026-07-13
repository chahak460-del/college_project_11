#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int choice;

    printf("\n========== DAY 26 ==========\n");
    printf("1. Number Guessing Game\n");
    printf("2. Voting Eligibility System\n");
    printf("3. ATM Simulation\n");
    printf("4. Quiz Application\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        // Q101 - Number Guessing Game
        case 1:
        {
            int number, guess, attempts = 0;

            srand(time(0));
            number = rand() % 100 + 1;

            printf("\nGuess a number between 1 and 100\n");

            do
            {
                printf("Enter your guess: ");
                scanf("%d", &guess);

                attempts++;

                if(guess > number)
                    printf("Too High!\n");
                else if(guess < number)
                    printf("Too Low!\n");
                else
                    printf("Correct! You guessed in %d attempts.\n", attempts);

            } while(guess != number);

            break;
        }

        // Q102 - Voting Eligibility System
        case 2:
        {
            int age;

            printf("\nEnter your age: ");
            scanf("%d", &age);

            if(age >= 18)
                printf("You are Eligible to Vote.\n");
            else
                printf("You are NOT Eligible to Vote.\n");

            break;
        }

        // Q103 - ATM Simulation
        case 3:
        {
            int option;
            float balance = 10000, amount;

            printf("\n------ ATM MENU ------\n");
            printf("1. Check Balance\n");
            printf("2. Deposit Money\n");
            printf("3. Withdraw Money\n");
            printf("Enter your option: ");
            scanf("%d", &option);

            switch(option)
            {
                case 1:
                    printf("Current Balance = %.2f\n", balance);
                    break;

                case 2:
                    printf("Enter Deposit Amount: ");
                    scanf("%f", &amount);

                    balance += amount;

                    printf("Updated Balance = %.2f\n", balance);
                    break;

                case 3:
                    printf("Enter Withdrawal Amount: ");
                    scanf("%f", &amount);

                    if(amount <= balance)
                    {
                        balance -= amount;
                        printf("Please collect your cash.\n");
                        printf("Remaining Balance = %.2f\n", balance);
                    }
                    else
                    {
                        printf("Insufficient Balance.\n");
                    }

                    break;

                default:
                    printf("Invalid ATM Option.\n");
            }

            break;
        }

        // Q104 - Quiz Application
        case 4:
        {
            int ans, score = 0;

            printf("\n===== QUIZ =====\n");

            printf("\nQ1. Capital of India?\n");
            printf("1. Delhi\n2. Mumbai\n3. Kolkata\n4. Chennai\n");
            scanf("%d", &ans);
            if(ans == 1)
                score++;

            printf("\nQ2. C language was developed by?\n");
            printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
            scanf("%d", &ans);
            if(ans == 1)
                score++;

            printf("\nQ3. 2 + 8 = ?\n");
            printf("1. 8\n2. 10\n3. 12\n4. 14\n");
            scanf("%d", &ans);
            if(ans == 2)
                score++;

            printf("\nYour Score = %d/3\n", score);

            if(score == 3)
                printf("Excellent!\n");
            else if(score == 2)
                printf("Good Job!\n");
            else
                printf("Keep Practicing!\n");

            break;
        }

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}
