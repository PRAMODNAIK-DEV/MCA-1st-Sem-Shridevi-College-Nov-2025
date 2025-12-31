#include <stdio.h>

int main()
{
    char name[50];
    int units;
    double charge = 0;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 200)
        charge = units * 0.80;
    else if (units <= 300)
        charge = 200 * 0.80 + (units - 200) * 0.90;
    else
        charge = 200 * 0.80 + 100 * 0.90 + (units - 300) * 1.0;

    charge += 100; // Meter charge

    if (charge > 400)
        charge += 0.15 * charge; // Surcharge

    printf("%s, your total electricity charge is Rs. %.2lf\n", name, charge);
    return 0;
}
