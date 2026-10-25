
#include <stdio.h>

int main(void)
{
    int bookCode, age, conditionGrade, sold;
    char title[100];
    double originalPrice, conditionFactor, resalePrice;

    printf("============================================\n");
    printf("       SECOND-HAND BOOK EXCHANGE\n");
    printf("============================================\n");
    printf("Welcome to Second-hand Book Exchange!\n\n");

    printf("1. List a Book\n");
    printf("2. Quote a Resale Price\n");
    printf("3. Record a Sale\n");
    printf("4. Search by Title\n");
    printf("5. Stock Value Report\n");
    printf("6. Save & Load\n\n");

    printf("Enter Book Code: ");
    scanf("%d", &bookCode);

    printf("Enter Book Title: ");
    scanf(" %99[^\n]", title);

    printf("Enter Original Price (BDT): ");
    scanf("%lf", &originalPrice);

    printf("Enter Age in Years: ");
    scanf("%d", &age);

    printf("Enter Condition Grade (1-3): ");
    scanf("%d", &conditionGrade);

    printf("Enter Condition Factor: ");
    scanf("%lf", &conditionFactor);

    printf("Enter Sold Status (0 = No, 1 = Yes): ");
    scanf("%d", &sold);

    resalePrice = originalPrice
                  * (1 - 0.15 * age)
                  * conditionFactor;

    printf("\n============================================\n");
    printf("             BOOK RECORD\n");
    printf("============================================\n");

    printf("Book Code       : %d\n", bookCode);
    printf("Title           : %s\n", title);
    printf("Original Price  : %.2f BDT\n", originalPrice);
    printf("Age             : %d years\n", age);
    printf("Condition Grade : %d\n", conditionGrade);
    printf("Condition Factor: %.2f\n", conditionFactor);
    printf("Resale Price    : %.2f BDT\n", resalePrice);
    printf("Sold            : %s\n", sold == 1 ? "Yes" : "No");

    return 0;
}
