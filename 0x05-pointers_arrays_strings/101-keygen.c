#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
	char pswd[84];
	int i, sum, j, k;

	srand(time(0));

	while (sum < 2772)
	{
		pswd[i] = 33 + rand() % 94;
		sum += pswd[i++];
	}
	pswd[i] = '\0';

	if (sum != 2772)
	{
		j = (sum - 2772) / 2;
		k = j;
		if ((sum - 2772) % 2 != 0)
			j++;

		for (i = 0; pswd[i]; i++)
		{
			if (pswd[i] >= (33 + j))
			{
				pswd[i] -= j;
				break;
			}
			if (pswd[i] >= (33 + k))
			{
				pswd[i] -= k;
				break;
			}
		}
	}
	printf("%s\n", pswd);
	return (0);
}
