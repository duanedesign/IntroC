#include <stdio.h>
/* Student=Ronald Hinnen */

/*CSCI_2473_201_22561_201320*/
/*C Language Spring 2013 TR 11:00 am*/

//let program know about functions
void explanation();
float calc_distance(int,int,int,int);



int main ()
{  
    //declare variables
    int x1,y1,x2,y2;
    float dist;
    
    //get user input
    printf("coordinate for point x1?\n");
    scanf("%d",&x1);
    printf("coordinate for point y1?\n");
    scanf("%d",&y1);
    printf("coordinate for point x2?\n");
    scanf("%df",&x2);
    printf("coordinate for point y2?\n");
    scanf("%d",&y2);
    
    
    dist = calc_distance(x1,y1,x2,y2);
    
    printf("%6.2f",dist);  
    
    system("pause");
    return 0;  

}

//calc_distance function
float calc_distance(int cx1,int cy1,int cx2,int cy2)
{
  float d;  
      
  d = sqrt(pow(cx2-cx1,2) + (pow(cy2-cy1,2)));

  return d;  
}    

//explanation program to user
void explanation()
    {
    printf("Accepts rectangle coordinates of two points.\n");
    printf("Calculates and returns the distance between the two points\n");
         
    }
