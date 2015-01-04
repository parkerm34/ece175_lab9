/*	Author: Parker Mathewson							*
 *	Date: 4/11/12									*
 *	Comments: Create a struct that holds student data for ID, 2 test grades, name, 	*
 *			which reads them from a file. Print out the struct.		*/

#include <stdio.h>

typedef struct
{
	char name[20];
	int student_id;
	int test[2];
}student_info_t;
							//_t for shortening work in long run.
void read_file(student_info_t *student, FILE *p)
{
		fscanf(p, "%s", student->name);
		fscanf(p, " %d", &student->student_id);
		fscanf(p, " %d", &student->test[0]);
		fscanf(p, " %d", &student->test[1]);
}

void print_file(student_info_t student)
{
	printf("Student name: %s\n", student.name);
	printf("Student id: %d\n", student.student_id);
	printf("Grades: Test 0: %d Test 1: %d\n", student.test[0], student.test[1]);
}

int main(void)
{
	student_info_t student_1;
	student_info_t student_2;
	FILE *input;
	input = fopen("data.txt", "r");

	if(input == NULL) printf("Error reading the file.");
	else
	{
		read_file(&student_1, input);
		read_file(&student_2, input);
		print_file(student_1);
		print_file(student_2);
	}
	return(0);
}
