#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c;
    
    printf("Please input the two sides of a triangle\n");

    scanf("%f %f", &a, &b);

    c = sqrt(a*a + b*b);

    printf("The hypotenuse is length: %f\n", c);
}
