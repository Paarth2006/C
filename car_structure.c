#include <stdio.h>
struct Car {
    int carID;
    char model[50];
    float rentalRatePerDay;
};
int calculateTotalCost(struct Car cars[], int numCars, int numDays) {
    float totalCost = 0;
    for (int i = 0; i < numCars; i++) {
        totalCost += cars[i].rentalRatePerDay * numDays;
    }
    return totalCost;
}
int main() {
    int n; 
    int numDays;
    printf("\t\t*****INPUT*****\n");
    printf("Enter the number of cars: ");
    scanf("%d", &n);

    struct Car cars[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Car %d:\n", i + 1);
        printf("Car ID: ");
        scanf("%d", &cars[i].carID);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Rental Rate per day: ");
        scanf("%f", &cars[i].rentalRatePerDay);
    }

    printf("\nEnter the number of days for rental: ");
    scanf("%d", &numDays);

    float totalCost = calculateTotalCost(cars, n, numDays);
    printf("\t\t****OUTPUT****\n");
    printf("\nTotal rental cost for %d days: %f\n", numDays, totalCost);

    return 0;
}