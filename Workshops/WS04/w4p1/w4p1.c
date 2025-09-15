/*
*****************************************************************************
                          Workshop - #4 (P1)
Full Name  : Berna Kütükçü
Email      :

*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS     // for visual studio code errors

#include <stdio.h>

int main(void){
    char loop_type;
    int number_of_iterations;
    int i;

    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n");

    do{
        printf("\nD = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loop_type, &number_of_iterations);

        if (loop_type == 'Q') {
            if(number_of_iterations != 0){
                printf("ERROR: To quit, the number of iterations should be 0!\n\n");
            }
        }
        else if (loop_type != 'D' && loop_type != 'W' && loop_type != 'F') {
            printf("ERROR: Invalid entered value(s)!\n\n");
        }
        else if (number_of_iterations < 3 || number_of_iterations > 20) {
            printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
        }
        else {
            if (loop_type == 'D') {
                printf("DO-WHILE: ");
                i = 0;
                do {
                    printf("D");
                    i++;
                } while (i < number_of_iterations);
                printf("\n");
            }
            if (loop_type == 'W') {
                printf("WHILE: ");
                i = 0;
                while (i < number_of_iterations) {
                    printf("W");
                    i++;
                }
                printf("\n");
            }
            if (loop_type == 'F') {
                printf("FOR: ");
                for (i = 0; i < number_of_iterations; i++) {
                    printf("F");
                }
                printf("\n");
            }
        }
    }while (loop_type != 'Q' || number_of_iterations != 0);

    printf("\n+----------------------+\n");
    printf("Loop application ENDED\n");
    printf("+----------------------+\n\n");

    return 0;
}