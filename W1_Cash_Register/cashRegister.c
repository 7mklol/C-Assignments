

#include<stdio.h>
int main(void)
{
	int loonies, quarters, dimes, nickels, pennies;
	double total, amount, balance1, balance2, balance3, balance4, balance5;

	printf("Please enter the amount to be paid: $");
	scanf_s("%lf", &amount);

	total = amount * 1.13 + .005;
	printf("GST: 1.13\n");
	printf("Balance owing: $%.2lf\n", total);

	loonies = (int)total / 1;
	printf("Loonies required: %d", loonies);
	balance1 = (int)(total * 100) % 100;
	printf(", balance owing $%.2lf\n", (double)balance1 / 100);

	quarters = (int)balance1 / 25;
	printf("Quarters required: %d", quarters);
	balance2 = (int)balance1 % 25;
	printf(", balance owing $%.2lf\n", (double)balance2 / 100);

	dimes = (int)balance2 / 10;
	printf("Dimes required: %d", dimes);
	balance3 = (int)balance2 % 10;
	printf(", balance owing $%.2lf\n", (double)balance3 / 100);

	nickels = (int)balance3 / 5;
	printf("Nickels required: %d", nickels);
	balance4 = (int)balance3 % 5;
	printf(", balance owing $%.2lf\n", (double)balance4 / 100);

	pennies = (int)balance4 / 1;
	printf("Pennies required: %d", pennies);
	balance5 = (int)balance4 % 1;
	printf(", balance owing $%.2lf\n", (double)balance5 / 100);

	return 0;
}