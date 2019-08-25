
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"


// Get and store from standard input the values for Name
// Put your code here that defines the Contact getName function:

void getName(struct Name* a) {
	printf("Please enter the contact's first name: ");
	scanf("%s", (*a).firstName);
	//scanf("%s", a->firstName);    arrow notation, equal 

	char answer;
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &answer);

	switch (answer) {
	case 'Y':
	case 'y':
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %s", (*a).middleInitial);
		break;
	default:
		printf("\n");
		/*case 'N':
		case 'n':
		printf("\n");
		break;*/
	}

	printf("Please enter the contact’s last name: ");
	scanf("%35s", (*a).lastName);
};


// Get and store from standard input the values for Address
// Put your code here that defines the Contact getAddress function:
void getAddress(struct Address* b) {
	printf("Please enter the contact’s street number: ");
	scanf("%d", &(*b).streetNumber);
	printf("Please enter the contact’s street name: ");
	scanf("%40s", (*b).street);

	char answer;
	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &answer);

	switch (answer) {
	case 'Y':
	case 'y':
		printf("Please enter the contact’s apartment number: ");
		scanf("%d", &(*b).apartmentNumber);
		break;
	case 'N':
	case 'n':
		printf("\n");
		break;
	}
	printf("Please enter the contact’s postal code: ");
	scanf(" %[^\n]s", (*b).postalCode);
	printf("Please enter the contact’s city: ");
	scanf(" %35s", (*b).city);
};



// Get and store from standard input the values for Numbers
// Put your code here that defines the Contact getNumbers function:
void getNumbers(struct Numbers* c) {
	char answer;
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &answer);

	switch (answer) {
	case 'Y':
	case 'y':
		printf("Please enter the contact’s cell phone number: ");
		scanf(" %20s", (*c).cell);
		break;
	case 'N':
	case 'n':
		printf("\n");
		break;
	}

	printf("Do you want to enter a home phone number ? (y or n): ");
	scanf("%c", &answer);

	switch (answer) {
	case 'Y':
	case 'y':
		printf("Please enter the contact’s home phone number: ");
		scanf(" %20s", (*c).home);
		break;
	case 'N':
	case 'n':
		printf("\n");
		break;
	}

	printf("Do you want to enter a business phone number? (y or n): ");
	scanf("%c", &answer);

	switch (answer) {
	case 'Y':
	case 'y':
		printf("Please enter the contact’s business phone number: ");
		scanf(" %20s", (*c).business);
		break;
	case 'N':
	case 'n':
		printf("\n");
		break;
	}

};
