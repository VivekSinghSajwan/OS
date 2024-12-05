#include<stdio.h>
#include<math.h>

#define accuracy 0.0001

float f(float x)
{
    return cosf(x)-(3*x)+1;
}
float g(float x)
{
    return (cosf(x)+1)/3;
}
float derivative(float x) {
    return sinf(x)/3;
}
int main()
{
    printf("Equation: cosx -3x +1\n");
    int flag = 0;
    float x;
    int itr = 0;
    do{
        printf("Enter x: ");
        scanf("%f",&x);
        if(fabs(derivative(x)) < 1)
            flag = 1;
        else
            printf("Wrong value\n");
    }while(flag==0);

    flag = 0;
    while(flag == 0)
    {
        x = g(x);
        itr++;
        printf("Iteration: %d, x: %f, f(x): %f\n", itr, x, f(x));
        if(fabs(f(x)) <= accuracy)
        {
            printf("Root found at x: %f and iterations: %d", x,itr);
            flag = 1;
        }

    }
    return 0;
}
