#include <stdio.h>
/* Student=Ronald Hinnen */
int main ()
{
    
/*declare variables*/
int mileage = 22495;
float gallons;
float mpg;
float newMiles = 0;
float milesDiff;
int i = 0;

while (i != 1)
    {
    printf("Enter your mileage at fill up \n");
    scanf("%f", &newMiles); 
    
    printf("Enter the number of gallons it took to fill up your tank \n");
    scanf("%f", &gallons);
         
    milesDiff = newMiles - mileage;
    mpg = milesDiff / gallons;
    printf("mpg for this segment of the trip is %f \n", mpg);    
    
    mileage = newMiles;
    printf("Calculate your miles per gallon for another segment of your trip? \n 0=Yes, 1=No \n");
    scanf("%d", &i);      
    }     


system("pause");
return 0;
}
