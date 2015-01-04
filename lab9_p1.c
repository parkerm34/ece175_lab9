/*	Author: Parker Mathewson								*
 *	Date: 4/11/12										*
 *	Comments: This program is to print out a string in reverse using recursion.		*
 *			This will use a printf statement after the function is called again.	*/

#include <stdio.h>

int print_reverse(char *doctor_array)
{
	int counter=0;

	if(*doctor_array == '\0')
		return 0;
	else
		print_reverse((doctor_array+1));

	printf("%c", *doctor_array);
	return 0;
}

int main(void)
{
	char doctor_array[]="I'm a doctor, not a magician.";

	printf("%s\n", doctor_array);
	print_reverse(doctor_array);
	printf("\n");
	return 0;
}
