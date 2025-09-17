/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  : Berna Kütükçü
Email      :

*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS   // for visual studio code errors

#include <stdio.h>

int main(void){
    int applesNeeded, orangesNeeded, pearsNeeded, tomatoesNeeded, cabbagesNeeded;
    int applesRemaining;
    int orangesRemaining;
    int pearsRemaining;
    int tomatoesRemaining;
    int cabbagesRemaining;
    int picked = 0;
    int again = 1;

    printf("Grocery Shopping\n");
    printf("================\n");

    do{
        printf("How many APPLES do you need? : ");
        scanf("%d", &applesNeeded);
        if(applesNeeded < 0){
            printf("ERROR: Value must be 0 or more.\n");
        }
    }while(applesNeeded < 0);

    printf("\n");

    do{
        printf("How many ORANGES do you need? : ");
        scanf("%d", &orangesNeeded);
        if(orangesNeeded < 0){
            printf("ERROR: Value must be 0 or more.\n");
        }
    }while(orangesNeeded < 0);

    printf("\n");

    do{
        printf("How many PEARS do you need? : ");
        scanf("%d", &pearsNeeded);
        if(pearsNeeded < 0){
            printf("ERROR: Value must be 0 or more.\n");
        }
    }while(pearsNeeded < 0);

    printf("\n");

    do{
        printf("How many TOMATOES do you need? : ");
        scanf("%d", &tomatoesNeeded);
        if(tomatoesNeeded < 0){
            printf("ERROR: Value must be 0 or more.\n");
        }
    }while(tomatoesNeeded < 0);

    printf("\n");

    do{
        printf("How many CABBAGES do you need? : ");
        scanf("%d", &cabbagesNeeded);
        if(cabbagesNeeded < 0){
            printf("ERROR: Value must be 0 or more.\n");
        }
    }while(cabbagesNeeded < 0);

    printf("\n--------------------------\n");
    printf("Time to pick the products!\n");
    printf("--------------------------\n\n");

    while(again == 1){
        applesRemaining = applesNeeded; //10
        while (applesRemaining > 0) {
            printf("Pick some APPLES... how many did you pick? : ");
            scanf("%d", &picked);

            if (picked <= 0){
                printf("ERROR: You must pick at least 1!\n");
            }else if (picked > applesRemaining){
                printf("You picked too many... only %d more APPLE(S) are needed.\n", applesRemaining);
            }else if (picked < applesRemaining){
                applesRemaining -= picked;
                printf("Looks like we still need some APPLES...\n");
            }else{
                applesRemaining = 0;
                printf("Great, that's the apples done!\n");
            }
        }
        printf("\n");
        orangesRemaining = orangesNeeded;
        while (orangesRemaining > 0) {
            printf("Pick some ORANGES... how many did you pick? : ");
            scanf("%d", &picked);

            if (picked <= 0){
                printf("ERROR: You must pick at least 1!\n");
            }else if (picked > orangesRemaining){
                printf("You picked too many... only %d more ORANGE(S) are needed.\n", orangesRemaining);
            }else if (picked < orangesRemaining){
                orangesRemaining -= picked;
                printf("Looks like we still need some ORANGES...\n");
            }else{
                orangesRemaining = 0;
                printf("Great, that's the oranges done!\n");
            }
        }
        printf("\n");
        pearsRemaining = pearsNeeded;
        while (pearsRemaining > 0){
            printf("Pick some PEARS... how many did you pick? : ");
            scanf("%d", &picked);

            if (picked <= 0){
                printf("ERROR: You must pick at least 1!\n");
            }else if (picked > pearsRemaining){
                printf("You picked too many... only %d more PEAR(S) are needed.\n", pearsRemaining);
            }else if (picked < pearsRemaining){
                pearsRemaining -= picked;
                printf("Looks like we still need some PEARS...\n");
            }else{
                pearsRemaining = 0;
                printf("Great, that's the pears done!\n");
            }
        }
        printf("\n");
        tomatoesRemaining = tomatoesNeeded;
            while (tomatoesRemaining > 0){
            printf("Pick some TOMATOES... how many did you pick? : ");
            scanf("%d", &picked);

            if (picked <= 0){
                printf("ERROR: You must pick at least 1!\n");
            }else if (picked > tomatoesRemaining){
                printf("You picked too many... only %d more TOMATO(ES) are needed.\n", tomatoesRemaining);
            }else if (picked < tomatoesRemaining){
                tomatoesRemaining -= picked;
                printf("Looks like we still need some TOMATOES...\n");
            }else{
                tomatoesRemaining = 0;
                printf("Great, that's the tomatoes done!\n");
            }
        }
        printf("\n");
        cabbagesRemaining = cabbagesNeeded;
        while (cabbagesRemaining > 0){
            printf("Pick some CABBAGES... how many did you pick? : ");
            scanf("%d", &picked);

            if (picked <= 0){
                printf("ERROR: You must pick at least 1!\n");
            }else if (picked > cabbagesRemaining){
                printf("You picked too many... only %d more CABBAGE(S) are needed.\n", cabbagesRemaining);
            }else if (picked < cabbagesRemaining){
                cabbagesRemaining -= picked;
                printf("Looks like we still need some CABBAGES...\n");
            }else{
                cabbagesRemaining = 0;
                printf("Great, that's the cabbages done!\n");
            }
        }

        printf("\nAll the items are picked!\n");
        printf("\nDo another shopping? (0=NO): ");
        scanf("%d", &again);
        if(again == 0){
            printf("\nYour tasks are done for today - enjoy your free time!\n");
            break;
        }else{
            printf("\nGrocery Shopping\n");
            printf("================\n");

            do{
                printf("How many APPLES do you need? : ");
                scanf("%d", &applesNeeded);
                if(applesNeeded < 0){
                    printf("ERROR: Value must be 0 or more.\n");
                }
            }while(applesNeeded < 0);

            printf("\n");

            do{
                printf("How many ORANGES do you need? : ");
                scanf("%d", &orangesNeeded);
                if(orangesNeeded < 0){
                    printf("ERROR: Value must be 0 or more.\n");
                }
            }while(orangesNeeded < 0);

            printf("\n");

            do{
                printf("How many PEARS do you need? : ");
                scanf("%d", &pearsNeeded);
                if(pearsNeeded < 0){
                    printf("ERROR: Value must be 0 or more.\n");
                }
            }while(pearsNeeded < 0);

            printf("\n");

            do{
                printf("How many TOMATOES do you need? : ");
                scanf("%d", &tomatoesNeeded);
                if(tomatoesNeeded < 0){
                    printf("ERROR: Value must be 0 or more.\n");
                }
            }while(tomatoesNeeded < 0);

            printf("\n");

            do{
                printf("How many CABBAGES do you need? : ");
                scanf("%d", &cabbagesNeeded);
                if(cabbagesNeeded < 0){
                    printf("ERROR: Value must be 0 or more.\n");
                }
            }while(cabbagesNeeded < 0);
        }
        printf("\n--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n");
    }

    return 0;
}
