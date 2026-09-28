#include <stdio.h>
int main() {   
    int distance, mileage, fuelprice, otherexpenses;
    float fuelrequired, totalcost;

    printf("Enter the total distance, vehicle mileage, fuel price, and other expenses: ");
    scanf("%d %d %d %d", &distance, &mileage, &fuelprice, &otherexpenses);
    
    fuelrequired = distance/mileage;
    totalcost = fuelrequired * fuelprice+otherexpenses;

    printf("Fuel required: %.2f liters\n Total cost: %.2f\n", fuelrequired, totalcost);
    return 0;
}
