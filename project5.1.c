#include <stdio.h>
/* Student=Ronald Hinnen */
int main ()
{
    
/*declare variables*/
float hours;
float distance;
float mph = 55;

for (hours=4; hours > 0; hours=hours - .5)
    {
    distance = mph / 2;
    printf("mph equals %f \n", distance);
    }


system("pause");
return 0;
}
