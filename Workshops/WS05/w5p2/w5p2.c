/*
*****************************************************************************
                          Workshop - #5 (P2)
Full Name  : Berna Kütükçü
Email      :

*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MIN_YEAR 2012
#define MAX_YEAR 2022
#define LOG_DAYS 3

int main(void){
    const int JAN = 1;
    const int DEC = 12;
    int year, month, day = 1;
    float morning_rating, evening_rating;
    float morning_total = 0, evening_total = 0, overall_total;
    float average_morning, average_evening, average_total;

    printf("General Well-being Log\n");
    printf("======================\n");

    do{
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &month);

        if(year < MIN_YEAR || year > MAX_YEAR){
            printf("    ERROR: The year must be between 2012 and 2022 inclusive\n");
        }
        if(month < JAN || month > DEC){
            printf("    ERROR: Jan.(1) - Dec.(12)\n");
        }
    }while(year < MIN_YEAR || year > MAX_YEAR || month < JAN || month > DEC);

    printf("\n*** Log date set! ***\n\n");


    for(day = 1; day <= LOG_DAYS; day++){
        if(day == 2){
            printf("\n");
        }

        switch(month){
            case 1:
                printf("%d-JAN-%02d\n", year, day);
                break;
            case 2:
                printf("%d-FEB-%02d\n", year, day);
                break;
            case 3:
                printf("%d-MAR-%02d\n", year, day);
                break;
            case 4:
                printf("%d-APR-%02d\n", year, day);
                break;
            case 5:
                printf("%d-MAY-%02d\n", year, day);
                break;
            case 6:
                printf("%d-JUN-%02d\n", year, day);
                break;
            case 7:
                printf("%d-JUL-%02d\n", year, day);
                break;
            case 8:
                printf("%d-AUG-%02d\n", year, day);
                break;
            case 9:
                printf("%d-SEP-%02d\n", year, day);
                break;
            case 10:
                printf("%d-OCT-%02d\n", year, day);
                break;
            case 11:
                printf("%d-NOV-%02d\n", year, day);
                break;
            case 12:
                printf("%d-DEC-%02d\n", year, day);
                break;
            default:
                break;

        }

        do{
            printf("    Morning rating (0.0-5.0): ");
            scanf("%f", &morning_rating);
            if(morning_rating < 0.0 || morning_rating > 5.0){
                printf("        ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            }
        }while(morning_rating < 0.0 || morning_rating > 5.0);
        morning_total += morning_rating;

        do{
            printf("    Evening rating (0.0-5.0): ");
            scanf("%f", &evening_rating);
            if(evening_rating < 0.0 || evening_rating > 5.0){
                printf("        ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            }
        }while(evening_rating < 0.0 || evening_rating > 5.0);
        evening_total += evening_rating;

    }

    overall_total = morning_total + evening_total;
    average_morning = morning_total / LOG_DAYS;
    average_evening = evening_total / LOG_DAYS;
    average_total = (average_morning + average_evening) / 2;

    printf("\nSummary\n");
    printf("=======\n");
    printf("Morning total rating: %.3f\n", morning_total);
    printf("Evening total rating: %.3f\n", evening_total);
    printf("----------------------------\n");
    printf("Overall total rating: %.3f\n\n", overall_total);
    printf("Average morning rating: %.1f\n", average_morning);
    printf("Average evening rating: %.1f\n", average_evening);
    printf("----------------------------\n");
    printf("Average overall rating: %.1f\n", average_total);

    return 0;
}