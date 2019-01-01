#include <stdio.h>
#include <math.h>
int main (void)
{
	int a, b, c, d, e, i, temp;
	while ((scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e)) == 5)
	{
		if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0)
			break;
		else
			if (((b - a) == (c - b)) && ((c - b) == (d - c)) && ((d - c) == (e - d)))
			{
				printf ("case one\n");
				for (i = 1; i <= 5; i++)
					printf ("%d ", e + i * (b - a));
				printf ("\n");
			}
			if (((b / a) == (c / b)) && ((c / b) == (d / c)) && ((d / c) == (e / d)))
			{
				printf ("case two\n");
				for (i = 1; i <= 5; i++)
					printf ("%d ", e * (int)pow ((float)(b / a), i));
				printf ("\n");
			}
			if (c == (a + b) && d == (b + c) && e == (c + d))
			{
				printf ("case three\n");
				for (i = 1; i <= 5; i++)
				{
					printf ("%d ", d + e);
					temp = d;
					d = e;
					e = temp + e;
				}
				printf ("\n");
			}
	}
	return 0;
}
