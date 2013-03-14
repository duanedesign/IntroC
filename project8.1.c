#include<stdio.h>
/* Student=Ronald Hinnen */

/*CSCI_2473_201_22561_201320*/
/*C Language Spring 2013 TR 11:00 am*/

//let program know about functions
void explanation();
void selecTable(int,int,int);
     
int main()
{
    //declare variables
    int startValue;
    int valuesDisplayed;
    int valuesIncrement;
    
    explanation(); //call explanation function

    //accept values from user
    printf("Starting value?\n");
    scanf("%d",&startValue);
    
    printf("Number of values to be displayed?\n");
    scanf("%d",&valuesDisplayed);
 
    printf("Number of values to increment?\n");
    scanf("%d",&valuesIncrement);   
    
    //call selecTable function
    selecTable(startValue,valuesDisplayed,valuesIncrement); 
    
    system("pause");
    return 0;
}
    //selecTable function
    void selecTable(int startValue, int valuesDisplayed, int valuesIncrement)
     {
     
     int i,x2,x3;
     int valdisplayed = 0;
     printf("Number    Square    Cube\n"); //chart header
     printf("--------------------------\n");
          //print chart
         for(i = startValue;valdisplayed < valuesDisplayed;i += valuesIncrement)
         {
                x2 = i * i;
                x3 = i * i * i;
                printf("%6d%10d%8d\n",i,x2,x3);
                valdisplayed++;
                 

         }
}
//explanation function
void explanation()
{
     printf("This program produces a chart of squares and cubes\n");
     printf(" based on the values you enter you enter\n\n");
}
     


