#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int RockPaperScissors(char you, char comp) {
    if(you == comp) {
        return 0; // Draw
    }
    if((you == 'r' && comp == 's') || (you == 's' && comp == 'p') || (you == 'p' && comp == 'r')) {
        return 1; // You win
    } else {
        return -1; // Computer wins
    }
}

int main() {
    char you, comp;
    int number, result;
    
    srand(time(0));
    number = rand() % 100 + 1;
    
    if(number < 33) {
        comp = 'r'; // Rock
    } else if(number > 33 && number < 66) {
        comp = 'p'; // Paper
    } else {
        comp = 's'; // Scissors
    }
    
    printf("Enter 'r' for Rock, 'p' for Paper, and 's' for Scissors\n");
    scanf(" %c", &you); 
    
    result = RockPaperScissors(you, comp);
    
    if(result == 0) {
        printf("Game draw!\n");
    } else if(result == 1) {
        printf("You won the game!\n");
    } else {
        printf("You lose the game!\n");
    }
    
    printf("You chose %c and Computer chose %c\n", you, comp);
    return 0;
}

