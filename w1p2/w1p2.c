#include <stdio.h>
        int main(){
        char first_name[] = "Berna";
        char last_name[] = "Kutukcu";
        char studentID[] = "123456789";

        printf("Workshop 1 Part-1\n");
        printf("=================\n\n");
        printf("I'am displaying this using the 'printf' stdio\n(standard input output) library function!\n\n");
        printf("Dear teacher ,\n\n");
        printf("  I promise I will work hard from this day onward.\n");
        printf("  I acknowledge that practice is extremely important,\n");
        printf("  so I will do all workshops, quizzes, and assignments.\n\n");
        printf("Sincerely,\n\n");
        printf("%s %s\n", first_name, last_name);
        printf("Student ID# %s\n\n", studentID);

        printf("Workshop 1 Part-2\n");
        printf("=================\n\n");
        printf("Using tab specifiers...\n");
        printf("\tTab-1\tTab-2\tTab-3\n");
        printf("\t-----\t=====\t-----\n\n");
        printf("\\ this is a back-slash character!\n");
        printf("%% this is a percent sign character!\n");
        printf("\" this is a double-quote character!\n\n");
        printf("My favourite quotes are:\n");
        printf("1.\t\"Skills is only developed by hours and hours of work.\"\n");
        printf("\t\t\t\t\t\t-Usain Bolt\n\n");
        printf("2.\t\"It's not about having time. It's about making time.\"\n");
        printf("\t\t\t\t\t\t-unknown\n\n");
        printf("3.\t\"All of us do not have equal talent. But, all of us\n\thave an equal opportunity to develop our talents.\"\n");
        printf("\t\t\t\t\t\t-A.P.J Abdul Kalam\n\n");       
        return 0;        
    }