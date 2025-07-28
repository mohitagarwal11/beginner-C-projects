#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>      //isse tolower() wala fn use krte h hum

void computer_hand(int rand, char outcome[]){
    const char out[3] = {'r', 'p', 's'};
    if (out[rand] == 'r'){
        printf("Computer: Rock\n");
        outcome[0] = 'r';
    }
    else if (out[rand] == 'p'){
        printf("Computer: Paper\n");
        outcome[0] = 'p';
    }
    else{
        printf("Computer: Scissor\n");
        outcome[0] = 's';
    }
}
int main(){
    printf("\t\t\t\tLET'S PLAY...ROCK,PAPER & SCISSOR!\n\n");
    int user = 0, comp = 0;
    char outcome[10];
    srand(time(0));

    while (user < 3 && comp < 3){
        char user_hand[8];
        printf("ROCK! PAPER! SCISSOR! GO...\n\nUser: ");
        scanf("%s", user_hand);
        user_hand[0] = tolower(user_hand[0]);

        if (user_hand[0] == 'r' || user_hand[0] == 'p' || user_hand[0] == 's'){
            int random_index = rand() % 3;
            computer_hand(random_index, outcome);

            if (outcome[0] == user_hand[0]){
                printf("IT IS A BREAK! Go Again!\n");
                printf("Points:\n User: %d and Computer: %d\n\n", user, comp);
            }
            else if (outcome[0] == 'r' && user_hand[0] == 'p'  ||
                     outcome[0] == 's' && user_hand[0] == 'r'  ||
                     outcome[0] == 'p' && user_hand[0] == 's'){
                printf("Point User!\n");
                user++;
                printf("Points:\n User: %d and Computer: %d\n\n", user, comp);
            }
            else if (outcome[0] == 'r' && user_hand[0] == 's'  ||
                     outcome[0] == 'p' && user_hand[0] == 'r'  ||
                     outcome[0] == 's' && user_hand[0] == 'p'){
                printf("Point Computer!\n");
                comp++;
                printf("Points:\n User: %d and Computer: %d\n\n", user, comp);
            }
        }
        else{
            printf("Invalid input!\n");
            printf("Points:\nUser: %d and Computer: %d\n\n", user, comp);
        }
    }
    if (user == 3){
        printf("CONGRATS, YOU WIN!");
    }
    else if (comp == 3){
        printf("WOMP WOMP! I WIN!");
    }
    return 0;
}