/*
 ******************************************************************
 *** Project: #5: Big Statistics                                ***
 *** Program:     big_stat                                      ***
 *** Author:      Bryant Boatright (bryantboatright@ou.edu)     ***
 *** Class:       CS 1313-010 Computer Programming, Spring 2021 ***
 *** Lab:         Sec 011 Fridays 12:30pm                       ***
 *** Description: Takes input from external lists of two arrays ***
 ***              of unknown length and calculates:             ***
 ***              arithmetic mean, geometric mean, harmonic     ***
 ***              mean and root mean square for both lists.     ***
 ******************************************************************
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{ /* main */
   /*
    ****************************
    *** Declarations Section ***
    ****************************
    *
    *****************************
    * Named Constant Subsection *
    *****************************
    *
    * reciprocal_numerator: Used to divide by a float to avoid int by
    *                       float division.
    * initial_sum:          Set initial sum to 0 to remove garbage value
    * initial_product:      Set initial value to 1 to remove garbage value
    * squared:              Used to square array values
    * harmonic_power:       Power to raise array values to in order to
    *                       find harmonic mean.
    * minimum_elements:     Minimum number of elements in array (1)
    * program_success_code: Exit code for when program has successfully run
    * program_failure_code: Exit code for when idiotproofing fails
    * first_element:        Used to set first element of array used in for
    *                       loops, zero in this case.
    */

    const float reciprocal_numerator = 1.0;
    const float initial_sum          = 0.0;
    const float initial_product      = 1.0;
    const float squared              = 2.0;
    const float harmonic_power       = -1.0;
    const int   minimum_elements     = 1;
    const int   program_success_code = 0;
    const int   program_failure_code = -1;
    const int   first_element        = 0;
   /*
    ***********************
    * Variable Subsection *
    ***********************
    *
    * list_one:             Array for first list of values.
    * list_two:             Array for first list of values.
    * arithmetic_one_sum:   Sum of values in list one.
    * arithmetic_two_sum:   Sum of values in list two.
    * arithmetic_one_mean:  Sum of values in list one divided by
    *                       number of elements.
    * arithmetic_one_mean:  Sum of values in list one divided by
    *                       number of elements.
    * geo_one_power:        Element from list one raised to power of
    *                       one divided by number of elements. 
    * geo_two_power:        Element from list two raised to power of
    *                       one divided by number of elements. 
    * geo_one_mean:         The geo_one_power value for each element
    *                       multiplied together. 
    * geo_two_mean:         The geo_two_power value for each element
    *                       multiplied together.
    * rms_one_sum:          Sum of rms_one_element for all elements of
    *                       list one.
    * rms_one_element:      Element from list one taken to power of two. 
    * rms_two_sum:          Sum of rms_two_element for all elements of
    *                       list two.
    * rms_two_element:      Element from list two taken to power of two. 
    * rms_one_final:        Square root of rms_one_sum. 
    * rms_two_final:        Square root of rms_two_sum. 
    * harmonic_one_element: Inverse value of individual elements in
    *                       list one.
    * harmonic_two_element: Inverse value of individual elements in
    *                       list two.
    * harmonic_one_sum:     Sum of harmonic elements in list one.
    * harmonic_two_sum:     Sum of harmonic elements in list two.
    * harmonic_one_final:   Sum of harmonic elements divided by number
    *                       of elements for list one.
    * harmonic_two_final:   Sum of harmonic elements divided by number
    *                       of elements for list two.
    * elements_in_float:    Number of elements in float data type to
    *                       avoid issues of truncating in division.
    * geo_power:            power to raise elements to for calculating
    *                       geometric mean (1/number_of_elements).
    * number_of_elements:   Number of elements in both arrays.
    * element:              Element from array
    */

    float* list_one = (float*)NULL;
    float* list_two = (float*)NULL;
    float  arithmetic_one_sum, arithmetic_two_sum;
    float  arithmetic_one_mean, arithmetic_two_mean;
    float  geo_one_power, geo_two_power;
    float  geo_one_mean, geo_two_mean;
    float  rms_one_sum, rms_one_element;
    float  rms_two_sum, rms_two_element;
    float  rms_one_final, rms_two_final;
    float  harmonic_one_element, harmonic_two_element;
    float  harmonic_one_sum, harmonic_two_sum;
    float  harmonic_one_final, harmonic_two_final;
    float  elements_in_float;
    float  geo_power;
    int    number_of_elements;
    int    element;

   /*
    *************************
    *** Execution Section ***
    *************************
    *
    ********************
    * Input Subsection *
    ********************
    *
    * Input length of list
    */
    scanf("%d",
        &number_of_elements);

   /*
    * idiotproof the list length. Check if it is greater than zero.
    */
    if (number_of_elements < minimum_elements) {
       /*
        * Present error message for list shorter than one element.
        */
        printf("ERROR: Cannot calculate the mean of %d values.\n",
            number_of_elements);
        exit(program_failure_code);
    } /* if (number_of_elements < minimum_elements) */

   /*
    * Allocate memory for list one at runtime.
    */
    list_one =
        (float*)malloc(sizeof(float) * number_of_elements);

   /*
    * Check if list one pointer is null
    */

    if (list_one == (float*)NULL) {
       /*
        * Present error message if list_one's memory has not been allocated
        */
        printf("ERROR: Cannot allocate the first float array\n");
        printf(" of length %d\n",
            number_of_elements);
        exit(program_failure_code);
    } /* if (list_one == (float*)NULL) */

   /*
    * Allocate memory for list two at runtime.
    */
    list_two =
        (float*)malloc(sizeof(float) * number_of_elements);

   /*
    * Check if list two pointer is null.
    */
    if (list_two == (float*)NULL) {
       /*
        * Present error message if list_two's memory has not been allocated
        */
        printf("ERROR: Cannot allocate the second float array\n");
        printf(" of length %d\n",
            number_of_elements);
        exit(program_failure_code);
    } /* if (list_two == (float*)NULL) */

   /*
    * Take values from two lists and input them into respective arrays.
    */
    for (element = first_element;
         element < number_of_elements; element++) {
       /*
        * Input value from both lists into respective arrays
        * going row by row. 
        */
        scanf("%f %f",
            &list_one[element], &list_two[element]);
    } /* for element */ 

   /*
    **************************
    * Calculation Subsection *
    **************************
    *
    * assign number of elements value to elements_in_float
    * to avoid truncating issues in division.
    */
    elements_in_float = number_of_elements;

   /*
    * assign arithmetic_one_sum a zero value so that calculations do 
    * not start with a garbage value.
    */
    arithmetic_one_sum = initial_sum;

   /*
    * Calculate the sum of the first list of values.
    */
    for (element = first_element;
         element < number_of_elements; element++) {
       /*
        * Increase the sum of the first list by value of current
        * element.
        */
        arithmetic_one_sum += list_one[element];
    } /* for element */

   /*
    * Divide sum of first list by number of elements in list.
    */
    arithmetic_one_mean = arithmetic_one_sum / elements_in_float;

   /*
    * assign arithmetic_two_sum a zero value so that calculations do 
    * not start with a garbage value.
    */
    arithmetic_two_sum = initial_sum;

   /*
    * Calculate the sum of the second list of values.
    */
    for (element = first_element;
         element < number_of_elements; element++) {
       /*
        * Increase the sum of the second list by value of current
        * element.
        */
        arithmetic_two_sum += list_two[element];
    } /* for element */

   /*
    * Divide sum of second list by number of elements in list.
    */
    arithmetic_two_mean = arithmetic_two_sum / elements_in_float;

   /*
    * Assign value of one to geo_one_mean to remove garbage value.
    */
    geo_one_mean = initial_product;

   /*
    * geo_power is power elements from lists will be raised to
    * to calculate geometric mean.
    */
    geo_power = reciprocal_numerator/elements_in_float;

   /*
    * Calculate geometric mean of list one.
    */
    for (element = first_element;
         element < number_of_elements; element++) {
       /*
        * raise element to power of one divided by number of elements
        * then multiply each successive element by the product of the
        * previous elements from the first list.
        */
        geo_one_power = pow(list_one[element], geo_power);
        geo_one_mean *= geo_one_power;
    }  /* for element */


   /*
    * Calculate geometric mean of list two.
    */
    geo_two_mean = initial_product;
    for (element = first_element;
         element < number_of_elements; element++) {
       /*
        * raise element to power of one divided by number of elements
        * then multiply each successive element by the product of the
        * previous elements from the second list.
        */
        geo_two_power = pow(list_two[element], geo_power);
        geo_two_mean *= geo_two_power;
    } /* for element */

   /*
    * Assign value of zero to rms_one_sum to remove possible
    * garbage value.
    */
    rms_one_sum = initial_sum;

   /*
    * Add the squared value of each element from list one.
    */
    for (element = first_element;
         element < number_of_elements; element++) {
       /*
        * Square each element and add it to the sum of the 
        * previous elements.
        */
        rms_one_element = pow(list_one[element], squared); 
        rms_one_sum += rms_one_element; 
        } /* for element */

   /*
    * Take square root of sum of squared elements divided by the number
    * of elements.
    */
    rms_one_final = sqrt(rms_one_sum / elements_in_float);

   /*
    * Assign value of zero to rms_two_sum to remove possible
    * garbage value.
    */
    rms_two_sum = initial_sum;

   /*
    * Add the squared value of each element from list two.
    */
    for (element = first_element;
         element < number_of_elements; element++) {
       /*
        * Square each element and add it to the sum of the 
        * previous elements.
        */
        rms_two_element = pow(list_two[element], squared);
        rms_two_sum += rms_two_element; 
    } /* for element */

   /*
    * Take square root of sum of squared elements divided by the number
    * of elements.
    */
    rms_two_final = sqrt(rms_two_sum / elements_in_float);

   /*
    * Assign value of zero to harmonic_one_sum to remove possible
    * garbage value.
    */
    harmonic_one_sum = initial_sum;

   /*
    * Sum the inverse of each element in list one.
    */
    for (element = first_element;
         element < number_of_elements; element++) {
       /*
        * Raise each element to the power of negative one and add it to
        * the sum of all the elements from list one.
        */
        harmonic_one_element = pow(list_one[element], harmonic_power);
        harmonic_one_sum += harmonic_one_element; 
    } /* for element */

   /*
    * Divide the number of elements in list one by the sum of the inverse
    * of the elements.
    */
    harmonic_one_final = elements_in_float / harmonic_one_sum;

   /*
    * Assign value of zero to harmonic_two_sum to remove possible
    * garbage value.
    */
    harmonic_two_sum = initial_sum;

   /*
    * Sum the inverse of each element in list two.
    */
    for (element = first_element;
         element < number_of_elements; element++) {
       /*
        * Raise each element to the power of negative one and add it to
        * the sum of all the elements from list two.
        */
        harmonic_two_element = pow(list_two[element], harmonic_power);
        harmonic_two_sum += harmonic_two_element; 
    } /* for element */

   /*
    * Divide the number of elements in list two by the sum of the inverse
    * of the elements.
    */
    harmonic_two_final = elements_in_float / harmonic_two_sum;

   /*
    *********************
    * Output Subsection *
    *********************
    * Print length of list
    */

    printf("Lists are %d numbers long\n",
        number_of_elements);
    printf("\n"); 

    printf("LIST ONE:\n");

   /*
    * Print every value in list one.
    */ 
    for (element = first_element;
         element < number_of_elements; element++) { 
       /*
        * For each element print its value.
        */
        printf("%10.4f\n",
            list_one[element]);
    } /* for element */ 

    printf("\n");
    printf("LIST TWO:\n");

   /*
    * Print every value in list two.
    */
    for (element = first_element;
         element < number_of_elements; element++) { 
       /*
        * For each element print its value.
        */
        printf("%10.4f\n",
            list_two[element]);
    } /* for element */ 

   /*
    * print arithmetic mean, geometric mean, root mean square,
    * and harmonic mean for list one.
    */
    printf("Arithmetic mean of list 1: %10.4f\n",
        arithmetic_one_mean);
    printf("Geometric mean of list 1:  %10.4f\n",
        geo_one_mean);
    printf("root mean square list 1:   %10.4f\n",
        rms_one_final);
    printf("harmonic mean of list 1:   %10.4f\n",
        harmonic_one_final);
    printf("\n");

   /*
    * print arithmetic mean, geometric mean, root mean square,
    * and harmonic mean for list two.
    */
    printf("Arithmetic mean of list2:  %10.4f\n",
        arithmetic_two_mean);
    printf("Geometric mean of list 2:  %10.4f\n",
        geo_two_mean);
    printf("root mean square list 2:   %10.4f\n",
        rms_two_final);
    printf("harmonic mean of list 2:   %10.4f\n",
        harmonic_two_final);

   /*
    * Deallocate memory for list one and list two.
    */
    free(list_two);
    list_two = (float*)NULL;
    free(list_one);
    list_one = (float*)NULL;

   /*
    * Tell operating system that program has successfully run.
    */
    return program_success_code;

} /* main */
