#include <stdio.h>
/* Student=Ronald Hinnen */

void explanation();

int main ()
{
/*declare variables*/
int bowler, game;
float score;
float total;
float average;
float teamTotal;
float totalAvg;

explanation();

for (bowler=1;bowler<6;bowler++)
{
    total = 0;
    /*get input from user calculate bowler average and store result for*/
    /*calculating team average*/
    for (game=1;game<4;game++)
        {
        printf("Enter the result for bowler %d game # %d\n",bowler,game);
        scanf("%f",&score);
       
        total+=score;
        }
        average = total/3;
        printf("Average for bowler %d is %8.2f\n",bowler,average);
        teamTotal += total;
}   /*calculate and print team average*/
    totalAvg=teamTotal/15;
    printf("The overall average for the team is: %8.2f\n",totalAvg);
    
    
    system("pause");
    return 0;
}         
/*explain program to user*/
void explanation()
{
printf("This program calculates the average of 5 bowlers playing 3 games.\n");
printf("Input the score of each game and the program outputs\n");
printf("the bowlers average for 3 games.\n");
printf("After inputing the score for all 5 bowlers the program outputs the\n");
printf("team average.\n\n");     
}
