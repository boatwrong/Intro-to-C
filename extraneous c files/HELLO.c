#include<stdio.h>

int main()

{ /* main */
    int winner = 0, count = 0;
    int pos[9], index, sign, player, flag, i, k, j;
    
    for(i=0, i<9; i++){
        pos[i] = ' ';
    }
    
    while(count < 9 && winner != 1){
        flag=0;
//      print board
        printf("\n");
        printf("%c|%c|%c",
               pos[0], pos[1], pos[2]);
        printf("-+-+-");
        printf("%c|%c|%c",
               pos[3], pos[4], pos[5]);
        printf("-+-+-");
        printf("%c|%c|%c",
               pos[7], pos[8], pos[9]);
        if(count % 2 == 0){
            sign = 'X';
            player = 1;
        }
        else{
            sign = 'O';
            player = 2;
            
        }
        
        printf("Move for player%d(1-9):' ",
               player);
        scanf("%d",
              &index);
       
        if(index<1 || index>9){
            printf("Allowed index is 1 to 9\n");
            
        }
        if(pos[index-1] == 'X' || pos[index-1] == 'O'){
            printf("Position is occupied\n");
        continue;
    }
        pos[index-1]=sign;
        count++;
        for(i=0; i<9; i++){
            if(i%3 == 0)
                flag = 0;
            if(pos[i] == sign)
                flag++;
            
        }
    return 0;
} /* main */

