#include <stdio.h>
float f(float x,float y){
    return x*x+x*y*y;
}
int main()
{
    float x0,y0,h,x,y,k1,k2,k3,k4,n;
    int i;
    printf("Enter the value of x0 and y0: ");
    scanf("%f %f",&x0,&y0);
    printf("\nEnter value of h and x: ");
    scanf("%f %f",&h,&x);
    n=((x-x0)/h);
    x=x0;
    y=y0;
    for(i=0;i<n;i++)
    {
        k1=h*f(x,y);
        k2=h*f(x+h/2.0,y+k1/2.0);
        k3=h*f(x+h/2,y+k2/2);
        k4=h*f(x+h,y+k3);
        y=y+1/6.0*(k1+k4+2*(k2+k3));
        x=x+h;
    }
    printf("\n Required value of y: %f",y);
    return 0;
}