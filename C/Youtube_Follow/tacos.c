#include<stdio.h>
int main()
{
    // Operator precedence

    int x, y;

    x = y = 5;

    // first y = 5 then x = 7

    int z;
    z = 3;
    y = -2;
    x = -y + z;

    // y = -2
    // x = (-y) + z;
    printf("%i\n", x);

}
