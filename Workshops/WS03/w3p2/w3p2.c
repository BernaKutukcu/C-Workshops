/*
*****************************************************************************
                          Workshop - #3 (P2)

*****************************************************************************
*/
// Note:
// You can convert Celsius to Fahrenheit given the following formula:
// fahrenheit = (celsius * 1.8) + 32.0);
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;
    char type1, type2, type3;
    char grindSize1, grindSize2, grindSize3;
    char cream1, cream2, cream3;
    int bagWeight1, bagWeight2, bagWeight3;
    double idealTempC1, idealTempC2, idealTempC3;
    char strength;
    char cream;
    int servings;
    char maker;

    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");
    printf("Enter the coffee product information being sold today...\n\n");


    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &type1);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &grindSize1);
    printf("Bag weight (g): ");
    scanf("%d", &bagWeight1);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream1);
    printf("Ideal serving temperature (Celsius): ");
    scanf("%lf", &idealTempC1);

    printf("\n\nCOFFEE-2...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &type2);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &grindSize2);
    printf("Bag weight (g): ");
    scanf("%d", &bagWeight2);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream2);
    printf("Ideal serving temperature (Celsius): ");
    scanf("%lf", &idealTempC2);

    printf("\n\nCOFFEE-3...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &type3);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &grindSize3);
    printf("Bag weight (g): ");
    scanf("%d", &bagWeight3);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream3);
    printf("Ideal serving temperature (Celsius): ");
    scanf("%lf", &idealTempC3);

    printf("\n\n");

    printf("---+---------------+---------------+---------------+-------+--------------\n");
    printf("   |    Coffee     |    Coffee     |   Packaged    | Best  | Serving\n");
    printf("   |     Type      |  Grind Size   |  Bag Weight   | Served| Temperature\n");
    printf("   +---------------+---------------+---------------+ With  +--------------\n");
    printf("ID | Light | Blend | Course | Fine |  (G) | Lbs    | Cream |   (C) |   (F)\n");
    printf("---+---------------+---------------+---------------+-------+--------------\n");
    printf(" 1 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n",
    (type1 == 'L' || type1 == 'l'), (type1 == 'B' || type1 == 'b'),
    (grindSize1 == 'C' || grindSize1 == 'c'), (grindSize1 == 'F' || grindSize1 == 'f'),
    bagWeight1, (bagWeight1 / GRAMS_IN_LBS), (cream1 == 'Y' || cream1 == 'y')
    , idealTempC1, ((idealTempC1 * 1.8) + 32.0));

    printf(" 2 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n",
    (type2 == 'L' || type2 == 'l'), (type2 == 'B' || type2 == 'b'),
    (grindSize2 == 'C' || grindSize2 == 'c'), (grindSize2 == 'F' || grindSize2 == 'f'),
    bagWeight2, (bagWeight2 / GRAMS_IN_LBS), (cream2 == 'Y' || cream2 == 'y')
    , idealTempC2, ((idealTempC2 * 1.8) + 32.0));

    printf(" 3 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n",
    (type3 == 'L' || type3 == 'l'), (type3 == 'B' || type3 == 'b'),
    (grindSize3 == 'C' || grindSize3 == 'c'), (grindSize3 == 'F' || grindSize3 == 'f'),
    bagWeight3, (bagWeight3 / GRAMS_IN_LBS), (cream3 == 'Y' || cream3 == 'y')
    , idealTempC3, ((idealTempC3 * 1.8) + 32.0));

    printf("\n\nEnter how you like your coffee and the coffee maker equipment you use...\n\n");

    printf("Coffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &strength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream);
    printf("Typical number of daily servings: ");
    scanf("%d", &servings);
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &maker);

    printf("\n\nThe below table shows how your preferences align to the available products:\n\n");

    printf("--------------------+--------------------+-------------+-------+--------------\n");
    printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
    printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
    printf("--+-----------------+--------------------+-------------+-------+--------------\n");
    printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n",
    (((strength == 'M' || strength == 'm') && (type1 == 'L' || type1 == 'l') || 
      (strength == 'R' || strength == 'r') && (type1 == 'B' || type1 == 'b'))),
    (((maker == 'R' || maker == 'r') && (grindSize1 == 'C' || grindSize1 == 'c') ||
      (maker == 'C' || maker == 'c') && (grindSize1 == 'F' || grindSize1 == 'f'))),
    (((servings >= 1 && servings <= 4) && (bagWeight1 >= 0 && bagWeight1 <= 250)) || 
     ((servings >= 5 && servings <= 9) && bagWeight1 == 500) || 
     (servings >= 10 && bagWeight1 == 1000)),
    (((cream == 'Y' || cream == 'y') && (cream1 == 'Y' || cream1 == 'y') ||
      (cream == 'N' || cream == 'n') && (cream1 == 'N' || cream1 == 'n'))),
    ((maker=='R'||maker=='r') && (idealTempC1 >= 60.0 && idealTempC1 <= 69.9)) || 
    ((maker=='C'||maker=='c') && (idealTempC1 >= 70.0)));

    printf(" 2|       %d         |         %d          |      %d      |   %d   |      %d\n",
    (((strength == 'M' || strength == 'm') && (type2 == 'L' || type2 == 'l') || 
      (strength == 'R' || strength == 'r') && (type2 == 'B' || type2 == 'b'))),
    (((maker == 'R' || maker == 'r') && (grindSize2 == 'C' || grindSize2 == 'c') ||
      (maker == 'C' || maker == 'c') && (grindSize2 == 'F' || grindSize2 == 'f'))),
    (((servings >= 1 && servings <= 4) && (bagWeight2 >= 0 && bagWeight2 <= 250)) || 
     ((servings >= 5 && servings <= 9) && bagWeight2 == 500) || 
     (servings >= 10 && bagWeight2 == 1000)),
    (((cream == 'Y' || cream == 'y') && (cream2 == 'Y' || cream2 == 'y') ||
      (cream == 'N' || cream == 'n') && (cream2 == 'N' || cream2 == 'n'))),
    ((maker=='R'||maker=='r') && (idealTempC2 >= 60.0 && idealTempC2 <= 69.9)) || 
    ((maker=='C'||maker=='c') && (idealTempC2 >= 70.0)));

    printf(" 3|       %d         |         %d          |      %d      |   %d   |      %d\n",
    (((strength == 'M' || strength == 'm') && (type3 == 'L' || type3 == 'l') || 
      (strength == 'R' || strength == 'r') && (type3 == 'B' || type3 == 'b'))),
    (((maker == 'R' || maker == 'r') && (grindSize3 == 'C' || grindSize3 == 'c') ||
      (maker == 'C' || maker == 'c') && (grindSize3 == 'F' || grindSize3 == 'f'))),
    (((servings >= 1 && servings <= 4) && (bagWeight3 >= 0 && bagWeight3 <= 250)) || 
     ((servings >= 5 && servings <= 9) && bagWeight3 == 500) || 
     (servings >= 10 && bagWeight3 == 1000)),
    (((cream == 'Y' || cream == 'y') && (cream3 == 'Y' || cream3 == 'y') ||
      (cream == 'N' || cream == 'n') && (cream3 == 'N' || cream3 == 'n'))),
    ((maker=='R'||maker=='r') && (idealTempC3 >= 60.0 && idealTempC3 <= 69.9)) || 
    ((maker=='C'||maker=='c') && (idealTempC3 >= 70.0)));

    printf("\n\nEnter how you like your coffee and the coffee maker equipment you use...\n\n");
    printf("Coffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &strength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream);
    printf("Typical number of daily servings: ");
    scanf("%d", &servings);
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &maker);

    printf("\n\nThe below table shows how your preferences align to the available products:\n\n");
    printf("--------------------+--------------------+-------------+-------+--------------\n");
    printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
    printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
    printf("--+-----------------+--------------------+-------------+-------+--------------\n");
    printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n",
    (((strength == 'M' || strength == 'm') && (type1 == 'L' || type1 == 'l') || 
      (strength == 'R' || strength == 'r') && (type1 == 'B' || type1 == 'b'))),
    (((maker == 'R' || maker == 'r') && (grindSize1 == 'C' || grindSize1 == 'c') ||
      (maker == 'C' || maker == 'c') && (grindSize1 == 'F' || grindSize1 == 'f'))),
    (((servings >= 1 && servings <= 4) && (bagWeight1 >= 0 && bagWeight1 <= 250)) || 
     ((servings >= 5 && servings <= 9) && bagWeight1 == 500) || 
     (servings >= 10 && bagWeight1 == 1000)),
    (((cream == 'Y' || cream == 'y') && (cream1 == 'Y' || cream1 == 'y') ||
      (cream == 'N' || cream == 'n') && (cream1 == 'N' || cream1 == 'n'))),
    ((maker=='R'||maker=='r') && (idealTempC1 >= 60.0 && idealTempC1 <= 69.9)) || 
    ((maker=='C'||maker=='c') && (idealTempC1 >= 70.0)));

    printf(" 2|       %d         |         %d          |      %d      |   %d   |      %d\n",
    (((strength == 'M' || strength == 'm') && (type2 == 'L' || type2 == 'l') || 
      (strength == 'R' || strength == 'r') && (type2 == 'B' || type2 == 'b'))),
    (((maker == 'R' || maker == 'r') && (grindSize2 == 'C' || grindSize2 == 'c') ||
      (maker == 'C' || maker == 'c') && (grindSize2 == 'F' || grindSize2 == 'f'))),
    (((servings >= 1 && servings <= 4) && (bagWeight2 >= 0 && bagWeight2 <= 250)) || 
     ((servings >= 5 && servings <= 9) && bagWeight2 == 500) || 
     (servings >= 10 && bagWeight2 == 1000)),
    (((cream == 'Y' || cream == 'y') && (cream2 == 'Y' || cream2 == 'y') ||
      (cream == 'N' || cream == 'n') && (cream2 == 'N' || cream2 == 'n'))),
    ((maker=='R'||maker=='r') && (idealTempC2 >= 60.0 && idealTempC2 <= 69.9)) || 
    ((maker=='C'||maker=='c') && (idealTempC2 >= 70.0)));

    printf(" 3|       %d         |         %d          |      %d      |   %d   |      %d\n",
    (((strength == 'M' || strength == 'm') && (type3 == 'L' || type3 == 'l') || 
      (strength == 'R' || strength == 'r') && (type3 == 'B' || type3 == 'b'))),
    (((maker == 'R' || maker == 'r') && (grindSize3 == 'C' || grindSize3 == 'c') ||
      (maker == 'C' || maker == 'c') && (grindSize3 == 'F' || grindSize3 == 'f'))),
    (((servings >= 1 && servings <= 4) && (bagWeight3 >= 0 && bagWeight3 <= 250)) || 
     ((servings >= 5 && servings <= 9) && bagWeight3 == 500) || 
     (servings >= 10 && bagWeight3 == 1000)),
    (((cream == 'Y' || cream == 'y') && (cream3 == 'Y' || cream3 == 'y') ||
      (cream == 'N' || cream == 'n') && (cream3 == 'N' || cream3 == 'n'))),
    ((maker=='R'||maker=='r') && (idealTempC3 >= 60.0 && idealTempC3 <= 69.9)) || 
    ((maker=='C'||maker=='c') && (idealTempC3 >= 70.0)));

    printf("\n\nHope you found a product that suits your likes!\n\n");
    return 0;
}
