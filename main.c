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

