#include <stdio.h>

/*
**********************************
*** Bryant Boatright           ***
*** Practice File              ***
*** Different function testing ***
**********************************
*/

int main()
{
/*

//// Print equation ///////////////////////////////////////////////////////////
int num1 = 10;
int num2 = 20;
int sum = num1 + num2;

printf("%d + %d = %d\n", num1, num2, sum); 
////////////////////////////////////////////////////////////////////////////////

///// Calculator  //////////////////////////////////////////////////////////////
int number3, number4, sum1;

printf("Enter two numbers: ");
scanf("%d %d", &number3, &number4);

sum1 = number1 + number2;

printf("%d + %d = %d \n", number3, number4, sum1);
/////////////////////////////////////////////////////////////////////////////////

/////  IF ELSE  /////////////////////////////////////////////////////////////////
int a;
int b = 3;
printf("I'm thinking of a number. Can you guess what it is?\n");
printf("Choose a number: ");
scanf("%d", &a);


if(a == b) {
printf("That's correct! \n");
}
else
{
printf("Wrong! Good luck next time. \n");
}
/////////////////////////////////////////////////////////////////////////////////


////////////////////// ELSE IF //////////////////////////////////////

int x = 1;
int y = 2;
int guess1, guess2;

printf("I'm thinking of a number betweetn 0 and 10...\n");
printf("I'll give you two tries to guess the number! \n");

printf("Go for a guess: ");
scanf("%d", &guess1);
printf("\n");
printf("I'd bet that's wrong, go again: ");
scanf("%d", &guess2);

if(guess1 == x) {

printf("Woah! Great job!\n");

} else if(guess2 == x) {
printf("I guess I'm impressed, you did need two tries though..\n");

} else {
printf("Yeah I didn't think you had it in you.\n");
}

//////////////////////////////////////////////////////////////////////


///////////////  FOR LOOP   ////////////////////////////////////////

for (int i = 0; i <=10; i++){
printf("%u", i);
}



///////////   FOR LOOP HIGH TO LOW    //////////////////////////////

for(int i = 10; i>0; i--){
printf("%u\n", i);

*/

////////////    CALCULATOR    //////////////////////////////////////
int num1, num2, num3, sum;

printf("\n");
printf("\n");

printf("Hello, welcome to the calculator!\n");
printf("I can sum three integers for you.\n");
printf("Please enter the numbers you would like to sum: ");
scanf("%d %d %d", &num1, &num2, &num3);
sum = num1 + num2 + num3;
printf("\n");
printf("\n");
printf("%d + %d + %d = %d \n", num1, num2, num3, sum);
printf("\n");
printf("Thank you for using the calculator!\n");


return 0;
}

