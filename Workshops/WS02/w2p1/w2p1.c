#include<stdio.h>
int main(){
    double small, medium, large;

    int shirtCount;
    int sub_total= 0;
    int total;
    int taxes;

    int priceSmallCents, priceMediumCents, priceLargeCents;
    
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


    printf("Patty's shirt size is 'S'\n");
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &shirtCount);
    printf("\n");

    printf("Patty's shopping cart...\n");
    printf("Contains : %d shirts\n", shirtCount);

    sub_total = priceSmallCents * shirtCount;
    printf("Sub-total: $%d.%04d\n", sub_total / 100, (sub_total % 100) * 100);

    taxes = (sub_total * 13 + 50) / 100;
    printf("Taxes    : $ %d.%04d\n", taxes / 100, (taxes % 100) * 100);
    
    total = sub_total + taxes;
    printf("Total    : $%d.%04d\n", total / 100, (total % 100) * 100);
    
     return 0;
}