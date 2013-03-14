#include <stdio.h>
/* Student=Ronald Hinnen */
int main ()
{
/*declare variables */

int s;
int a;
int b;
int c;
int d;

/*Get user input */
printf("enter the length of 1st side of triangle\n");
scanf( "%d", &a);

printf("enter the length of 2nd side of triangle\n");
scanf( "%d", &b);

printf("enter the length of 3rd side of triangle\n");
scanf( "%d", &c);
 
/*Calculate answer and determine if number is positive */    
s = (a + b + c)*2;

if (s > 0)
  printf ("The answer is %d\n", s);
else
  printf ("%d, The three sides entered do not represent a triangle\n", s);

    
    
system("pause");
return 0;
}
