#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student {
	char name[80];
	int stdnum;
}Student[5];

int main()
{
	char* p;

	for (int i = 0; i < 5; i++)
	{
		printf("(%d) Enter student name / student number: ", i + 1);
		gets_s(Student[i].name);
		p = strtok(Student[i].name, "/");
		while (p != NULL)
		{
			Student[i].stdnum = atoi(p);
			p = strtok(NULL, "/");
			
		}
	}

	for (int i = 0; i < 5; i++)
		for (int j = i; j < 5; j++)
		{
			if (Student[i].stdnum > Student[j].stdnum)
			{
				int temp = Student[i].stdnum;
				Student[i].stdnum = Student[j].stdnum;
				Student[j].stdnum = temp;
			}
		}

	printf("\nID\t\tName\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d\t%s\n", Student[i].stdnum, Student[i].name);
	}

	printf("\n");
}
