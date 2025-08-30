#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(){
    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    
    double small, medium, large;
    int priceSmallCents, priceMediumCents, priceLargeCents;

    int patQty, salQty, tomQty;
    
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
    scanf("%d", &patQty);
    printf("\nTommy's shirt size is '%c'\n", tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &tomQty);
    printf("\nSally's shirt size is '%c'\n", salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &salQty);
    printf("\n");

    int patSub = priceSmallCents * patQty;
    int patTax = (int)(patSub * TAX + 0.5);
    int patTotal = patSub + patTax;

    int salSub = priceMediumCents * salQty;
    int salTax = (int)(salSub * TAX + 0.5);
    int salTotal = salSub + salTax;

    int tomSub = priceLargeCents * tomQty;
    int tomTax = (int)(tomSub * TAX + 0.5);
    int tomTotal = tomSub + tomTax;

    int grandSub = patSub + salSub + tomSub;
    int grandTax = patTax + salTax + tomTax;
    int grandTotal = patTotal + salTotal + tomTotal;

    printf("Customer  Size  Price  Qty  Sub-Total       Tax     Total\n");
    printf("--------  ----  -----  ---  ---------  ---------  ---------\n");
    printf("%-8s  %-4c  %5.2lf  %3d  %9.4lf  %9.4lf  %9.4lf\n", "Patty", patSize, small,  patQty, patSub/100.0, patTax/100.0, patTotal/100.0);
    printf("%-8s  %-4c  %5.2lf  %3d  %9.4lf  %9.4lf  %9.4lf\n", "Sally", salSize, medium, salQty, salSub/100.0, salTax/100.0, salTotal/100.0);
    printf("%-8s  %-4c  %5.2lf  %3d  %9.4lf  %9.4lf  %9.4lf\n", "Tommy", tomSize, large,  tomQty, tomSub/100.0, tomTax/100.0, tomTotal/100.0);
    printf("--------  ----  -----  ---  ---------  ---------  ---------\n");
    printf("%37.4lf  %9.4lf  %9.4lf\n", grandSub / 100.0, grandTax / 100.0, grandTotal / 100.0);

    printf("\nDaily retail sales represented by coins\n");
    printf("=======================================\n\n");
    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance \n");
    printf("-------- --- ---------\n");

    int balance = grandSub;
    printf("%22.4f\n", balance / 100.0);
    
    int Qty;

    // Toonies ($2 = 200¢)
    Qty = balance / 200;
    balance = balance % 200;
    printf("%-8s %3d %9.4f\n", "Toonies", Qty, balance / 100.0);
    
    // Loonies ($1 = 100¢)
    Qty = balance / 100;
    balance = balance %100;
    printf("%-8s %3d %9.4f\n", "Loonies", Qty, balance / 100.0);

    // Quarters (25¢)
    Qty = balance / 25;
    balance = balance % 25;
    printf("%-8s %3d %9.4f\n", "Quarters", Qty, balance / 100.0); 
    
    // Dimes (10¢)
    Qty = balance / 10;
    balance = balance % 10;
    printf("%-8s %3d %9.4f\n", "Dimes", Qty, balance / 100.0);    

    // Nickels (5¢)
    Qty = balance / 5;
    balance = balance % 5;
    printf("%-8s %3d %9.4f\n", "Nickels", Qty, balance / 100.0);

    // Pennies (1¢)
    Qty = balance / 1;
    balance = balance % 1;
    printf("%-8s %3d %9.4f\n", "Pennies", Qty, balance / 100.0);

    int totalQty = patQty + salQty + tomQty;
    int avrg_cost = (grandSub * 100 + (totalQty / 2)) / totalQty;
    printf("\nAverage cost/shirt: $%.4f\n\n", avrg_cost / 10000.0);

    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance \n");
    printf("-------- --- ---------\n");

    balance = grandTotal;
    printf("%22.4f\n", balance / 100.0);
    // Toonies ($2 = 200¢)
    Qty = balance / 200;
    balance = balance % 200;
    printf("%-8s %3d %9.4f\n", "Toonies", Qty, balance / 100.0);
    
    // Loonies ($1 = 100¢)
    Qty = balance / 100;
    balance = balance %100;
    printf("%-8s %3d %9.4f\n", "Loonies", Qty, balance / 100.0);

    // Quarters (25¢)
    Qty = balance / 25;
    balance = balance % 25;
    printf("%-8s %3d %9.4f\n", "Quarters", Qty, balance / 100.0); 
    
    // Dimes (10¢)
    Qty = balance / 10;
    balance = balance % 10;
    printf("%-8s %3d %9.4f\n", "Dimes", Qty, balance / 100.0);    

    // Nickels (5¢)
    Qty = balance / 5;
    balance = balance % 5;
    printf("%-8s %3d %9.4f\n", "Nickels", Qty, balance / 100.0);

    // Pennies (1¢)
    Qty = balance / 1;
    balance = balance % 1;
    printf("%-8s %3d %9.4f\n", "Pennies", Qty, balance / 100.0);

    avrg_cost = (grandTotal * 100 + (totalQty / 2)) / totalQty;
    printf("\nAverage cost/shirt: $%.4f\n\n", avrg_cost / 10000.0);

     return 0;
}