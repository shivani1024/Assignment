//Problem statement: Find the eigen values and eigen vectors of the given 2*2 matrix

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

    int i,j,n;
    float A[40][40],x[40],z[40],e[40],zmax,emax;            //declare variables
    printf("\nEnter the order of matrix:");                 //Enter 2
    scanf("%d",&n);
    printf("\nEnter matrix elements row-wise\n");           //Enters the matrix elements
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("A[%d][%d]=", i,j);
            scanf("%f",&A[i][j]);                          //scans the entered elements
        }
    }
    printf("\nEnter the column vector\n");
    for(i=1; i<=n; i++)
    {
        printf("X[%d]=",i);
        scanf("%f",&x[i]);                                //reads the column vector
    }
    do
    {
        for(i=1; i<=n; i++)
        {
            z[i]=0;
            for(j=1; j<=n; j++)
            {
                z[i]=z[i]+A[i][j]*x[j];                  // sums the product of the matrix elements with row vector
            }
        }
        zmax=fabs(z[1]);
        for(i=2; i<=n; i++)                             //fabs takes the absolute value of float type
        {
            if((fabs(z[i]))>zmax)                       //compare zmax and z[i],the greater value is  assigned as zmax
                zmax=fabs(z[i]);
        }
        for(i=1; i<=n; i++)
        {
            z[i]=z[i]/zmax;                             //divide z[i] by zmax
        }
        for(i=1; i<=n; i++)
        {
            e[i]=0;
            e[i]=fabs((fabs(z[i]))-(fabs(x[i])));       //e[i] is the difference between z[i] and x[i]
        }
        emax=e[1];
        for(i=2; i<=n; i++)
        {
            if(e[i]>emax)
                emax=e[i];                              // if e[i]>emax], e[max] = e[i];
        }
        for(i=1; i<=n; i++)
        {
            x[i]=z[i];
        }
    }
    while(emax>0.001);
    printf("\n The required eigen value is %f",zmax);       //eigen value is printed
    printf("\n\nThe required eigen vector is :\n");         //eigen vector is printed
    for(i=1; i<=n; i++)
    {
        printf("%f\t",z[i]);
    }
    getch();
}
