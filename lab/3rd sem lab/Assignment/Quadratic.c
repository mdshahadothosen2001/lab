#include<stdio.h>
#include<math.h>

int main()
{
    float A,B,C,D,X1,X2;

    printf("Enter Values for Quadratic Equation: \n");
    scanf("%f %f %f",&A,&B,&C);

    D=(B*B)-(4*A*C);


    if(D>0)
    {
        X1=(-B+sqrt(D))/(2*A);
        X2=(-B-sqrt(D))/(2*A);
        printf("Solutions \n X1= %.2f \n X2= %.2f  \n",X1,X2);
    }
    else if(D==0)
    {
        X1=-B/(2*A);
        printf("UNIQUE SOLUTION is %.2f",X1);
    }
    else
    {
        printf("NO REAL SOLUTION");
    }



    return 0;
}
