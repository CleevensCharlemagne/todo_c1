// C program for the above approach
#include <stdio.h>
#include <stdlib.h>

// Renaming structure to avoid the
// repetitive use of struct keyword
typedef struct ToDo todo;

// Declaration of structure
struct ToDo {
	// char array as data part
	char buffer[101];

	// Pointer part to access addresses
	todo* next;

	// Count variable for counting
	// the number of nodes
	int count;
};


// Declare start pointer as null in
// the beginning
todo* start = NULL;

// Driver Code
int main()
{
	int choice;
	interface();

	while (1) {

		// Change console color and
		// text color
		system("Color 3F");

		// Clear the console
		system("cls");

		printf("1. To see your ToDo list\n");
		printf("2. To create new ToDo\n");
		printf("3. To delete your ToDo\n");
		printf("4. Exit");
		printf("\n\n\nEnter your choice\t:\t");

		// Choice from the user
		scanf("%d", &choice);

		switch (choice) {

		// Calling functions defined
		// below as per the user input
		case 1:
			seetodo();
			break;
		case 2:
			createtodo();
			break;
		case 3:
			deletetodo();
			break;
		case 4:
			exit(1);
			break;
		default:
			printf("\nInvalid Choice :-(\n");
			system("pause");
		}
	}
	return 0;
}

// Code for Splash screen
void interface()
{
	system("color 4F");
	printf("\n\n\n\n");
	printf("\t~~~~~~~~~~~~~~~~~~~~~"
		"~~~~~~~~~~~~~~~~~~~~~~~~"
		"~~~~~~~~~~~~~~~~~~~~~~~~"
		"~~~~~~~~~~~~~~~~~~~~~~~"
		"~~~~~~~~~~\n");
	printf("\t~~~~~~~~~~~~~~~~~~~~~~"
		"~~~~~~~~~~~~~~~~~~~~~~~"
		"~~~~~~~~~~~~~~~~~~~~~~~"
		"~~~~~~~~~~~~~~~~~~~~~~~~"
		"~~~~~~~~~~\n\n");
	printf("\t} : } : } : } : } : } "
		": } : } : } : "
		"WELCOME TO the TODO APP "
		"	 : { : { : { : { : { "
		": { : { : { : {\n\n");
	printf("\t~~~~~~~~~~~~~~~~~~~~~"
		"~~~~~~~~~~~~~~~~~~~~~~~~"
		"~~~~~~~~~~~~~~~~~~~~~~~~~"
		"~~~~~~~~~~~~~~~~~~~~~~"
		"~~~~~~~~~~\n");
	printf("\t~~~~~~~~~~~~~~~~~~~~~~"
		"~~~~~~~~~~~~~~~~~~~~~~~"
		"~~~~~~~~~~~~~~~~~~~~~~~"
		"~~~~~~~~~~~~~~~~~~~~~~~~"
		"~~~~~~~~~~\n");
	printf("\n\n\n\t\t\t\t\t\t\t\"
		"t\t\t\t	 "
		"@Sushant_Gaurav\n\n\n\n"
		"\n\n\n\t");

	// Pausing screen until user
	// presses any key
	system("pause");
}

// To view all the todos
void seetodo()
{
	// Clearing the console
	system("cls");

	// Pointer to the node for traversal
	todo* temp;

	// temp is made to point the
	// start of linked list
	temp = start;


	}

	printf("\n\n\n");
	system("pause");
}

