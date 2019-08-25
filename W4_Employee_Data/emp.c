#include <stdio.h>
#define SIZE 4

struct Employee {
	int id;
	int age;
	double salary;
};


int main(void) {
	int n, a = 0, d, x, y, f;
	int new = SIZE;
	int option = 0;
	int enterid = 0;

	printf("---=== EMPLOYEE DATA ===---\n\n");

	struct Employee emp[SIZE] = { { 0 } };

	do {
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");
		scanf_s("%d", &option);
		printf("\n");

		switch (option) {
		case 0:
			printf("Exiting Employee Data Program. Good Bye!!!\n");
			break;

		case 1:
			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");

			int i;

			for (i = 0; i < new; i++) {
				if (emp[i].id < 0) {
					printf("\n");
				}

				printf("%6d%9d%11.2lf\n", emp[i].id, emp[i].age, emp[i].salary);
			}
			printf("\n");
			break;

		case 2:
			printf("Adding Employee\n");
			printf("===============\n");

			n = a;

			if (n > 3) {
				printf("ERROR!!! Maximum Number of Employees Reached\n\n");
				break;
			}

			printf("Enter Employee ID: ");
			scanf_s("%d", &emp[a].id);
			printf("Enter Employee Age: ");
			scanf_s("%d", &emp[a].age);
			printf("Enter Employee Salary: ");
			scanf_s("%lf", &emp[a].salary);
			printf("\n");
			a++;
			break;

		case 3:
			printf("Update Employee Information\n");
			printf("===========================\n");
			printf("Enter Employee ID: ");
			scanf_s("%d", &enterid);

			do {
				for (x = 0; x < SIZE; x++) {
					if (emp[x].id == enterid)
						d = x;
				}
			} while (d < 0 && d > SIZE);

			printf("The current salary is %.2lf\n", emp[d].salary);
			printf("Enter Employee New Salary: ");
			scanf_s("%lf", &emp[d].salary);
			printf("\n");
			break;


		case 4:
			printf("Remove Employee\n");
			printf("===============\n");
			printf("Enter Employee ID: ");
			scanf_s("%d", &enterid);
			printf("Employee %d will be removed\n\n", enterid);

			do {
				for (x = 0; x < SIZE; x++) {
					if (emp[x].id == enterid) {
						d = x;
						f = 1;
					}
				}
				if (f == 1) {
					for (y = d; y < SIZE - 1; y++) {
						emp[y].id = emp[y + 1].id;
						emp[y].age = emp[y + 1].age;
						emp[y].salary = emp[y + 1].salary;
					}
					new = SIZE - 1;
				}
			} while (d < 0 && d > SIZE);


			break;

		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}
	} while (option != 0);

	return 0;
}