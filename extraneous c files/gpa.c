#include <stdio.h>

int main()

{

/*
**************************
*** Bryant Boatright   ***
*** GPA Calc           ***
*** 2/6/2021           ***
**************************
*/

/* 
*************************
*** Number of classes ***
*************************
*/
int NUMclass;

printf("\n");
printf("\n");
printf("Welcome to the GPA Calc!!!\n");
printf("\n");
printf("\n");
printf("Please enter the number of classes you took: ");
scanf("%d", &NUMclass);
printf("\n");

/*************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
*************************************************************************************************************************************/

if (NUMclass == 1)
{

int class1;
int a = 90;
int b = 80;
int c = 70;
char class1grade;
printf("\n");
printf("\n");
printf("\n");
printf("Let's check out what your GPA was this semester.\n");
printf("\n");
printf("\n");

printf("Enter the percent grade you earned in your first class: ");
scanf("%d", &class1);

if (class1>=a)
{

printf("That's one A\n");
class1grade = 'A';
}

else if(class1>=b)
{

printf("There's one B\n");
class1grade = 'B';
}

else if(class1>=c)
{

printf("Well that is one C\n");
class1grade = 'C';
}

else if(class1<c)
{
printf("Oof I wish we could skip that onee\n");
class1grade = 'F';
}

double c1gpa;

printf("\n");
printf("\n");
printf("Okay, the grade you earned was: %c \n", class1grade);
printf("\n");
printf("\n");



   /*
   ***************
   *** Class 1 ***
   ***************
   */


if (class1grade == 'A')
{
c1gpa = 4.0;
}

else if(class1grade == 'B')
{
c1gpa = 3.0;
}

else if(class1grade == 'C')
{
c1gpa = 2.0;
}

else if(class1grade == 'F')
{
c1gpa = 0.0;
}

/*
*******************************************
*** Average number value for one classe ***
*******************************************
*/

double gpa_sum;

gpa_sum = c1gpa;

double gpafinal;

gpafinal = gpa_sum;
printf("\n");
printf("\n");
printf("Your gpa is: %f\n", gpafinal);
printf("\n");
printf("\n");



}


/*************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
*************************************************************************************************************************************/

else if (NUMclass == 2)
{

int class1, class2;
int a = 90;
int b = 80;
int c = 70;
char class1grade;
char class2grade;

printf("\n");
printf("\n");
printf("\n");
printf("Let's check out what your GPA was this semester.\n");
printf("\n");
printf("\n");

printf("Enter the percent grade you earned in your first class: ");
scanf("%d", &class1);

if (class1>=a)
{

printf("That's one A\n");
class1grade = 'A';
}

else if(class1>=b)
{

printf("There's one B\n");
class1grade = 'B';
}

else if(class1>=c)
{

printf("Well that is one C\n");
class1grade = 'C';
}

else if(class1<c)
{
printf("Oof I wish we could skip that onee\n");
class1grade = 'F';
}

printf("Enter the percent grade you earned in your second class: ");
scanf("%d", &class2);

if (class2>=a)
{

printf("That's one A\n");
class2grade = 'A';
}

else if(class2>=b)
{

printf("There's one B\n");
class2grade = 'B';
}

else if(class2>=c)
{

printf("Well that is one C\n");
class2grade = 'C';
}

else if(class2<c)
{
printf(" # RIP to the GPAe\n");
class2grade = 'F';
}

double c1gpa, c2gpa;

printf("\n");
printf("\n");
printf("Okay, the grades you earned are: %c %c \n", class1grade, class2grade);
printf("\n");
printf("\n");


   /*
   ***************
   *** Class 1 ***
   ***************
   */


if (class1grade == 'A')
{
c1gpa = 4.0;
}

else if(class1grade == 'B')
{
c1gpa = 3.0;
}

else if(class1grade == 'C')
{
c1gpa = 2.0;
}

else if(class1grade == 'F')
{
c1gpa = 1.0;
}

   /*
   ***************
   *** Class 2 ***
   ***************
   */


if (class2grade == 'A')
{
c2gpa = 4.0;
}

else if(class2grade == 'B')
{
c2gpa = 3.0;
}

else if(class2grade == 'C')
{
c2gpa = 2.0;
}

else if(class2grade == 'F')
{
c2gpa = 1.0;
}

/*
********************************************
*** Average number value for two classes ***
********************************************
*/

double gpa_sum;

gpa_sum = c1gpa + c2gpa;

double gpafinal;

gpafinal = gpa_sum/2;
printf("\n");
printf("\n");
printf("Your gpa is: %f\n", gpafinal);
printf("\n");
printf("\n");



}

/*************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
*************************************************************************************************************************************/

else if (NUMclass == 3)
{

int class1, class2, class3;
int a = 90;
int b = 80;
int c = 70;
char class1grade;
char class2grade;
char class3grade;

printf("\n");
printf("\n");
printf("\n");
printf("Let's check out what your GPA was this semester.\n");
printf("\n");
printf("\n");

printf("Enter the percent grade you earned in your first class: ");
scanf("%d", &class1);

if (class1>=a)
{

printf("That's one A\n");
class1grade = 'A';
}

else if(class1>=b)
{

printf("There's one B\n");
class1grade = 'B';
}

else if(class1>=c)
{

printf("Well that is one C\n");
class1grade = 'C';
}

else if(class1<c)
{
printf("Oof I wish we could skip that onee\n");
class1grade = 'F';
}

printf("Enter the percent grade you earned in your second class: ");
scanf("%d", &class2);

if (class2>=a)
{

printf("That's one A\n");
class2grade = 'A';
}

else if(class2>=b)
{

printf("There's one B\n");
class2grade = 'B';
}

else if(class2>=c)
{

printf("Well that is one C\n");
class2grade = 'C';
}

else if(class2<c)
{
printf(" # RIP to the GPA\n");
class2grade = 'F';
}

printf("Enter the percent grade you earned in your third class: ");
scanf("%d", &class3);

if (class3>=a)
{

printf("That's one A\n");
class3grade = 'A';
}

else if(class3>=b)
{

printf("There's one B\n");
class3grade = 'B';
}

else if(class3>=c)
{

printf("Well that is one C\n");
class3grade = 'C';
}

else if(class3<c)
{
printf("School is for loser's anyway\n");
class3grade = 'F';
}

double c1gpa, c2gpa, c3gpa;

printf("\n");
printf("\n");
printf("Okay, the grades you earned are: %c %c %c \n", class1grade, class2grade, class3grade);
printf("\n");
printf("\n");

   /*
   ***************
   *** Class 1 ***
   ***************
   */


if (class1grade == 'A')
{
c1gpa = 4.0;
}

else if(class1grade == 'B')
{
c1gpa = 3.0;
}

else if(class1grade == 'C')
{
c1gpa = 2.0;
}

else if(class1grade == 'F')
{
c1gpa = 1.0;
}

   /*
   ***************
   *** Class 2 ***
   ***************
   */


if (class2grade == 'A')
{
c2gpa = 4.0;
}

else if(class2grade == 'B')
{
c2gpa = 3.0;
}

else if(class2grade == 'C')
{
c2gpa = 2.0;
}

else if(class2grade == 'F')
{
c2gpa = 1.0;
}


   /*
   ***************
   *** Class 3 ***
   ***************
   */


if (class3grade == 'A')
{
c3gpa = 4.0;
}

else if(class3grade == 'B')
{
c3gpa = 3.0;
}

else if(class3grade == 'C')
{
c3gpa = 2.0;
}

else if(class3grade == 'F')
{
c3gpa = 1.0;
}


/*
**********************************************
*** Average number value for three classes ***
**********************************************
*/

double gpa_sum;

gpa_sum = c1gpa + c2gpa + c3gpa;

double gpafinal;

gpafinal = gpa_sum/3;
printf("\n");
printf("\n");
printf("Your gpa is: %f\n", gpafinal);
printf("\n");
printf("\n");


}



/*************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
*************************************************************************************************************************************/


else if (NUMclass == 4)
{

int class1, class2, class3, class4;
int a = 90;
int b = 80;
int c = 70;
char class1grade;
char class2grade;
char class3grade;
char class4grade;

printf("\n");
printf("\n");
printf("\n");
printf("Let's check out what your GPA was this semester.\n");
printf("\n");
printf("\n");

printf("Enter the percent grade you earned in your first class: ");
scanf("%d", &class1);

if (class1>=a)
{

printf("That's one A\n");
class1grade = 'A';
}

else if(class1>=b)
{

printf("There's one B\n");
class1grade = 'B';
}

else if(class1>=c)
{

printf("Well that is one C\n");
class1grade = 'C';
}

else if(class1<c)
{
printf("Oof I wish we could skip that onee\n");
class1grade = 'F';
}


printf("Enter the percent grade you earned in your second class: ");
scanf("%d", &class2);

if (class2>=a)
{

printf("That's one A\n");
class2grade = 'A';
}

else if(class2>=b)
{

printf("There's one B\n");
class2grade = 'B';
}

else if(class2>=c)
{

printf("Well that is one C\n");
class2grade = 'C';
}

else if(class2<c)
{
printf(" # RIP to the GPAe\n");
class2grade = 'F';
}

printf("Enter the percent grade you earned in your third class: ");
scanf("%d", &class3);

if (class3>=a)
{

printf("That's one A\n");
class3grade = 'A';
}

else if(class3>=b)
{

printf("There's one B\n");
class3grade = 'B';
}

else if(class3>=c)
{

printf("Well that is one C\n");
class3grade = 'C';
}

else if(class3<c)
{
printf("School is for loser's anyway\n");
class3grade = 'F';
}

printf("Enter the percent grade you earned in your fourth class: ");
scanf("%d", &class4);


if (class4>=a)
{

printf("That's one A\n");
class4grade = 'A';
}

else if(class4>=b)
{

printf("There's one B\n");
class4grade = 'B';
}

else if(class4>=c)
{

printf("Well that is one C\n");
class4grade = 'C';
}

else if(class4<c)
{
printf("Lol at going to class...\n");
class4grade = 'F';
}

double c1gpa, c2gpa, c3gpa, c4gpa;

printf("\n");
printf("\n");
printf("Okay, the grades you earned are: %c %c %c %c \n", class1grade, class2grade, class3grade, class4grade);
printf("\n");
printf("\n");

   /*
   ***************
   *** Class 1 ***
   ***************
   */


if (class1grade == 'A')
{
c1gpa = 4.0;
}

else if(class1grade == 'B')
{
c1gpa = 3.0;
}

else if(class1grade == 'C')
{
c1gpa = 2.0;
}

else if(class1grade == 'F')
{
c1gpa = 1.0;
}

   /*
   ***************
   *** Class 2 ***
   ***************
   */


if (class2grade == 'A')
{
c2gpa = 4.0;
}

else if(class2grade == 'B')
{
c2gpa = 3.0;
}

else if(class2grade == 'C')
{
c2gpa = 2.0;
}

else if(class2grade == 'F')
{
c2gpa = 1.0;
}

   /*
   ***************
   *** Class 3 ***
   ***************
   */


if (class3grade == 'A')
{
c3gpa = 4.0;
}

else if(class3grade == 'B')
{
c3gpa = 3.0;
}

else if(class3grade == 'C')
{
c3gpa = 2.0;
}

else if(class3grade == 'F')
{
c3gpa = 1.0;
}

   /*
   ***************
   *** Class 4 ***
   ***************
   */


if (class4grade == 'A')
{
c4gpa = 4.0;
}

else if(class4grade == 'B')
{
c4gpa = 3.0;
}

else if(class4grade == 'C')
{
c4gpa = 2.0;
}

else if(class4grade == 'F')
{
c4gpa = 1.0;
}

/*
*********************************************
*** Average number value for four classes ***
*********************************************
*/

double gpa_sum;

gpa_sum = c1gpa + c2gpa + c3gpa + c4gpa;

double gpafinal;

gpafinal = gpa_sum/4;
printf("\n");
printf("\n");
printf("Your gpa is: %f\n", gpafinal);
printf("\n");
printf("\n");

}


/*************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
*************************************************************************************************************************************/
else if (NUMclass == 5)
{

int class1, class2, class3, class4, class5;
int a = 90;
int b = 80;
int c = 70;
char class1grade;
char class2grade;
char class3grade;
char class4grade;
char class5grade;

printf("\n");
printf("\n");
printf("\n");
printf("Let's check out what your GPA was this semester.\n");
printf("\n");
printf("\n");

printf("Enter the percent grade you earned in your first class: ");
scanf("%d", &class1);

if (class1>=a)
{

printf("That's one A\n");
class1grade = 'A';
}

else if(class1>=b)
{

printf("There's one B\n");
class1grade = 'B';
}

else if(class1>=c)
{

printf("Well that is one C\n");
class1grade = 'C';
}

else if(class1<c)
{
printf("Oof I wish we could skip that onee\n");
class1grade = 'F';
}

printf("Enter the percent grade you earned in your second class: ");
scanf("%d", &class2);

if (class2>=a)
{

printf("That's one A\n");
class2grade = 'A';
}

else if(class2>=b)
{

printf("There's one B\n");
class2grade = 'B';
}

else if(class2>=c)
{

printf("Well that is one C\n");
class2grade = 'C';
}

else if(class2<c)
{
printf(" # RIP to the GPA\n");
class2grade = 'F';
}

printf("Enter the percent grade you earned in your third class: ");
scanf("%d", &class3);

if (class3>=a)
{

printf("That's one A\n");
class3grade = 'A';
}

else if(class3>=b)
{

printf("There's one B\n");
class3grade = 'B';
}

else if(class3>=c)
{

printf("Well that is one C\n");
class3grade = 'C';
}

else if(class3<c)
{
printf("School is for loser's anyway\n");
class3grade = 'F';
}

printf("Enter the percent grade you earned in your fourth class: ");
scanf("%d", &class4);


if (class4>=a)
{

printf("That's one A\n");
class4grade = 'A';
}

else if(class4>=b)
{

printf("There's one B\n");
class4grade = 'B';
}

else if(class4>=c)
{

printf("Well that is one C\n");
class4grade = 'C';
}

else if(class4<c)
{
printf("Lol at going to class...\n");
class4grade = 'F';
}

printf("Enter the percent grade you earned in your fifth class: ");
scanf("%d", &class5);


if (class5>=a)
{

printf("That's one A\n");
class5grade = 'A';
}

else if(class5>=b)
{

printf("There's one B\n");
class5grade = 'B';
}

else if(class5>=c)
{

printf("Well that is one C\n");
class5grade = 'C';
}

else if(class5<c)
{
printf("Lol at going to class...\n");
class5grade = 'F';
}


double c1gpa, c2gpa, c3gpa, c4gpa, c5gpa;

printf("\n");
printf("\n");
printf("Okay, the grades you earned are: %c %c %c %c %c \n", class1grade, class2grade, class3grade, class4grade, class5grade);
printf("\n");
printf("\n");


   /*
   ***************
   *** Class 1 ***
   ***************
   */


if (class1grade == 'A')
{
c1gpa = 4.0;
}

else if(class1grade == 'B')
{
c1gpa = 3.0;
}

else if(class1grade == 'C')
{
c1gpa = 2.0;
}

else if(class1grade == 'F')
{
c1gpa = 1.0;
}

   /*
   ***************
   *** Class 2 ***
   ***************
   */


if (class2grade == 'A')
{
c2gpa = 4.0;
}

else if(class2grade == 'B')
{
c2gpa = 3.0;
}

else if(class2grade == 'C')
{
c2gpa = 2.0;
}

else if(class2grade == 'F')
{
c2gpa = 1.0;
}

   /*
   ***************
   *** Class 3 ***
   ***************
   */


if (class3grade == 'A')
{
c3gpa = 4.0;
}

else if(class3grade == 'B')
{
c3gpa = 3.0;
}

else if(class3grade == 'C')
{
c3gpa = 2.0;
}

else if(class3grade == 'F')
{
c3gpa = 1.0;
}

   /*
   ***************
   *** Class 4 ***
   ***************
   */


if (class4grade == 'A')
{
c4gpa = 4.0;
}

else if(class4grade == 'B')
{
c4gpa = 3.0;
}

else if(class4grade == 'C')
{
c4gpa = 2.0;
}

else if(class4grade == 'F')
{
c4gpa = 1.0;
}

   /*
   ***************
   *** Class 5 ***
   ***************
   */


if (class5grade == 'A')
{
c5gpa = 4.0;
}

else if(class5grade == 'B')
{
c5gpa = 3.0;
}

else if(class5grade == 'C')
{
c5gpa = 2.0;
}

else if(class5grade == 'F')
{
c5gpa = 1.0;
}


/*
*********************************************
*** Average number value for five classes ***
*********************************************
*/

double gpa_sum;

gpa_sum = c1gpa + c2gpa + c3gpa + c4gpa + c5gpa;

double gpafinal;

gpafinal = gpa_sum/5;
printf("\n");
printf("\n");
printf("Your gpa is: %f\n", gpafinal);
printf("\n");
printf("\n");



}

/*************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
**************************************************************************************************************************************
*************************************************************************************************************************************/

return 0;
}
