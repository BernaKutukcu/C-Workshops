/*
*****************************************************************************
                          Workshop - #3 (P1)

*****************************************************************************
*/

#include <stdio.h>

int main(void){
    // You must use this variable in #3 data analysis section!
    const double test_value = 330.99;

    const int Product1_ID = 111;
    const double price1 = 111.49;
    const char taxed1 = 'Y';

    const int Product2_ID = 222;
    const double price2 = 222.99;
    const char taxed2 = 'N';

    const int Product3_ID = 111;
    const double price3 = 334.49;
    const char taxed3 = 'N';

    const double average = (price1 + price2 + price3) / 3;

    printf("Product Information\n");
    printf("===================\n");

    printf("Product-1 ");
    printf("(ID:%d)\n", Product1_ID);
    printf("  Taxed: %c\n", taxed1);
    printf("  Price: $%.4lf\n\n", price1);

    printf("Product-2 ");
    printf("(ID:%d)\n", Product2_ID);
    printf("  Taxed: %c\n", taxed2);
    printf("  Price: $%.4lf\n\n", price2);

    printf("Product-3 ");
    printf("(ID:%d)\n", Product3_ID);
    printf("  Taxed: %c\n", taxed3);
    printf("  Price: $%.4lf\n\n", price3);

    printf("The average of all prices is: $%.4lf\n\n", average);

    printf("About Relational and Logical Expressions!\n");
    printf("========================================\n");

    printf("1. These expressions evaluate to TRUE or FALSE\n");
    printf("2. FALSE: is always represented by integer value 0\n");
    printf("3. TRUE : is represented by any integer value other than 0\n\n");

    printf("Some Data Analysis...\n");
    printf("=====================\n");


    printf("1. Is product 1 taxable? -> %d\n\n", (taxed1 == 'Y'));

    printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n", (taxed2 == 'N' && taxed3 == 'N'));

    printf("3. Is product 3 less than test_value ($%.2lf)? -> %d\n\n", test_value, (price3 < test_value));

    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n\n", (price3 > price1 + price2));

    printf("5. Is the price of product 1 equal to or more than the price difference of product 3 LESS product 2? -> %d (price difference: $%.2lf)\n\n", (price1 >= (price3 - price2)),  (price3 - price2));

    printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n", (price2 >= average));

    printf("7. Based on product ID, product 1 is unique -> %d\n\n", (Product1_ID != Product2_ID && Product1_ID != Product3_ID));

    printf("8. Based on product ID, product 2 is unique -> %d\n\n", (Product2_ID != Product1_ID && Product2_ID != Product3_ID));

    printf("9. Based on product ID, product 3 is unique -> %d\n\n", (Product3_ID != Product1_ID && Product3_ID != Product2_ID));

    return 0;
}
