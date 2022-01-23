#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE* fp = NULL;
	
	char file_name[256];
	char buffer[256];
	char tword[256];
	char* p = NULL;
	int i = 0, j = 0;

	printf("Enter the file name and word: ");
	scanf("%s %s", file_name, tword);

	fp = fopen(file_name, "r");

	if (fp == NULL)
	{
		fprintf(stderr, "파일 %s를 열 수 없습니다.\n", file_name);
		exit(1);
	}

	while (!feof(fp))
	{
		fgets(buffer, sizeof(buffer), fp);
		p = strtok(buffer, " \n"); 
		
		while (p != NULL) {
			if (strcmp(p, tword) == 0)
				i++;
			p = strtok(NULL, " \n");
			j++;
		}
	}

	printf("The finding ratio : %d/%d", i, j);
	fclose(fp);
}
