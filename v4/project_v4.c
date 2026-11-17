
#include <stdio.h>

// Global variables
int bookCode, age, conditionGrade, sold;
int bookEntered = 0;
int choice;

int bookCount = 0;

double originalPrice, conditionFactor, resalePrice;
double grandTotal = 0.0;

// Function prototypes
void displayBanner();
void displayMenu();
void inputBook();
void displayBook();
void showCondition();
double getConditionFactor();
double computeResalePrice();

int main()
{
    displayBanner();

    do
    {
        displayMenu();

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                inputBook();

                if (bookEntered == 1)
                {
                    resalePrice = computeResalePrice();
                    grandTotal = grandTotal + resalePrice;
                    bookCount++;
                }
                break;

            case 2:
                if (bookEntered == 1)
                {
                    resalePrice = computeResalePrice();

                    printf("\nResale Price: %.2lf BDT\n", resalePrice);
                    displayBook();
                }
                else
                {
                    printf("\nPlease list a book first.\n");
                }
                break;

            case 3:
                if (bookEntered == 1)
                {
                    if (sold == 0)
                    {
                        sold = 1;
                        printf("\nSale recorded successfully!\n");
                    }
                    else
                    {
                        printf("\nThis book has already been sold.\n");
                    }
                }
                else
                {
                    printf("\nPlease list a book first.\n");
                }
                break;

            case 4:
                printf("\nTitle search will be implemented in V5.\n");
                break;

            case 5:
                printf("\n---------- STOCK VALUE REPORT ----------\n");
                printf("Total Books Entered: %d\n", bookCount);
                printf("Running Total: %.2lf BDT\n", grandTotal);
                break;

            case 6:
                printf("\nSave and Load will be implemented in V5.\n");
                break;

            case 7:
                printf("\nThank you for using our system!\n");
                break;

            default:
                printf("\nInvalid choice! Please choose 1-7.\n");
        }

    } while (choice != 7);

    return 0;
}

// Displays project banner
void displayBanner()
{
    printf("\n====================================\n");
    printf("     SECOND-HAND BOOK EXCHANGE\n");
    printf("====================================\n");
}

// Displays menu
void displayMenu()
{
    printf("\n1. List a Book\n");
    printf("2. Quote a Resale Price\n");
    printf("3. Record a Sale\n");
    printf("4. Search by Title\n");
    printf("5. Stock Value Report\n");
    printf("6. Save & Load\n");
    printf("7. Exit\n");
}

// Takes book information
void inputBook()
{
    bookEntered = 0;

    printf("\nEnter Book Code: ");
    scanf("%d", &bookCode);

    if (bookCode <= 0)
    {
        printf("Invalid book code!\n");
        return;
    }

    printf("Enter Original Price: ");
    scanf("%lf", &originalPrice);

    if (originalPrice <= 0)
    {
        printf("Invalid price!\n");
        return;
    }

    printf("Enter Book Age: ");
    scanf("%d", &age);

    if (age < 0)
    {
        printf("Book age cannot be negative!\n");
        return;
    }

    printf("Enter Condition Grade (1-3): ");
    scanf("%d", &conditionGrade);

    if (conditionGrade < 1 || conditionGrade > 3)
    {
        printf("Invalid condition grade!\n");
        return;
    }

    showCondition();

    conditionFactor = getConditionFactor();

    sold = 0;
    bookEntered = 1;

    printf("\nBook listed successfully!\n");
}

// Calculates condition factor automatically
double getConditionFactor()
{
    double factor;

    switch (conditionGrade)
    {
        case 1:
            factor = 1.00;
            break;

        case 2:
            factor = 0.80;
            break;

        case 3:
            factor = 0.60;
            break;

        default:
            factor = 0;
    }

    return factor;
}

// Calculates resale price
double computeResalePrice()
{
    double price;

    if (age > 6)
    {
        price = originalPrice * 0.05;
    }
    else
    {
        price = originalPrice * (1 - 0.15 * age);
    }

    price = price * conditionFactor;

    if (price < 0)
    {
        price = 0;
    }

    return price;
}

// Displays book information
void displayBook()
{
    printf("\n---------- BOOK INFORMATION ----------\n");

    printf("Book Code: %d\n", bookCode);
    printf("Original Price: %.2lf BDT\n", originalPrice);
    printf("Age: %d years\n", age);
    printf("Condition Grade: %d\n", conditionGrade);
    printf("Condition Factor: %.2lf\n", conditionFactor);

    if (sold == 1)
    {
        printf("Sold: Yes\n");
    }
    else
    {
        printf("Sold: No\n");
    }
}

// Displays condition using selection ladder
void showCondition()
{
    if (conditionGrade == 1)
    {
        printf("Condition: Excellent\n");
    }
    else if (conditionGrade == 2)
    {
        printf("Condition: Good\n");
    }
    else if (conditionGrade == 3)
    {
        printf("Condition: Poor\n");
    }
}
