#include<stdio.h>
int main()
{
    float r,area;
    float pi=3.14;
    printf("Enter the radius\n");
    scanf("%f",&r);
    area=pi*r*r;
    printf("Area of circle is %f\n",area);
    return 0;
}