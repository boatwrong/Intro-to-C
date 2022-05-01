//
//  llamas.c
//  TESTER
//
//  Created by Bryant Boatright on 3/20/21.
//

#include <stdio.h>

int main()
{
    int llama_start, pop_gain, pop_loss, end_population, llama_pop;
    int years = 0;
    printf("What is the starting population?\n");
    scanf("%d",
          &llama_start);
    pop_gain = llama_start/3;
    pop_loss = llama_start/4;
    
    
    end_population = llama_start * 4;
    
    do{
        llama_pop = llama_start + pop_gain;
        years ++;
        
    }
    while (llama_pop < end_population);
    
    printf("It took %d years for the population to grow.\n",
           years);
    
}

