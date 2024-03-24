#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#if defined(_WIN32) || defined(_WIN64)
    #include<windows.h>
    #define clear() Sleep(500); system("cls");
#elif defined(__linux__)
    #include<unistd.h>
    #define Sleep(x) usleep((x)*1000)
    #define clear() Sleep(500); system("clear");
#endif

void startGame();
int randomNumber();
int guessNumber();
bool checkNumber(int number, int r);

int main(){
    srand(time(NULL));
    startGame();
    return 0;
}

void startGame(){
    int number = 0;
    int r = randomNumber();
    bool correct = false;
    bool playAgain = false;

    printf("Hey There!\n\nWelcome to my number guessing game!\n\n");
    for (int i = 0; i<5; i++){
        printf(". ");
        Sleep(500);
    }
    printf("Random Number has been generated! \n");

    while (!correct) {
        int number = guessNumber();
        correct = checkNumber(number, r);
        clear();
    }
    printf("Play again? (1 for YES or 0 for NO): ");
    scanf("%d", &playAgain);
    playAgain ? startGame() : printf("Thanks for playing! Goodbye!\n"); clear(); exit(0);
    clear();
}

int randomNumber() {
    return rand() % 100;
    }

int guessNumber(){
    int number;
    printf("Please Enter a Number\n");
    scanf("%d", &number);
    return number;
}

bool checkNumber(int number, int r) {
    if (number == r) {
        r == 69 ? printf("nice.") : printf("YOU GOT IT RIGHT!\n");
        return true;
    }
    else if (number < r) {
        printf("HIGHER!\n");
    }
    else if (number > r) {
        printf("LOWER!\n");
    }
    clear();
    return false;
}