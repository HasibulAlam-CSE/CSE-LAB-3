#include <stdio.h>
#include <stdlib.h>

#define MAX_FOODS 10

typedef struct {
    char name[50];
    float price;
    char review[100];
} Food;

void displayTeamName() {
    printf("   **     **  ******  ***    **   ******   ***    **                       \n");
    printf("    **   **   ******  ****   **  *      *  ****   **                        \n");
    printf("     ****        ***  *** *****  *      *  *** *****                         \n");
    printf("    **  **    ******  ***  ****  *      *  ***  ****                          \n");
    printf("   **    **   ******  ***   ***   ******   ***   ***                           \n");
    printf("\n");
}

void displayMenu(Food menu[], int numFoods) {
    printf("-------- MENU CARD --------\n");
    for (int i = 0; i < numFoods; i++) {
        printf("%d. %s\n", i + 1, menu[i].name);
        printf("   Price: $%.2f\n", menu[i].price);
        printf("   Review: %s\n", menu[i].review);
        printf("\n");
    }
    printf("----------------------------\n");
}

void processOrder(Food menu[], int numFoods, int choice) {
    if (choice >= 1 && choice <= numFoods) {
        printf("You have selected: %s\n", menu[choice - 1].name);
        printf("Price: $%.2f\n", menu[choice - 1].price);
        printf("Review: %s\n", menu[choice - 1].review);
    } else {
        printf("Invalid choice. Please select a valid food item.\n");
    }
}

int main() {
    Food menu[MAX_FOODS] = {
        {"Pasta", 10.99, "Delicious pasta with a rich sauce."},
        {"Burger", 8.99, "Juicy beef patty with fresh toppings."},
        {"Salad", 6.99, "Healthy mix of fresh vegetables and dressing."},
        {"Pizza", 12.99, "Thin crust pizza with a variety of toppings."},
        {"Steak", 16.99, "Tender steak cooked to perfection."},
    };
    int numFoods = 5;
    int choice;

    // Display the team name
    displayTeamName();

    // Display the menu card
    displayMenu(menu, numFoods);

    // Prompt user to select a food item
    printf("Please enter the number of the food item you would like to order: ");
    scanf("%d", &choice);

    // Process the order
    processOrder(menu, numFoods, choice);

    return 0;
}
