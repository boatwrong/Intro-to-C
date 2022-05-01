#include <stdio.h>
#include <stdbool.h>
int main()
{ /* main */
   /*
    ***************************
    *** Declaration Section ***
    ***************************
    *
    *****************************
    * Named Constant Subsection *
    *****************************
    *
    * hourly_pay:        Hourly pay rate.
    * overtime_pay:      Hourly pay during overtime hours.
    * alien_commission:  Bonus earned for each alien saved.
    * neon_bonus:        Bonus earned for each neon alien, on top
    *                    of alien commission bonus.
    * max_regular_hours: Maximum hours that can be worked before
    *                    overtime pay applies.
    * min_regular_hours: Must work more than zero hours to be paid.
    */

    const float hourly_pay        = 8.25;
    const float overtime_pay      = 12.375;
    const float alien_commission  = 5.25;
    const float neon_bonus        = 4.5;
    const int   max_regular_hours = 40;
    const int   min_regular_hours = 0;
    
   /*
    ***********************
    * Variable Subsection *
    ***********************
    *
    * hours_worked:       number of hours worked this week.
    * overtime_worked:    number of overtime hours worked this week.
    * aliens_saved:       number of aliens saved this week.
    * neon_saved:         number of aliens saved that were neon.
    *                     (neon count still included in
    *                     total alien count)
    * week_hourly_wage:   Total pay from regular hourly work.
    * week_overtime_wage: Total pay from overtime work.
    * week_alien_wage:    Total pay from saving aliens.
    * week_neon_wage:     Total pay from saving neon aliens.
    * total_pay:          Total pay for week.
    */
   
    float hours_worked, overtime_worked, week_hourly_wage;
    float week_overtime_wage, week_alien_wage, week_neon_wage;
    float total_pay;
    int   aliens_saved, neon_saved;
    
   /*
    **************************
    *** Exectution Section ***
    **************************
    *
    ***********************
    * Greeting Subsection *
    ***********************
    *
    * Introduce the program to the user and inform them
    * of the information that will be requested.
    */

    printf("Hello and welcome to the alien conservation pay portal.\n");
    printf("This program will calculate your wages for the week\n");
    printf(" with just a few pieces of information from you. \n");
    printf("\n");
    printf("\n");
    printf(" - Regular Hours Worked\n");
    printf(" - Overtime Hours Worked (if applicable)\n");
    printf(" - Aliens Saved\n");
    printf(" - Neon Aliens Saved\n");
    printf("\n");
   /*
    ********************
    * Input Subsection *
    ********************
    *
    * Program prompts user to input data for hours, overtime hours,
    * aliens saved, and number of neon aliens saved
    *
    *
    * While loop checks that regular hours worked in the week
    * is greater than zero and less than or equal to forty.
    */

    while(true)
    {
    printf("Please enter the number of regular hours you worked\n");
    printf(" this week within the range of %d to %d.\n",
        min_regular_hours, max_regular_hours);
    printf(" - Note\n");
    printf(" - If you worked more than %d hours, \n",
        max_regular_hours);
    printf("   then overtime will be counted next.\n");
    scanf("%f",
        &hours_worked);
    if(hours_worked > max_regular_hours || hours_worked <= min_regular_hours)
        {
        printf ("That is outside the regular hours range.\n");
        continue;
        }
    else
        {
        printf("Thank you\n");
        break;
        }
    }
    if(hours_worked < max_regular_hours)
        {
        printf("Sorry, you did not work enough hours to earn overtime.\n");
        }
    else
        {
        printf("Please enter the number of overtime hours that you\n");
        printf(" worked this week:\n");
        scanf("%f",
        &overtime_worked);
        printf("Thank you\n");
        }
    
       
   /*
    * Program now prompts user to input data on aliens saved
    * and how many of those saved were neon aliens.
    */

    printf("Please enter the total number of aliens you saved\n");
    printf(" this week:\n");
    scanf("%d",
        &aliens_saved);
    printf("Thank you\n");
    
   /*
    * If the number input for neon aliens is greater than the
    * number of aliens saved, then the while loop will bring the
    * user back to the input for neon aliens.
    */
    
    while(true)
    {
    printf("Of the %d aliens saved this week, please enter how many\n",
        aliens_saved);
    printf(" of those aliens were neon aliens:\n");
    scanf("%d",
        &neon_saved);
    if(neon_saved > aliens_saved){
        printf("That is not possible. Please try again.\n");
        continue;
        }
    else{
        printf("Thank you\n");
        break;
            }
    }
    

   /*
    ****************************
    * Calculation Subsection *
    ****************************
    */

    week_hourly_wage =   hourly_pay * hours_worked;
    week_overtime_wage = overtime_pay * overtime_worked;
    week_alien_wage =    alien_commission * aliens_saved;
    week_neon_wage =     neon_bonus * neon_saved;
    total_pay =          week_hourly_wage + week_overtime_wage + week_alien_wage
                         + week_neon_wage;


   /*
    *********************
    * Output Subsection *
    *********************
    *
    * Regular hours worked.
    */

    printf("Total regular hours worked: %f\n",
           hours_worked);
    
   /*
    * Overtime hours worked.
    */
    
    printf("Total overtime hours worked: %f\n",
           overtime_worked);
    
   /*
    * Number of aliens saved.
    */
    
    printf("Total aliens saved: %d\n",
           aliens_saved);
    
   /*
    * Number of neon aliens saved.
    */
    
    printf("Neon aliens saved: %d\n",
           neon_saved);

   /*
    * Pay scale
    */
    printf("Pay Scale:\n");
    printf("    Hourly rate: $%f \n",
           hourly_pay);
    printf("    Commission per saved alien: $%f\n",
           alien_commission);
    printf("    Bonus per neon alien saved: $%f\n",
           neon_bonus);

   /*
    * Total pay for the week.
    */
    
    printf("Week's total pay: $%f\n",
           total_pay);
    return 0;
} /* main */
