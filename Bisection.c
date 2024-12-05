#include<stdio.h>
#include<math.h>

#define accuracy 0.0001

float f(float x)
{
    return x*x*x - 2*x - 5;
}
int main()
{
    printf("Equation: x3-2x-5\n");
    int flag = 0;
    float x,x1,x2;
    int itr = 0;
    do{
        printf("Enter x1 and x2 values: ");
        scanf("%f%f",&x1,&x2);
        if(f(x1)*f(x2) < 0)
            flag = 1;
        else
            printf("Wrong interval\n");
    }while(flag==0);

    flag = 0;
    while(flag == 0)
    {
        itr++;
        x = (x1+x2)/2;
        printf("Iteration: %d, x: %f, f(x): %f\n",itr,x,f(x));
        if(fabs(f(x)) <= accuracy)
        {
            printf("Root found at x: %f and iterations: %d", x,itr);
            flag = 1;
        }
        if(f(x)*f(x1)<0)
            x2 = x;
        else
            x1 = x;
    }
    return 0;
}
