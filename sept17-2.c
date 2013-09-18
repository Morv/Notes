#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define pause system("pause")
/* NOTES ***************************
	strlen(string) returs length of string
	strcpy(string1, string2) copies string1 into string2
	strcmp(string1, string2) returns a negative number if 
	  "string compare"       the first string comes before the
							 second string.
							 returns a positive number if the
							 second string comes before the
							 first string
							 returns a zero if they are equal.

*/


void displayString(char message[], char name[]);
void displayLengthOfString(char n[]); //display the length of the string
void noSpaces (char *n[]);

main() {
	char name[51] = "Dennis Hunchuck"; //50 characters and a null.  String notation is double quote

	strcpy(name, "Willie Mays is great YEAH");

	displayString("My name is: ", name); //passing in a literal string and the array called name
	displayLengthOfString(name);
	printf("From Main the length is %i.\n", strlen(name));
	noSpaces(name);

	pause;
} //end of main

void displayString(char message[], char name[]) {
	printf("%s %s\n", message, name);
	pause;
} //end displayString

void displayLengthOfString(char n[]) {
	
	int length = 0;

	while (n[length] != '\0' ) {
		length++;
	} // end while

	printf("The length of the string is %i.\n", length);
	pause;
} //end display length of the string

void noSpaces(char *n) { //this is not afunction in string.h
	while (*n != '\0') { //looking for the end of the string
	  if (*n != ' ') //looking for blanks
		putchar(*n); //puts or displays a char to the screen
	  n++; //increment the counter
	} // end while
	printf("\n");
} //end nospace