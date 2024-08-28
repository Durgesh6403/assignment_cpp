#include <stdio.h>

 
struct Date 
{
    int day;
    int month;
    int year;
};
 
void initDate(struct Date* ptrDate)
 {
    ptrDate->day = 15;
    ptrDate->month = 06;
    ptrDate->year = 2001;
}

 
void printDateOnConsole(struct Date* ptrDate)
{
    printf("Date: %02d/%02d/%04d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}

 
void acceptDateFromConsole(struct Date* ptrDate)
 {
    printf("Enter day: ");
    scanf("%d", &ptrDate->day);
    printf("Enter month: ");
    scanf("%d", &ptrDate->month);
    printf("Enter year: ");
    scanf("%d", &ptrDate->year);
    printf("accepted date form console\n");
    printf("Date: %02d/%02d/%04d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}
 

int main() 
{
    struct Date myDate;
    int choice;

     

    do {
        
        printf("\nDate Management Menu:\n");
        printf("1. Initialize Date\n");
        printf("2. Print Date on Console\n");
        printf("3. Accept Date from Console\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        
        switch (choice) {
            case 1:
                initDate(&myDate);
                printf("Date has been initialized.\n");
                break;
            case 2:
                printDateOnConsole(&myDate);
                break;
            case 3:
                acceptDateFromConsole(&myDate);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.");
        }
    } while (choice != 4);

    return 0;
}
