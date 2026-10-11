
#include <stdio.h>

int main()
{
    int bookCode, age;
    char title[100];
    double originalPrice, resalePrice;

    printf("===============================================================\n");
    printf("              SECOND-HAND BOOK EXCHANGE\n");
    printf("===============================================================\n");

    printf("\nWelcome to Second-hand Book Exchange!\n\n");

    printf("---------------------- MENU ----------------------\n");
    printf("1. List a Book\n");
    printf("2. Quote a Resale Price\n");
    printf("3. Record a Sale\n");
    printf("4. Search by Title\n");
    printf("5. Stock Value Report\n");
    printf("6. Save & Load\n");

    printf("\n-------------------- BOOK RECORDS --------------------\n");

    printf("--------------------------------------------------------------------------------\n");
    printf("| Book Code | Title                 | Price (BDT) | Age | Grade | Sold       |\n");
    printf("--------------------------------------------------------------------------------\n");

    printf("| 1001      | Introduction to C     | 850.00      | 2   | 1     | No         |\n");
    printf("| 1002      | Data Structures       | 1200.00     | 1   | 2     | No         |\n");
    printf("| 1003      | Discrete Mathematics  | 950.00      | 3   | 3     | Yes        |\n");

    printf("--------------------------------------------------------------------------------\n");

    printf("\n========== ENTER BOOK INFORMATION ==========\n");

    printf("Enter book code: ");
    scanf("%4d", &bookCode);

    printf("Enter book title: ");
    scanf(" %99[^\n]", title);

    printf("Enter original price (BDT): ");
    scanf("%lf", &originalPrice);

    printf("Enter book age in years: ");
    scanf("%d", &age);

  

    printf("\n===============BOOK INFORMATION =====================================\n");
    printf("Book Code: %4d\n", bookCode);
    printf("Book Title: %s\n", title);
    printf("Original Price: %.2f BDT\n", originalPrice);
    printf("Age: %d years\n", age);

  if(age>6){resalePrice=originalPrice *(5.0/100);
   printf("Estimated Resale Price: %.2f BDT\n", resalePrice); }
else{ resalePrice = originalPrice * (1 - 0.15 * age);
    printf("Estimated Resale Price: %.2f BDT\n", resalePrice);}

    printf("\n======================================================================\n");

    return 0;
}
