/*
 ****************************************************************************
 *** Project #2: Contact Tracing                                          ***
 *** Program:    contact_tracing                                          ***
 *** Author:     Bryant Boatright (bryantboatright@ou.edu)                ***
 *** Class:      CS 1313 010 Computer Programming, Spring 2021            ***
 *** Description: Asks the user three questions about contact with others ***
 ***    over the past month:                                              ***
 ***      1. Avg. number of people user physically interacts with;        ***
 ***      2. Avg. number of times the user washes hands per day;          ***
 ***      3. Asks for user's 10 digit phone number.                       ***
 ****************************************************************************
 */

#include <stdio.h>

int main()
{ /* main */

   /*
    ***************************
    *** Declaration Section ***
    ***************************
    */

   /*
    *******************
    * Float Variables *
    *******************
    *
    * avg_daily_contact: average number of people that user
    *                    interacts with per day
    * avg_hand_wash:     average number of times that user
    *                    washes hands per day
    */

    float avg_daily_contact, avg_hand_wash;

   /*
    *****************
    * Int Variables *
    *****************
    *
    * area_code: area code for user's phone number
    * prefix:    prefix for user's phone number
    * line_num:  line number for user's phone number
    */

    int   area_code, prefix, line_num;


   /*
    *************************
    *** Execution Section ***
    *************************
    */

   /*
    ***********************
    * Greeting Subsection *
    ***********************
    *
    * Describe what the program will do
    */

    printf("Welcome to the CDC Contact Tracing program.\n");
    printf("\n");
    printf("The program will ask you three questions about your: \n ");
    printf("   - average physical interactions\n");
    printf("   - hand washing habits\n");
    printf("   - phone number\n");

   /*
    * Warn that typing a letter, ex. 'a', instead of an integer, '1',
    * will result in an error
    */

    printf("\n");
    printf("    *** Please note ***\n");
    printf("\n");
    printf("Answer questions with a number, '1', rather than\n");
    printf("a word, 'one'.\n");
    printf("Answering with a word will result in an error.\n"); 
   /*
    ********************
    * Input Subsection *
    ********************
    *
    * Ask the user to input their average daily interactions, 
    * average hand washing habits, and phone nuber
    */

   /*
    * Prompt user to enter average daily interactions
    */

    printf("\n");
    printf("Please enter your average physical interactions per day: \n");
    scanf("%f",
        &avg_daily_contact);

   /*
    * Prompt user to enter average hand washing habits
    */

    printf("Please enter the average number of times you wash your \n");
    printf("hands in one day: \n");
    scanf("%f",
        &avg_hand_wash);


   /*
    * Prompt user to enter phone number in three sub sections
    */
    
    printf("Please enter your phone number, pressing 'space'\n");
    printf("after each section, and exclude the country code. \n");
    scanf("%d %d %d",
        &area_code, &prefix, &line_num);    

   /*
    *********************
    * Output Subsection *
    *********************
    */

   /* 
    * Output user's average daily interactions
    */

    printf("The user's average daily interactions is:\n");
    printf("%f\n",
        avg_daily_contact);    
   /*
    * Output user's average hand washing habits
    */

    printf("The user washes their hands, on average,\n");
    printf("%f times per day\n", 
        avg_hand_wash);

   /*
    * Output uer's phone number, format shoulb be (000-000-0000)
    */

    printf("The user's phone number is (%d-%d-%d)\n",
        area_code, prefix, line_num);


