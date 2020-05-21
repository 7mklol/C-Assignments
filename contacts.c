
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"
#include "contactHelpers.h"

// Get and store from standard input the values for Name
// Put your code here that defines the Contact getName function:
void getName(struct Name* a) {
	printf("Please enter the contact's first name: ");
	scanf("%s", (*a).firstName);
	//scanf("%s", a->firstName);    arrow notation, equal 
	clearKeyboard();
	int answer;
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	answer = yes();
	if (answer == 1) {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %s", (*a).middleInitial);
	}
	else {
		printf("\n");
	}
	printf("Please enter the contact's last name: ");
	scanf(" %35s", (*a).lastName);

};

// Get and store from standard input the values for Address
// Put your code here that defines the Contact getAddress function:
void getAddress(struct Address* b) {
	printf("Please enter the contact's street number: ");
	//scanf("%d", &(*b).streetNumber);
	(*b).streetNumber = getInt();
	printf("Please enter the contact's street name: ");
	scanf(" %[^\n]s", (*b).street);
	clearKeyboard();
	char answer;
	printf("Do you want to enter an apartment number? (y or n): ");
	answer = yes();
	if (answer == 1) {
		printf("Please enter the contact's apartment number: ");
		//scanf("%d", &(*b).apartmentNumber);
		(*b).apartmentNumber = getInt();
	}

	printf("Please enter the contact's postal code: ");
	scanf(" %[^\n]s", (*b).postalCode);
	printf("Please enter the contact's city: ");
	scanf(" %35s", (*b).city);
};

// Get and store from standard input the values for Numbers
// Put your code here that defines the Contact getNumbers function:
void getNumbers(struct Numbers* c) {

	char answer;
	printf("Please enter the contact's cell phone number: ");
	scanf(" %10s", (*c).cell);
	clearKeyboard();
	printf("Do you want to enter a home phone number? (y or n): ");

	answer = yes();
	if (answer == 1) {
		printf("Please enter the contact's home phone number: ");
		scanf(" %10s", (*c).home);
		clearKeyboard();
	}


	printf("Do you want to enter a business phone number? (y or n): ");
	answer = yes();
	if (answer == 1) {
		printf("Please enter the contact's business phone number: ");
		scanf(" %10s", (*c).business);
	}


};

// getContact:
void getContact(struct Contact* d) {
	getName(&(*d).name);
	getAddress(&(*d).address);
	getNumbers(&(*d).numbers);
};
