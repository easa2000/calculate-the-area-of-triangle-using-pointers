// calculate area of triangle using pointers
#include<stdio.h>
void read(float *b, float *h);
void calculate_area(float *b, float *h, float *area);
void main()
{
    float base, height, area;
    read(&base,&height);
    calculate_area(&base,&height,&area);
    printf("\n Area of the triangle with base %.1f and height %.1f = %.2f",base,height,area);
}
void read(float *b, float *h)
{
    printf("\n Enter the base of the triangle: ");
    scanf("%f",b);
    printf("\n Enter the height of the triangle: ");
    scanf("%f",h);
}
void calculate_area(float *b, float *h, float *area)
{
    *area = 0.5 * (*b) * (*h);
}
