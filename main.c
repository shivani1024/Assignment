//2. A straight line in two dimension can be represented with y=mx +c , where y and x are the y
//and x coordinates of the point on line in two dimension space respectively. m is slope of the line and
//c is intercept made by the line with y axis. Write a program that:
//a) Reads from end user using suitable messages :
//i. Slope m
//ii. Intercept c
//iii. Values of x
//b) Reads from end user using suitable messages: a random point ( xp , yp )
//c) Print with suitable message if ( xp, yp ) is on the line y=mx +c

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,x,y,c,x1,y1;                                //declare the variables
    printf("Enter the slope m:\n");
    scanf("%d",&m);                                  //reading the slope
    printf("Enter c:\n");
    scanf("%d",&c);                                 //read c
    printf("Enter the value of x\n");
    scanf("%d",&x);                                 //read x
    y= m*x +c;
    printf("Enter the random point (x1,y1)\n");     //read the random point
    scanf("%d,%d",&x1,&y1);
    if((y1-m*x1==c))                                //check if the point is on the line
    {
        printf("The point is on the line y=%d(x) + %d",m,c);
    }
    else
    {
        printf("Point is not on the line");         //if not, then print this msg
    }
}


//Sample Output
/*Enter the slope m:
4
Enter c:
5
Enter the value of x
4
Enter the random point (x1,y1)
1,9
The point is on the line y=4(x) + 5*/
