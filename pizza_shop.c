/*
 ******************************************************************
 *** Project #4:  Pizza Shop                                    ***
 *** Program:     pizza_shop                                    ***
 *** Author:      Bryant Boatright (bryantboatight@ou.edu)      ***
 *** Class:       CS 1313-010 Computer Programming, Spring 2021 ***
 *** Lab          Sec 011 Fridays 12:30pm                       ***
 *** Description: Prompt "customer" to order from subsets of    ***
 ***              main menu and returns a receipt for order     ***
 ******************************************************************
 */

#include <stdio.h>
#include <stdlib.h>

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
    * tip_rate:              Automatic tip rate
    * tax_rate:              Sales tax rate
    * tax_percent:           Tax rate when written as a percentage
    * price_cheesy_bread:    Price of cheesy bread
    * price_fried_pickles:   Price of fried pickles
    * price_fried_mushrooms: Price of fried mushrooms
    * price_pizza_sausage:   Price of sausage pizza
    * price_pizza_pepperoni: Price of pepperoni pizza
    * price_pizza_cheese:    Price of cheese pizza
    * price_milkshake:       Price of milkshake
    * price_tea:             Price of tea
    * price_soda:            Price of soda
    * price_cinnamon_sticks: Price of cinnamon sticks
    * price_lava_cake:       Price of lava cake
    * price_key_lime_pie:    Price of key lime pie
    * tip_percent:           Tip rate when written as a percentage
    * program_failure_code:  Failure code
    * program_success_code:  Success code
    * no_choice:             Code for not choosing an item from
    *                        menu subsection, also functions as cost
    *                        of not choosing an item.
    * choice_one:            Code for choosing item one from menu subset
    * choice_two:            Code for choosing item two from menu subset
    * choice_three:          Code for choosing item three from menu subset
    * max_choice:            Highest number listed as option on menu subset
    */
    const float tip_rate =              0.19;
    const float tax_rate =              0.0875;
    const float tax_percent =           8.75;
    const float price_cheesy_bread =    4.00;
    const float price_fried_pickles =   3.75;
    const float price_fried_mushroom =  3.00;
    const float price_pizza_sausage =   14.00;
    const float price_pizza_pepperoni = 11.75;
    const float price_pizza_cheese =    9.50;
    const float price_milkshake =       5.50;
    const float price_tea =             3.75;
    const float price_soda =            3.25;
    const float price_cinnamon_sticks = 7.25;
    const float price_lava_cake =       8.00;
    const float price_key_lime_pie =    8.75;
    const int   tip_percent =           19;
    const int   program_failure_code =  -1;
    const int   program_success_code =  0;
    const int   no_choice =             0;
    const int   choice_one =            1;
    const int   choice_two =            2;
    const int   max_choice =            3;
   /*
    ***********************
    * Variable Subsection *
    ***********************
    * total_cost:     Sum of subtotal, tax and gratuity
    * subtotal:       Sum of chosen appetizer, pizza, dessert
    *                 and drink prices
    * tax_cost:       Cost of sales tax based on subtotal
    * tip_cost:       Cost of automatic gratuity based on subtotal
    * app_cost:       Cost of appetizer chosen
    * pizza_cost:     Cost of pizza chosen
    * dessert_cost:   Cost of dessert chosen
    * drink_cost:     Cost of drink chosen
    * app_choice:     Variable to hold appetizer choice code
    * pizza_choice:   Variable to hold pizza choice code
    * dessert_choice: Variable to hold dessert choice code
    * drink_choice:   Variable to hold drink choice code
    */
    float total_cost, subtotal, tax_cost, tip_cost;
    float app_cost, pizza_cost, dessert_cost, drink_cost;
    int   app_choice, pizza_choice, dessert_choice, drink_choice;
   /*
    **************************
    *** Exectution Section ***
    **************************
    *
    *
    ***********************
    * Greeting Subsection *
    ***********************
    *
    *
    * Greet user and present menu with prices to user.
    */
    printf("Welcome to Bryant's pizza shop!\n");
    printf("Please take a look at our menu.\n");
    printf("\n");
    
   /*
    * Print menu
    */
    
    printf("            MENU\n");
    printf(" --------------------------\n");
    printf("| Item            | Price  |\n");
    printf(" --------------------------\n");
    printf("| Cheesy Bread    | $%5.2f |\n",
        price_cheesy_bread);
    printf(" --------------------------\n");
    printf("| Fried Pickles   | $%5.2f |\n",
        price_fried_pickles);
    printf(" --------------------------\n");
    printf("| Fried Mushrooms | $%5.2f |\n",
        price_fried_mushroom);
    printf(" --------------------------\n");
    printf("| Sausage Pizza   | $%5.2f |\n",
        price_pizza_sausage);
    printf(" --------------------------\n");
    printf("| Pepperoni Pizza | $%5.2f |\n",
        price_pizza_pepperoni);
    printf(" --------------------------\n");
    printf("| Cheese Pizza    | $%5.2f |\n",
        price_pizza_cheese);
    printf(" --------------------------\n");
    printf("| Milkshake       | $%5.2f |\n",
        price_milkshake);
    printf(" --------------------------\n");
    printf("| Tea             | $%5.2f |\n",
        price_tea);
    printf(" --------------------------\n");
    printf("| Soda            | $%5.2f |\n",
        price_soda);
    printf(" --------------------------\n");
    printf("| Cinnamon Sticks | $%5.2f |\n",
        price_cinnamon_sticks);
    printf(" --------------------------\n");
    printf("| Lava Cake       | $%5.2f |\n",
        price_lava_cake);
    printf(" --------------------------\n");
    printf("| Key Lime Pie    | $%5.2f |\n",
        price_key_lime_pie);
    printf(" --------------------------\n");
    printf("\n");
    printf("* Sales tax rate: %3.2f%% \n",
        tax_percent);
    printf("* %d%% Gratuitiy included\n",
        tip_percent);
   /*
    ********************
    * Input Subsection *
    ********************
    *
    * Prompt user to choose from selection of appetizers and
    * input appetizer choice
    */
    printf("Please enter the corresponding number from the following\n");
    printf("options for an appetizer:\n");
    printf("0 - No Appetizer\n");
    printf("1 - Cheesy Bread\n");
    printf("2 - Fried Pickles\n");
    printf("3 - Fried Mushrooms\n");
    scanf("%d",
        &app_choice);
   /*
    * Idiotproof the appetizer choice and assign appetizer
    * cost to variable app_cost.
    */
    if (app_choice < no_choice || app_choice > max_choice) {
       /*
        * Output the idiotproof error message for appetizer choice
        */
        printf("That choice is not an option for appetizers.\n");
       /*
        * Exit program because appetizer choice is invalid
        */
        exit(program_failure_code);
    } /* if (app_choice < no_choice || app_choice > max_choice) */
    
    else if (app_choice == no_choice) {
       /*
        * Assign price of zero to app choice.
        */
        app_cost = no_choice;
    } /* if (app_choice == no_choice) */
    else if (app_choice == choice_one) {
       /*
        * Assign cheesy bread price to variable app_cost
        */
        app_cost = price_cheesy_bread;
    } /* if (app_choice == choice_one) */
    else if (app_choice == choice_two) {
       /*
        * Assign fried pickles price to variable app_cost
        */
        app_cost = price_fried_pickles;
    } /* if (app_choice == choice_two) */
    else {
       /*
        * Assign price of fried mushrooms to variable app_cost
        */
        app_cost = price_fried_mushroom;
    } /* if (app_choice == choice_two)...else */
   /*
    * Prompt user to input pizza choice
    */
    printf("Please enter the corresponding number from the following\n");
    printf("options for pizza:\n");
    printf("0 - No Pizza\n");
    printf("1 - Sausage Pizza\n");
    printf("2 - Pepperoni Pizza\n");
    printf("3 - Cheese Pizza\n");

    scanf("%d",
        &pizza_choice);
   /*
    * Idiotproof the pizza choice and assign pizza price to
    * variable pizza_cost
    */
    if (pizza_choice < no_choice || pizza_choice > max_choice) {
       /*
        * Output the idiotproof error message for pizza choice
        */
        printf("That is not a valid choice for pizza.\n");
       /*
        * Exit program because pizza choice is invalid
        */
        exit(program_failure_code);
    } /* if (pizza_choice < no_choice || pizza_choice > max_choice) */
    else if (pizza_choice == no_choice) {
       /*
        * Assign price of zero to pizza_cost
        */
        pizza_cost = no_choice;
    } /* if (pizza_choice == no_choice) */
    else if (pizza_choice == choice_one) {
       /*
        * Assign sausage pizza price to pizza_cost
        */
        pizza_cost = price_pizza_sausage;
    } /* if (pizza_choice == choice_one) */
    else if (pizza_choice == choice_two) {
       /*
        * Assign pepperoni pizza price to pizza_cost
        */
        pizza_cost = price_pizza_pepperoni;
    } /* if (pizza_choice == choice_two) */
    else {
       /*
        * Assign cheese pizza price to pizza_cost
        */
        pizza_cost = price_pizza_cheese;
    } /* if (pizza_choice == choice_two)...else */
    
   /*
    * Prompt user to input dessert choice
    */
    printf("Please enter the corresponding number from the following\n");
    printf("options for desserts:\n");
    printf("0 - No Dessert\n");
    printf("1 - Cinnamon Sticks\n");
    printf("2 - Lava Cake\n");
    printf("3 - Key Lime Pie\n");
    scanf("%d",
        &dessert_choice);
   /*
    * Idiotproof the dessert choice and assign dessert
    * price to variable dessert_cost
    */
    
    if (dessert_choice < no_choice || dessert_choice > max_choice) {
       /*
        * Output the idiotproof error message for dessert choice
        */
        printf("That choice is not a valid option for dessert.\n");
       /*
        * Exit program because dessert choice is invalid
        */
        exit(program_failure_code);
    } /* if (dessert_choice < no_choice || dessert_choice > max_choice) */
    else if (dessert_choice == no_choice) {
       /*
        * Assign price of zero to dessert_cost
        */
        dessert_cost = no_choice;
    } /* if (dessert_choice == no_choice) */
    else if (dessert_choice == choice_one) {
       /*
        * Assign cinnamon stick price to dessert_cost
        */
        dessert_cost = price_cinnamon_sticks;
    } /* if (dessert_choice == choice_one) */
    else if (dessert_choice == choice_two) {
       /*
        * Assign lava cake price to dessert_cost
        */
        dessert_cost = price_lava_cake;
    } /* if (dessert_choice == choice_two) */
    else {
       /*
        * Assign key lime price to dessert_cost
        */
        dessert_cost = price_key_lime_pie;
    } /* if (dessert_choice == choice_two)...else */
    
   /*
    * Prompt user to input drink choice
    */
    printf("Please enter the corresponding number from the following\n");
    printf("options for drinks:\n");
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
        printf("That is not a drink option on the menu.\n");
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
    *************************
    * Calulation Subsection *
    *************************
    *
    *
    * Subtotal cost is sum of appetizer, pizza, dessert,
    * and drink costs.
    */

    subtotal = app_cost + pizza_cost + dessert_cost + drink_cost;

   /*
    * Tax cost is equal to subtotal multiplied by tax rate.
    */

    tax_cost = subtotal * tax_rate;

   /*
    * Tip cost is equal to subtotal multiplied by tip rate.
    */

    tip_cost = subtotal * tip_rate;

   /*
    * Total cost is sum of subtotal, tip and tax cost.
    */

    total_cost = subtotal + tax_cost + tip_cost;

   /*
    *********************
    * Output Subsection *
    *********************
    *
    *
    * If no items are ordered thank user and exit program without
    * printing a receipt
    */
    if ((app_choice == no_choice) &&
        (pizza_choice == no_choice) &&
        (drink_choice == no_choice) &&
        (dessert_choice == no_choice)) {
       /*
        * Output thank you message when no items are ordered
        */
        printf("Thanks for stopping by!\n");
       /*
        * Exit program since no items were orderd
        */
        exit(program_success_code);
    } /* if ((app_choice == no_choice) && ...*/

    else {
       /*
        * Print receipt
        */
        printf("-------------------------------------------\n");
        printf("Bryant's Pizza Shop\n");
        printf("\n");
        printf("Order:\n");

       /*
        * Print appetizer choice with cost based on app_choice
        */

        if (app_choice == no_choice) {
           /*
            * If no item is chosen, omit the line on the receipt
            */
            printf("");
        } /* if (app_choice == no_choice) */
        else if (app_choice == choice_one) {
           /*
            * print cheesy bread and price
            */
            printf("    Cheesy Bread        $%5.2f\n",
                price_cheesy_bread);
        } /* if (app_choice == choice_one) */
        else if (app_choice == choice_two) {
           /*
            * print fried pickles and pric e
            */
            printf("    Fried Pickles       $%5.2f\n",
            price_fried_pickles);
        } /* if (app_choice == choice_two) */
        else {
           /*
            * Print fried mushrooms and price
            */
            printf("    Fried Mushrooms     $%5.2f\n",
                price_fried_mushroom);
        } /* if (app_choice == choice_two)...else */

       /*
        * Print pizza choice with cost
        */

        if (pizza_choice == no_choice) {
           /*
            * If no item is chosen, omit the line on the receipt
            */
            printf("");
        } /* if (pizza_choice == no_choice) */
        else if (pizza_choice == choice_one) {
           /*
            * Print sausage pizza and price
            */
            printf("    Sausage Pizza       $%5.2f\n",
                price_pizza_sausage);
        } /* if (pizza_choice == choice_one) */
        else if (pizza_choice == choice_two) {
           /*
            * Print pepperoni pizza and price
            */
            printf("    Pepperoni Pizza     $%5.2f\n",
                price_pizza_pepperoni);
        } /* if (pizza_choice == choice_two) */
        else {
           /*
            * Print cheese pizza and price
            */
            printf("    Cheese Pizza        $%5.2f\n",
                price_pizza_cheese);
        } /* if (pizza_choice == choice_two)...else */

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
            printf("    Cinnamon Sticks     $%5.2f\n",
                price_cinnamon_sticks);
        } /* if (dessert_choice == choice_one) */
        else if (dessert_choice == choice_two) {
           /*
            * print lava cake and price
            */
            printf("    Lava Cake           $%5.2f\n",
                price_lava_cake);
        } /* if (dessert_choice == choice_two) */
        else {
           /*
            * Print key lime pie and price
            */
            printf("    Key Lime Pie        $%5.2f\n",
                price_key_lime_pie);
        } /* if (dessert_choice == choice_two)...else */

        
       /*
        * Print drink choice with cost
        */

        if (drink_choice == no_choice) {
           /*
            * If no item is chosen, omit the line on the receipt
            */
            printf("");
        } /* if (drink_choice == no_choice) */
        else if (drink_choice == choice_one) {
           /*
            * Print milkshake and price
            */
            printf("    Milkshake           $%5.2f\n",
                price_milkshake);
        } /* if (drink_choice == choice_one) */
        else if (drink_choice == choice_two) {
           /*
            * Print tea and price
            */
            printf("    Tea                 $%5.2f\n",
                price_tea);
        } /* if (drink_choice == choice_two) */
        else {
           /*
            * Print Soda and price
            */
            printf("    Soda                $%5.2f\n",
                price_soda);
        } /* if (drink_choice == choice_two)...else */


       /*
        * Print Subtotal, Tax, Tip, and Total Cost
        */
        printf("    ---------------------------------------\n");
        printf("    Subtotal:           $%5.2f\n",
            subtotal);

        printf("    Tax:                $%5.2f\n",
            tax_cost);
        printf("    Tip:                $%5.2f\n",
            tip_cost);
        printf("    ---------------------------------------\n");
        printf("    Grand Total:        $%5.2f\n",
            total_cost);
        printf("\n");
        printf("Thank you for visiting Bryant's Pizza Shop!\n");
        printf("-------------------------------------------\n");
        return(program_success_code);
    } /*  if ((app_choice == no_choice) &&...else */

} /* main */
