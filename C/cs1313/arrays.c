#include <stdio.h>
#include <stdlib.h>

int main()
{ /* main */ 

    const float initial_sum                = 0.0;
    const int   minimum_number_of_elements = 1;
    const int   first_element              = 0;
    const int program_success_code         = 0;
    const int program_failure_code         = -1;
    float* list1_input_value = (float*)NULL;
    float* list2_input_value = (float*)NULL;
    float list1_input_value_sum, list1_input_value_mean;
    float list2_input_value_sum, list2_input_value_mean;
    int   number_of_elements;
    int   element;

    printf("I'm going to calculate the mean of\n");
    printf(" a pair of lists of values that you input.\n");
    printf("These lists will have the same lenght.\n");
    
    printf("How many values would you like to\n");
    printf(" calculate the mean of in each list?\n");
    
    scanf("%d",
        &number_of_elements);
   /*
    * Idiotproof for minimum number of inputs
    */
    if (number_of_elements < minimum_number_of_elements) {
        printf("ERROR: Can't calculate the mean of %d values.\n",
            number_of_elements);
        exit(program_failure_code);
    } /* if (number_of_elements < minimum_number_of_elements) */
      
    list1_input_value = 
        (float*)malloc(sizeof(float) * number_of_elements);
    
    if (list1_input_value == (float*)NULL) {
        printf("ERROR: Can't allocate the 1st float array\n");
        printf( " of length %d.\n",
            number_of_elements);
    } /* if (list1_input_value == (float*)NULL) */

    list2_input_value =
        (float*)malloc(sizeof(float) * number_of_elements);
    if (list2_input_value == (float*)NULL) {
        printf("ERROR: n't allocate the 2nd float array\n");
        printf(" of length %d.\n",
            number_of_elements);
        exit(program_failure_code);
    } /* if (list2_input_value == (float*)NULL) */

    printf("What are the pair of lists of %d values each\n",
        number_of_elements);
    
	printf(" to calculate the mean of?\n");
	for (element = first_element;
         element < number_of_elements; element++) {
		scanf("%f %f",
			&list1_input_value[element],
			&list2_input_value[element]);
	} /* for element */

	list1_input_value_sum = initial_sum;
	for (element = first_element;
		 element < number_of_elements; element++) {
		list1_input_value_sum = 
			list1_input_value_sum + list1_input_value[element];
	} /* element */
	list1_input_value_mean =
		list1_input_value_sum / number_of_elements;

	list2_input_value_sum = initial_sum;
	for (element = first_element;
		 element < number_of_elements; element++) {
		list2_input_value_sum = 
			list2_input_value_sum + list2_input_value[element];
	} /* for element */

	list2_input_value_mean = 
		list2_input_value_sum / number_of_elements;

	printf("The %d pairs of input values are:\n",
		number_of_elements);
	for (element = first_element;
		 element < number_of_elements; element++) {
		printf("%f %f\n",
			list1_input_value[element],
			list2_input_value[element]);
	} /* for element */

	printf("The mean of the 1st list of %d input values is %f.\n",
		number_of_elements, list1_input_value_mean);
	printf("The mean of the 2nd list of %d input values is %f.\n",
		number_of_elements, list2_input_value_mean);

	free(list2_input_value);
list2_input_value = (float*)NULL;
free(list1_input_value);
list1_input_value = (float*)NULL;
return program_success_code;
} /* main */


