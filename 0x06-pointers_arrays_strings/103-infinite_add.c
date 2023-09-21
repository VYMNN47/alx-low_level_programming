#include "main.h"

/**
 * infinite_add - adds two nums
 * @n1: first num
 * @n2: second num
 * @r: results: results lenght
 * Return: sum
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int g = 0, i = 0, v, z = 0, d, w, s = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[g] != '\0')
		g++;
	if (i > g)
		z = i;
	else
		z = g;
	if (z + 1 > size_r)
		return(0);
	r[1] = '\0';
	for (v = z - 1; v >= 0; v--)
	{
		i--;
		g--;
		if (i >= 0)
			d = n1[i] - '0';
		else
			d = 0;
		if (g >= 0)
			w = n2[g] - '0';
		else
			w = 0;
		r[v] = (w + s + d) % 10 + '0';
	}
	if (s == 1)
	{
		r[z + 1] = '\0';
		if (z + 2 > size_r)
			return (0);
		while (z-- >= 0)
			r[z + 1] = r[z];
		r[0] = s + '0';
	}
	return (r);
}
