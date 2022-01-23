#include <stdio.h>

int is_pair_isogram(char str[]) {
	int count[26], k = 0, l = 0;

	for (int i = 0; str[i] != 0; i++)
	{
		l++;
		for (int j = i + 1; str[j] != 0; j++)
			if (str[i] == str[j])
				k++;
	}

	if ((double)l / k != 2.0)
		return 0;

	else if ((double)l / k == 2.0)
		return 1;
}

void main()
{
	char str[100];
	printf("Enter word: ");
	scanf("%s", str);
	if (is_pair_isogram(str))
		printf("%s is a pair isogram\n", str);
	else
		printf("%s is NOT a pair isogram\n", str);
}
