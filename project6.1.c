#include <stdio.h>
/* Student=Ronald Hinnen */

void explanation();

int main ()
{
/*declare variables*/
    float gallons;
    float liters;
    int i;
    
    explanation();


    for( i=0; i < 10; i++)
        {
        /*accept user input(gallons) convert to liters*/      
        printf("Please enter the gallons to convert to liters\n");
        scanf("%f", &gallons);
        
        liters = gallons * 3.785;
        /*print output to screen*/
        printf("%8.3f liters in %8.3f gallons \n", liters , gallons);
        
        }
        system("pause");
        return 0;
        }

/*explain to user what program is doing*/ 
void explanation()
    {
    printf("This program converts gllons entered to liters\n\n");        
    }
