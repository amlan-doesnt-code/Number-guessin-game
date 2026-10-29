//a random number guessing game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{   int guess;
    int num;
    int input;
    int flag=0;
    printf("\t\t welcome to the number guessing game \t\t\n\n");

    srand(time(NULL));//setting up the genarator 
    num=rand()%100+1;
    for( guess=3;guess>0;guess--)
    {
        if(guess!=1)
        {
            printf("you have %d guesses\n",guess);
            printf("enter the guess within 1 to 100: ");
            scanf("%d",&input);

            if(input>num)
            {
                printf("Too high! try again!!!\n");
            }
            else if(input<num)
            {
                printf("too low! try again!!!\n");
            }
            else
            {
                printf("you guessed the correct number , SHER HO APP!!");
                flag=1;
                break;
            }
        }
        else 
        {
            printf("this is the final guess\n");
            printf("enter the guess within 1 to 100: ");
            scanf("%d",&input);
            if(num==input)
           {
             printf("you guessed the correct number,SHER HO APP!!\n");
             flag=1;
           }
           else 
           {
            printf("beta tumse na ho payega!!\n\n the correct num was %d\n",num);
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