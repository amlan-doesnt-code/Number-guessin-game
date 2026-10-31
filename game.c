//a random number guessing game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
char ch;
int num1;
int input;
int integer()
{
    while (1)
    {
        num1 = 0;

        while (1)
        {
            ch = getch();

            if (ch == 13)  // Enter key
            {
                printf("\n");
                break;
            }
            else if (ch >= '0' && ch <= '9')
            {
                printf("%c", ch);
                num1 = num1 * 10 + (ch - '0');
            }
            else if (ch == 8)  // Backspace
            {
                num1 /= 10;
                printf("\b \b");
            }
            else
            {
                printf("\nPlease enter an integer!\n");
            }
        }

        if (num1 >= 1 && num1 <= 100)
        {
            return num1;
        }
        else
        {
            printf("Invalid input! Enter a number between 1 and 100: ");
        }
    }
}
int main()

{
    int guess;
    int num;
    int flag=0;
    printf("\t\t welcome to the number guessing game V2 \t\t\n\n");

    srand(time(NULL));//setting up the genarator 
    num=rand()%100+1;
    for( guess=7;guess>0;guess--)
    {
        if(guess!=1)
        {
            printf("you have %d guesses\n",guess);
            printf("enter the guess within 1 to 100: ");
            input=integer();

            if(input>num)
            {
                printf("\nToo high! try again!!!\n");
            }
            else if(input<num)
            {
                printf("\nToo low! try again!!!\n");
            }
            else
            {
                printf("\nyou guessed the correct number ,Congrats!!");
                flag=1;
                break;
            }
        }
        else 
        {
            printf("this is the final guess\n");
            printf("enter the guess within 1 to 100: ");
            input=integer();
            if(num==input)
           {
             printf("\nyou guessed the correct number ,Congrats!!\n");
             flag=1;
           }
           else 
           {
            printf("\nYou failed!!"\n\n the correct num was %d\n",num);
           }
        }
    }

    if (flag==1)
    {
        printf("player won!!!");
    }
    else
    {
        printf("player lost!!!");

    }
    return 0;
}