
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contacts.h"

int main(void)
{
	char answer;

	// Declare variables here:
	struct Name name = {{ 0 }};
	struct Address address = { 0,{'\0'},0,{'\0'},{'\0'}};
	struct Numbers numbers = {{'\0'},{'\0'},{ '\0' }};

	// Display the title
	printf("Contact Management System\n");
	printf("-------------------------\n");

	// Contact Name Input:
	printf("Please enter the contact's first name: ");
	scanf("%s", name.firstName);

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &answer);

	switch (answer) {
	case 'Y':
	case 'y':
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6s", name.middleInitial);
		break;
	case 'N':
	case 'n':
		printf("\n");
		break;
	}

	printf("Please enter the contact's last name: ");
	scanf("%35s", name.lastName);


	// Contact Address Input:
	printf("Please enter the contact's street number: ");
	scanf("%d", &address.streetNumber);
	printf("Please enter the contact's street name: ");
	scanf("%40s", address.street);

	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &answer);

	switch (answer) {
	case 'Y':
	case 'y':
		printf("Please enter the contact's apartment number: ");
		scanf("%d", &address.apartmentNumber);
		break;
	case 'N':
	case 'n':
		printf("\n");
		break;
	}

	printf("Please enter the contact's postal code: ");
	scanf(" %[^\n]s", address.postalCode);

	printf("Please enter the contact's city: ");
	scanf(" %s", address.city);


	// Contact Numbers Input:
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &answer);

	switch (answer) {
	case 'Y':
	case 'y':
		printf("Please enter the contact's cell phone number: ");
		scanf("%20s", numbers.cell);
		break;
	case 'N':
	case 'n':
		printf("\n");
		break;
	}

	printf("Do you want to enter a home phone number ? (y or n): ");
	scanf(" %c", &answer);

	switch (answer) {
	case 'Y':
	case 'y':
		printf("Please enter the contact's home phone number: ");
		scanf("%20s", numbers.home);
		break;
	case 'N':
	case 'n':
		printf("\n");
		break;
	}

	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &answer);

	switch (answer) {
	case 'Y':
	case 'y':
		printf("Please enter the contact's business phone number: ");
		scanf("%20s", numbers.business);
		break;
	case 'N':
	case 'n':
		printf("\n");
		break;
	}


	// Display Contact Summary Details
	printf("\nContact Details\n");
	printf("---------------\n");
	printf("Name Details\n");
	printf("First name: %s\n", name.firstName);
	printf("Middle initial(s): %s\n", name.middleInitial);
	printf("Last name: %s\n\n", name.lastName);
	printf("Address Details\n");
	printf("Street number: %d\n", address.streetNumber);
	printf("Street name: %s\n", address.street);
	printf("Apartment: %d\n", address.apartmentNumber);
	printf("Postal code: %s\n", address.postalCode);
	printf("City: %s\n\n", address.city);
	printf("Phone Numbers:\n");
	printf("Cell phone number: %s\n", numbers.cell);
	printf("Home phone number: %s\n", numbers.home);
	printf("Business phone number: %s\n\n", numbers.business);


	// Display Completion Message
	printf("Structure test for Name, Address, and Numbers Done!\n");

	return 0;
}

