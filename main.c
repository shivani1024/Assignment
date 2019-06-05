/*6. A bigger solid cube is to be built using n number of smaller cubes, having unit length. Write a
program that:
a) Read n from user with suitable message
b) Check if n is valid, that is can a bigger solid cube be build using n number unit
length cubes
c) Calculate the surface area of bigger cube, s1
d) One unit length cubic block is now removed from every corner of the cube. Calculate
the surface area of new structure, s2
e) Prints with suitable message, both surface areas s1 and s2
f) Print what conclusion can be drawn with respect to s1 and s2
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    float a,s1,s2;                              //declaring the variables
   printf("Enter the number of cubes of unit size:\n");
   scanf("%d",&n);
   if(n>=0)
   {
   a = cbrt(n);                                   //volume of n smaller cubes will be same as that of larger cube i.e. n*1*1
   s1=6* a* a;                                   //surface area of the cube is 6*side*side
   printf("The surface area s1: %f\n", s1);
   s2 = 6*a*a +(4)*((3-3)*1*1);                   //current surface area is the area when cubes are removed from each corner,3 sides of the cube will contribute to area and 3 are removed
   printf("The surface area s2 is %f\n",s2);
   printf("Hence the surface area remains same when we take out a cube of unit length from each corner\n ");
   }
   else
   {
       printf("Enter valid number");
   }
}

/*Sample output
Enter the number of cubes of unit size:
27
The surface area s1: 54.000000
The surface area s2 is 54.000000
Hence the surface area remains same when we take out a cube of unit length from each corner
*/
