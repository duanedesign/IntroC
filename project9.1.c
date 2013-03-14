/* Student=Ronald Hinnen */

/*CSCI_2473_201_22561_201320*/
/*C Language Spring 2013 TR 11:00 am*/
#include <stdlib.h>

double straw(int, double);
void explanation();

//main function
int main()
{
    //declare variables
    int numStudents;
    double pdsPicked, studRecieves;

    //call explanation function
    explanation();

    //get input from user
    printf("How many Students will be picking strawberries\n");
    scanf("%d", &numStudents);

    printf("How many punds of strawberries were picked\n");
    scanf("%lf", &pdsPicked);

    studRecieves = straw(numStudents, pdsPicked);
    
    //output total for user
    printf("Each student receives %f strawberries\n", studRecieves);

    system("pause");
    return 0;


}

//calculates how many strawberries each student gets
double straw(int numStudents, double pdsPicked)
{
    //declare variables
    double ozPicked;
    double strawEach;

    //50% goes to farmer
    pdsPicked = pdsPicked / 2;
    
    //convert pounds to ounces
    ozPicked = pdsPicked * 16;

    //determine how many strawberries each student gets
    strawEach = ozPicked / numStudents;

    return strawEach;


}

//explain program to user
void explanation()
{
    printf("this program calculates how many strawberries each student gets\n\n");

}
