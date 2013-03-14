#include <stdio.h>
/* Student=Ronald Hinnen */
int main ()
{
    /*declare variables */
    int l;
    int w;
    int d;
    int volume;

    /*get and print user input */
    printf("Please enter the length pool length: ");
    scanf("%d", &l);
    printf("Please enter the width pool width: ");
    scanf("%d", &w);
    printf("Please enter pool average depth: ");
    scanf("%d", &d);
    
    /* calculate users input and print */
    volume = l * w * d;
    printf ("pool volume is: = %d\n",volume);
    
    /*Compare users input to  correct answer calculated manually*/
    if (volume != 10000)
    {
        printf( "This is not the correct pool volume. Please try calculating again. ");
    }
    else if(volume == 10000)
    {
        printf( "This is the the correct volume for the values you entered.");
    }
     
    system("pause");
    return 0;
}
