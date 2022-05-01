
printf("Please enter the corresponding number from the following\n");
printf("options for pizza:\n");
printf("0 - No Drink\n");
printf("1 - Milkshake\n");
printf("2 - Tea\n");
printf("3 - Soda\n");
scanf("%d",
    &drink_choice);
/*
* Idiotproof the drink choice and assign drink price
* to variable drink_cost
*/
if (drink_choice < no_choice || drink_choice > max_choice) {
   /*
    * Output the idiotproof error message for drink choice
    */
    printf("That is not a an option on the menu.\n");
   /*
    * Exit program because drink choice is invalid
    */
    exit(program_failure_code);
} /* if (drink_choice < no_choice || drink_choice > max_choice) */
else if (drink_choice == no_choice) {
   /*
    * Assign price of zero to drink_cost
    */
    drink_cost = no_choice;
} /* if (drink_choice == no_choice) */
else if (drink_choice == choice_one) {
   /*
    * Assign milkshake price to drink_cost
    */
    drink_cost = price_milkshake;
} /* if (drink_choice == choice_one) */
else if (drink_choice == choice_two) {
   /*
    * Assign tea price to drink cost
    */
    drink_cost = price_tea;
} /* if (drink_choice == choice_two) */
else {
   /*
    * Assign soda price to drink cost
    */
    drink_cost = price_soda;
} /* if (drink_choice == choice_two)...else */



/*
 * Print dessert choice with cost
 */

 if (dessert_choice == no_choice) {
    /*
     * If no item is chosen, omit the line on the receipt
     */
     printf("");
 } /* if (dessert_choice == no_choice) */
 else if (dessert_choice == choice_one) {
    /*
     * Print cinnamon sticks and price
     */
     printf("Cinnamon Sticks         $%5.2f\n",
         price_cinnamon_sticks);
 } /* if (dessert_choice == choice_one) */
 else if (dessert_choice == choice_two) {
    /*
     * print lava cake and price
     */
     printf("Lava Cake               $%5.2f\n",
         price_lava_cake);
 } /* if (dessert_choice == choice_two) */
 else {
    /*
     * Print key lime pie and price
     */
     printf("Key Lime Pie            $%5.2f\n",
         price_key_lime_pie);
 } /* if (dessert_choice == choice_two)...else */
