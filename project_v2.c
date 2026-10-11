
#include <stdio.h>

int main()
{
    int bookCode, age,conditionGrade;
    char title[100];
    double originalPrice, resalePrice,conditionFactor;

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

    printf("Enter condition grade (1-3): ");
    scanf("%d", &conditionGrade);

    printf("Enter original price (BDT): ");
    scanf("%lf", &originalPrice);

    printf("Enter book age in years: ");
    scanf("%d", &age);

    /*Condition Grad================Example factor
1	    Good-                         0.90
2	    Fair-	                      0.75
3	    Poor-                         0.60
*/


if (conditionGrade == 1)
{
    conditionFactor = 1.00;
}
else if (conditionGrade == 2)
{
    conditionFactor = 0.90;
}
else if (conditionGrade == 3)
{
    conditionFactor = 0.80;
}
else{conditionFactor =0.70;}

  

    printf("\n=====================BOOK INFORMATION =====================================\n");
    
    printf("%-22s :%d\n", "Book Code", bookCode);
    printf("%-22s :%s\n", "Book Title", title);
    printf("%-22s :%.2f BDT\n", "Original Price", originalPrice);
    printf("%-22s :%d years\n", "Age", age);

    if (age > 6)
    {
        resalePrice = originalPrice * (5.0 / 100) * conditionFactor;
    }
    else
    {
        resalePrice = originalPrice * (1 - 0.15 * age) * conditionFactor;
    }

    printf("%-22s :%.2f BDT\n", "Estimated Resale Price", resalePrice);

    printf("\n==========================================================================\n");

    return 0;
}
