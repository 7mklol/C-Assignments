
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contactHelpers.h"

//------------------------------------------------------
// Function Definitions
//------------------------------------------------------


// clearKeyboard:  Empty function definition 
void clearKeyboard(void)
{
	while (getchar() != '\n')
		;
};

// pause: Empty function definition goes here:
void pause(void)
{
	printf("(Press Enter to Continue)");
	clearKeyboard();
};


// getInt: Empty function definition goes here:
int getInt(void)
{
	int Value;
	char NL = 'x';

	while (NL != '\n') {
		scanf("%d%c", &Value, &NL);
		if (NL != '\n') {
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		}
	}
	return Value;
};


// getIntInRange: Empty function definition goes here:
int getIntInRange(int a, int b)
{
	int input = -1;
	while (input == -1 || input > b || input < a) {
		input = getInt();
		if (input > b || input < a) {
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", a, b);
			//scanf("%d", &input);
		}
	}
	return input;
};


// yes: Empty function definition goes here:
int yes(void)
{
	char y;
	char nl = 'x';
	int result = -1;

	while (nl != '\n' && result == -1) {
		scanf("%c%c", &y, &nl);

		if (nl != '\n') {
			clearKeyboard();
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		}

		else if (y == 'Y' || y == 'y') {
			result = 1;
		}

		else if (y == 'N' || y == 'n') {
			result = 0;
		}
	}
	return result;
};


// menu: Empty function definition goes here:
int menu(void)
{
	int option = -1;
	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n\n");
	printf("Select an option:> ");
	//scanf("%d", &option);
	option = getIntInRange(0, 6);


	return option;
};


// ContactManagerSystem: Empty function definition goes here:
void ContactManagerSystem(void)
{
	int done = 8;
	while (done != 7) {
		char exit = 'x';
		int x = menu();
		switch (x) {
		case 1:
			printf("\n<<< Feature 1 is unavailable >>>\n\n");
			pause();
			printf("\n");
			done = 8;
			break;
		case 2:
			printf("\n<<< Feature 2 is unavailable >>>\n\n");
			pause();
			printf("\n");
			done = 8;
			break;
		case 3:
			printf("\n<<< Feature 3 is unavailable >>>\n\n");
			pause();
			printf("\n");
			done = 8;
			break;
		case 4:
			printf("\n<<< Feature 4 is unavailable >>>\n\n");
			pause();
			printf("\n");
			done = 8;
			break;
		case 5:
			printf("\n<<< Feature 5 is unavailable >>>\n\n");
			pause();
			printf("\n");
			done = 8;
			break;
		case 6:
			printf("\n<<< Feature 6 is unavailable >>>\n\n");
			pause();
			printf("\n");
			done = 8;
			break;
		case 0:
			printf("\nExit the program? (Y)es/(N)o: ");
			scanf("%c", &exit);
			switch (exit) {
			case 'Y':
			case 'y':
				printf("\nContact Management System: terminated\n");
				return;
			case 'N':
			case 'n':
				done = 8;
				printf("\n");
				break;
			}
		}
	}
};