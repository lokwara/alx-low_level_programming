#include <stdio.h>
/**
 * main -Determines if a number is positive or negative
 *
 * Return:Always 0(Success)
 */
int main(void)
{
	char alp[52] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24 ; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}