#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int random,guess;
    srand(time(NULL));
    int guesscount=0;
    random=rand() % 100 + 1;
    printf("%d",random);

    printf("This is freaking guessing game\n");
    do{
        printf("guess your fucking number bruhh \n");
        scanf("%d",&guess);
        guesscount++;

        if(guess>random){
            printf("Guessed number is bigger than the actual number \n");
        }
        else if(guess<random){
            printf("guessed number is smaller than the actual number \n");
        }
        else{
            printf("Congrats you finally found the number after %d fucking attempts \n",guesscount);
        }
    }while(guess!=random);

    printf("fuck off");
}