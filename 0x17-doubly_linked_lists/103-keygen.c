#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	unsigned int i;
	size_t add, len;
	unsigned int j;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];
	for (i = 0, add = 0; i < len; i++)
		add += argv[1][i];
	p[1] = l[(add ^ 79) & 63];

	for (i = 0, j = 1; i < len; i++)
		j *= argv[1][i];
	p[2] = l[(j ^ 85) & 63];

	for (j = argv[1][0], i = 0; i < len; i++)
		if ((char)j <= argv[1][i])
			j = argv[1][i];
	srand(j ^ 14);
	p[3] = l[rand() & 63];

	for (j = 0, i = 0; i < len; i++)
		j += argv[1][i] * argv[1][i];
	p[4] = l[(j ^ 239) & 63];

	for (j = 0, i = 0; (char)i < argv[1][0]; i++)
		j = rand();
	p[5] = l[(j ^ 229) & 63];
	printf("%s\n", p);

	return (0);
}
