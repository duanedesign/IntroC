#include <stdio.h>
/* Student=Ronald Hinnen */
int main ()
{
    
/*declare variables*/
float angle;

/* Get input from user*/
printf("What is the angle of the line? Please input a number between 0-359\n");
scanf("%f", &angle);

/* determine quadrant from user input */
     if (angle  <0 || angle >=360)
         printf ("angle must be between 0-359. Please try again.\n");
     else if (angle  >= 0 && angle <= 90)
         printf ("The quandrant is I\n");
     else if (angle  >= 90 && angle <=180)
         printf ("The quandrant is II\n");
     else if (angle  >= 180 && angle <=270)
         printf ("The quandrant is III\n");
     else if (angle >= 270 && angle <=359)
         printf ("The quandrant is IV\n");               

system("pause");
return 0;
}
