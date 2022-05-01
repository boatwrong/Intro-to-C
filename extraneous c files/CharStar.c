#include<stdio.h>

int main()
{
    char *c = "Hello, World!";

    printf("%s\n", c);
   
    int i=0;
    while(c[i] != '\0') {
        printf("%c", c[i]);
        i++;
    }
    printf("\n");
}

