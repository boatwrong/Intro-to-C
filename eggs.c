#include <stdio.h>

int main()
{
    double money;
    printf("The number of eggs for the day: ");
    
    int eggs;
    scanf("%i", &eggs);
    
    printf("Cost of eggs: \n");
    double cost;
    
    scanf("%lf", &cost);

    double dozen = (double)eggs / 12;
    printf("Number of dozens today %.2f\n", dozen);
    money = cost * dozen;
 
    printf("You could make $%.2f dollars today!\n", money);

    return 0;

}


