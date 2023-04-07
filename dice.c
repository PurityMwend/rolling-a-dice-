/*
    * A DICE ROLLING GAME
    * The program starts by generating a random dice number and stores it after ensuring it isn't greater than 6.
    * It then proceeeds to ask the user to enter a number  and finds if they both have doubles.
    *  This goes on until doubles are found then it exits out.
    * Future implemetations include:
        1. Adding a multiplayer interface
        2. Adding a user interface.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));

    int userDice, randomDice=0;  //initialization

    randomDice = (rand() % 6 + 1); //storange of random number
    printf("\nI have rolled my dice. Now roll your dice.\n");
    do
    {
        printf("\nEnter Your Number : "); 
        scanf("%d", &userDice);   //Input from user 
        printf("Sum of Our Numbers is : %d", userDice + randomDice); //printing sum of numbers 
        if (userDice!=randomDice)   //if numbers are unequal
        {
            printf("\nWe didnt get Doubles. Try Again!\n");
        }

    } while (userDice != randomDice);

    printf("\nYAY! We got Doubles\n");//when we get doubles
       
    return 0;
}
