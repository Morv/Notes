#include <stdio.h>
#include <stdlib.h>
#define pause system("pause")
#define flush fflush(stdin)

void changeIt(int a[]);
void displayArray(int a[]);
void changeIt2(int *a[]); //passing pointer to array... or (int *)(int *a)

main() {
	int array[50] = {0}; //create an array of zeros
	changeIt(array);
	displayArray(array);

	changeIt2(array);
	displayArray(array);

} // end main



void displayArray (int a[]) {
	printf("Array sub 0 is %i.\n", a[0]);
	printf("Array sub 1 is %i.\n", a[1]);
	pause;
} // end displayArray

void changeIt(int a[]) {
	a[0] = 5;
	a[1] = 99;

} // end changeIt

void changeIt2(int *a) { //a is the location of the value

	*a = 999; //this puts the zeroth element to 999.
	a++; //it knows to increment by 4 because its an int.
	*a = 888;
	return;
} // end changeIt2