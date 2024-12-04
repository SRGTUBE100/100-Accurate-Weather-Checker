#include <stdio.h>
#include <unistd.h>
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"
int main (){
    char weather[100];
    printf("\n");
    printf(YELLOW"Enter Your Location : ");
    scanf("%99s", weather);
    printf("\n");
    sleep(2);
    printf(BLUE"Checking Clouds For %s...\n", weather);
    sleep(2);
    printf("Checking Probabilities For %s...\n", weather);
    sleep(2);
    printf("Checking Weather For %s...\n", weather);
    sleep(2);
    printf("Checking Environment For %s...\n", weather);
    sleep(2);
    printf("\n");
    printf(GREEN"Just Look Outside Your Window!! XD\n"RESET);
    printf("\n");
    return 0;
}