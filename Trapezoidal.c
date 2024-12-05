#include<stdio.h>

float f(float x)
{
    return x*x*x;
}
int main()
{
    int n,a,b;
    printf("Enter no. of intervals: ");
    scanf("%d",&n);
    printf("Enter a and b: ");
    scanf("%d %d",&a, &b);
    float x[n+1];
    float y[n+1];
    float h = (b-a)/(float)n; /**********/

    for(int i=0; i<n+1; i++)
    {
        x[i] = a+(i*h);
        y[i] = f(x[i]);
    }
    float ans = y[0]+y[n];
    for(int i=1; i<n; i++)
        ans += 2*y[i];

    printf("%.2f",(ans*h)/2);
    return 0;
}
