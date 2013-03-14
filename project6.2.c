#include <stdio.h>
/* Student=Ronald Hinnen */

void explanation();

int main ()
    {
    /*declare variables*/
    int month = 0;    
    int day = 0;
    
    explanation();
        
    /*get month from user*/    
    while (month < 1 || month > 12)
    {  
        printf("Please enter a month between 1 and 12\n");
        scanf("%d", &month);
    }
    
    /* switch to catch months and ask for days*/
    switch(month)
    {
      /* case to catch months with 31 days*/
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:                         
           while (day < 1 || day > 31)
           {
             printf("Please enter a day\n");
             scanf("%d", &day);
           }
           break;
      /* case to catch months with 30 days*/  
      case 4:
      case 6:
      case 9:
      case 11:                     
           while (day < 1 || day > 30)
           {
             printf("Please enter a day\n");
             scanf("%d", &day);
           }
           break;
      /* case to catch months with 28 days*/      
      default:
           while (day < 1 || day > 28)
           {
             printf("Please enter a day\n");
             scanf("%d", &day);
           }
           break;               
    }
        
    
    /*print accepted date*/ 
    printf("date entered was %d / %d \n\n", month, day);          
        
    system("pause");
    return 0;
    }

/*explain to user what program is doing*/ 
void explanation()
    {
     printf("This program accepts a date from user.\n");
     printf("Then verifies the input and prints valid date.\n\n");
    }
