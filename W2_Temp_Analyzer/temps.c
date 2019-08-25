#include<stdio.h>
#define NUM 4
int main(void)
{
	int high, low, i, total = 0;
	int highest = -41, lowest = 41;
	int h = -1, l = -6, b, c;
	double mean;

	printf("---=== IPC Temperature Analyzer ===---");

	for (i = 1; i <= NUM; i++) {
		printf("\nEnter the high value for day %d: ", i);
		scanf_s("%d", &high);
		printf("\nEnter the low value for day %d: ", i);
		scanf_s("%d", &low);

		while (high <= low || -40 > high || high > 40 || -40 > low || low > 40) {
			printf("\nIncorrect values, temperatures must be in the range -40 to 40,"
				" high must be greater than low.\n");
			printf("\nEnter the high value for day %d: ", i);
			scanf_s("%d", &high);
			printf("\nEnter the low value for day %d: ", i);
			scanf_s("%d", &low);
		}

		if (high > highest) {
			highest = high;
			h = i;
		}

		if (low < lowest) {
			lowest = low;
			l = i;
		}


		total += (high + low);
	}

	mean = (double)total / (2 * NUM);
	printf("\nThe average (mean) temperature was: %.2lf\n", mean);
	printf("The highest temperature was %d, on day %d\n", highest, h);
	printf("The lowest temperature was %d, on day %d\n", lowest, l);

	return 0;
}