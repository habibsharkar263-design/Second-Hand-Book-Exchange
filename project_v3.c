#include <stdio.h>

/* Global Variables */
int bookCode, age;
double originalPrice, resalePrice;

/* Function Prototypes */
void displayBanner(void);
void displayMenu(void);
void readRecord(void);
double calculatePrice(double price, int bookAge);
void displayRecord(void);

int main(void)
{
    displayBanner();
    displayMenu();
    readRecord();
    resalePrice = calculatePrice(originalPrice, age);
    displayRecord();
    return 0;
}

void displayBanner(void)
{
    printf("===============================================================\n");
    printf("              SECOND-HAND BOOK EXCHANGE\n");
    printf("===============================================================\n");
    printf("\nWelcome to Second-hand Book Exchange!\n\n");
}

void displayMenu(void)
{
    printf("---------------------- MENU ----------------------\n");
    printf("1. List a Book\n");
    printf("2. Quote a Resale Price\n");
    printf("3. Record a Sale\n");
    printf("4. Search by Title\n");
    printf("5. Stock Value Report\n");
    printf("6. Save & Load\n");
}

void readRecord(void)
{
    printf("\n========== ENTER BOOK INFORMATION ==========\n");

    printf("Enter book code: ");
    scanf("%d", &bookCode);

    printf("Enter original price (BDT): ");
    scanf("%lf", &originalPrice);

    printf("Enter book age in years: ");
    scanf("%d", &age);
}

double calculatePrice(double price, int bookAge)
{
    return price * (1 - 0.15 * bookAge);
}

void displayRecord(void)
{
    printf("\n========== BOOK INFORMATION ==========\n");

    printf("Book Code: %d\n", bookCode);
    printf("Original Price: %.2f BDT\n", originalPrice);
   ç

    printf("======================================\n");
}
