#include<stdio.h>
int main()
{
    // + - / *
    int x;
    x = 4 + 3 * 4 / 3 - 2;

    /*
operator precedence:
    * /
    + -

    x = (4 + ((3 * 4) / 3)) - 2
    */
    printf("%i\n", x);

    return 0;
}
