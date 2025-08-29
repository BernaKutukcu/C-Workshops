
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(){
    const double TAX = 0.13;
    const char patSize = 'S';
    
    double small, medium, large;
    int priceSmallCents, priceMediumCents, priceLargeCents;

    int shirtCount;
    int sub_total= 0;
    int total;
    int taxes;
    
    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &small);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &medium);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &large);
    printf("\n");

    printf("Shirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2f\n", small);
    printf("MEDIUM : $%.2f\n", medium);
    printf("LARGE  : $%.2f\n\n", large);

    priceSmallCents = (int)(small * 100 + 0.5);
    priceMediumCents = (int)(medium * 100 + 0.5);
    priceLargeCents = (int)(large * 100 + 0.5);


    printf("Patty's shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &shirtCount);
    printf("\n");

    printf("Patty's shopping cart...\n");
    printf("Contains : %d shirts\n", shirtCount);

    sub_total = priceSmallCents * shirtCount;
    printf("Sub-total: $%.4f\n", sub_total / 100.0);

    taxes = sub_total * TAX + 0.5;
    printf("Taxes    : $ %.4f\n", taxes / 100.0);
    
    total = sub_total + taxes;
    printf("Total    : $%.4f\n", total / 100.0);
    
     return 0;
}