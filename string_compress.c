#define BUFSIZE 100
#include <stdio.h>
void strcompress(char* input, char* output);
void strdecompress(char* input, char* output);
int main() {
	char str[] = "BBBBBBBBbbbbbbaaacdddeeeeee";
	char comp[BUFSIZE] = { 0 };
	char decomp[BUFSIZE] = { 0 };
	strcompress(str, comp);
	printf("Compress: %s\n", comp);
	// Compress: 8B6b3ac3d6e
	strdecompress(comp, decomp);
	printf("Decompress: %s\n", decomp);
	// Decompress: BBBBBBBBbbbbbbaaacdddeeeeee
	return 0;
}

void strcompress(char* input, char* output) {
	int i = 1;
	while (*input != 0)
	{
		if (*input == *(input + 1))
			i++;

		else
		{
			if (i == 1)
			{
				*output++ = *input;
				i = 1;
			}

			else if (i >= 2)
			{
				*output++ = '0' + i;
				*output++ = *input;
				i = 1;
			}
		}
		input++;
	}
}

void strdecompress(char* input, char* output)
{
	while (*input != 0)
	{
		if ('2' <= *input && *input <= '9') {
			for (int i = *input - '0'; i > 0; i--)
			{
				*output++ = *(input + 1);
			}
			input += 2;
		}

		else if ('a' <= *input && *input <= 'z' || 'A' <= *input && *input <= 'Z')
			*output++ = *input++;

		else input++;
	}
}
