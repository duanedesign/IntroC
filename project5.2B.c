#include <stdio.h>
/* Student=Ronald Hinnen */
int main ()
{
    
/*declare variables*/
float totalGallons = 0;
int startMileage = 22495;
int mileage = 22495;
float gallons;
float totalMpg = 0;
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
    
    totalGallons = totalGallons + gallons;  
    totalMpg = (newMiles - startMileage) / totalGallons;
    
    printf("mpg for this segment of the trip is %f \n", mpg);
    printf("total gallons %f \n", totalGallons);
    printf("total mpg for entire trip %f \n", totalMpg);    
    
    mileage = newMiles;
    printf("Calculate your miles per gallon for another segment of your trip? \n 0=Yes, 1=No \n");
    scanf("%d", &i);      
    }     


system("pause");
return 0;
}
