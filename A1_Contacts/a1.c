
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"


int main(void)
{
	// Declare variables here:
	struct Name name = { { '\0' },{ '\0' },{ '\0' } };
	struct Address address = { 0,{ '\0' },0,{ '\0' },{ '\0' } };
	struct Numbers numbers = { { '\0' },{ '\0' },{ '\0' } };
	struct Contact contact = { { { '\0' },{ '\0' },{ '\0' } }, { 0,{ '\0' },0,{ '\0' },{ '\0' } }, { { '\0' },{ '\0' },{ '\0' } } };

	// Display the title
	printf("Contact Management System\n");
	printf("-------------------------\n");


	// Call the Contact function getName to store the values for the Name member

	getName(&contact.name);

	// Call the Contact function getAddress to store the values for the Address member

	getAddress(&contact.address);


	// Call the Contact function getNumbers to store the values for the Numbers member
	getNumbers(&contact.numbers);

	// Display Contact summary details
	printf("Contact Details\n");
	printf("---------------\n");
	printf("Name Details\n");
	printf("First name: %s\n", contact.name.firstName);


	//add contact. to make sure its inside the contact structure. 



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
	printf("Structure test for Contact using functions done!\n");

	return 0;
}
