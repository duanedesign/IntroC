/* Student=Ronald Hinnen */

/*CSCI_2473_201_22561_201320*/
/*C Language Spring 2013 TR 11:00 am*/

#include <stdio.h>

#define MAXGUESS 6
//declare prototype
int evalGuess(int);
int ranNum();
void explanation();

//main function
int main()
{
    int value;
    explanation();
    value = ranNum();
    //printf("random number %d \n", value);
     
    eval_guess(value);    
    
    system("pause");
    return 0;
}    

//evaluates users guess and responds accordingly
int eval_guess(int value)
{
    //declare variables
    int guess = 0;
    int number_guess = 0;
    
    while(guess != value && number_guess <= MAXGUESS)
    {
        printf("guess number \n");
        scanf("%d", &guess);
        
        
            if (guess < value && number_guess != MAXGUESS)
            {
                printf("Wrong number try again. \n");
                printf("Guess %d is too low \n", number_guess +1);
            }    
            else if(guess > value && number_guess != MAXGUESS)
            {
                printf("Wrong number try again. \n");
                printf("Guess %d is too high \n", number_guess +1);      
            }
        number_guess++;        
    }
    
    if(guess == value)
        printf("Hooray, you have won! \n");
    else if(number_guess > MAXGUESS)
        printf("Sorry, you lose. The number was %d\n", value);     
}    

//generates random number
int ranNum()
{
    //declare variables
    int i,v = 0;
    
    srand(time(NULL));
    v = 1 + (int) (rand() % (100 - 1 + 1));    
    
    return v;
}   

//explain program to user
void explanation()
{
    printf("Guess a number between 1-100\n\n");

} 
