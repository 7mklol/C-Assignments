
#include<stdio.h>
int main(void)
{
	//Getting number of days

	int n, i;
	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf_s("%d", &n);

	while (n < 3 || n > 10) {
		printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf_s("%d", &n);
	}

	printf("\n");
	int high[10], low[10];
	int highest = -100, lowest = 100, h = 0, l = 0;

	for (i = 0; i < n; i++) {

		printf("Day %d - High: ", (i + 1));
		scanf_s("%d", &high[i]);
		printf("Day %d - Low: ", (i + 1));
		scanf_s("%d", &low[i]);

		if (high[i] > highest) {
			highest = high[i];
			h = i;
		}

		if (low[i] < lowest) {
			lowest = low[i];
			l = i;
		}
	}

	printf("\n");
	printf("Day  Hi   Low\n");

	for (i = 0; i < n; i++) {
		printf("%d  %3d  %5d\n", (i + 1), high[i], low[i]);
	}

	printf("\nThe highest temperature was %d, on day %d\n", highest, (h + 1));
	printf("The lowest temperature was %d, on day %d\n", lowest, (l + 1));

	// different from in-lab part

	int a, num, total = 0;
	double ave = 0;

	do {
		printf("\nEnter a number between 1 and 4 to see the average temperature ");
		printf("for the entered number of days, enter a negative number to exit : ");
		scanf_s("%d", &num);

		if (num < 0) {
			printf("\nGood bye!\n");
			return 0;
		}


		else if (num == 0 || num > 4) {
			printf("\nInvalid entry, please enter a number between 1 and 4, inclusive: ");
			scanf_s("%d", &num);
		}

		for (a = 0; a < num; a++) {
			total += (high[a] + low[a]);
		}

		ave = (double)total / (2 * num);
		printf("\nThe average temperature up to day %d is: %.2lf\n", num, ave);

		total = 0;

	} while (0 < num && num < 5);

	return 0;
}