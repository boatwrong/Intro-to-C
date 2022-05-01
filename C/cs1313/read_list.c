
/*
 *****************************************************************
 *** Project #2:     Example                                   ***
 *** Program:        read_list                                 ***
 *** Author:         Bryant Boatright (bryantboatright@ou.edu) ***
 *** Class:          CS1313 010 Computer Programming,          *** 
 ***                 Spring 2021                               ***
 *** Lab:            Sec 011 Fridays 12:30 p.m.                ***
 *** Descriptiion:   An example of writing by hand variables,  ***
 ***                 inputs, and outputs.                      ***
 *****************************************************************
 */
#include <stdio.h>

int main()
{ /* main*/
   /* 
    ***************************
    *** Declaration Section ***
    ***************************
    *
    ***********************
    * Variable Subsection *
    ***********************
    *
    * CS1313_average_height_in_m:     User's guess for avg. height
    *                                 in meters.
    * number_of_silly_people:         User's guess for # of silly
    *                                 people.
    * number_of_nonsilly_people:      User's guess for # of nonsilly
    *                                 people.
    * Henrys_middle_initial:          User's guess for Henry's middle
    *                                 initial.
    *
    */

    float CS1313_average_height_in_m;
    int   number_of_silly_people, number_of_nonsilly_people;
    char  Henrys_middle_initial;

   /*
    *************************
    *** Execution Section ***
    *************************
    *
    *************************
    * Greeting Subsection ***
    *************************
    * 
    * Describe the program.
    */
    printf("I'm going to guess the answers to questions\n");
    printf("  I've already asked!\n");

   /*
    ********************
    * Input Subsection *
    ********************
    * 
    * Prompt the user to guess.
    */

    printf("In CS1313, how many silly people are there, \n");
    printf(" and how many non-silly people are there?\n");
    scanf("%d %d",
        &number_of_silly_people,
        &number_of_nonsilly_people);

    printf("What is the average height in m in CS1313, \n");
    printf(" and what is Henry's middle initial?\n");
    scanf("%f %c",
        &CS1313_average_height_in_m, &Henrys_middle_initial);

   /*
    *********************
    * Output Subsection *
    *********************
    *
    * Relay the guesses back to the user.
    */
    printf("In CS1313, there are %d silly people\n",
        number_of_nonsilly_people);
    printf(" and %d non-silly people.\n",
        number_of_nonsilly_people);
    printf("In CS1313, the average heigh is %f m\n",
        CS1313_average_height_in_m);
    printf("Henry's middle initial is %c\n",
        Henrys_middle_initial);

} /* main */

