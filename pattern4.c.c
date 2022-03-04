

#include <stdio.h>

int
main ()
{
  int x, space, star, row, n;

  printf ("enter a number");
  scanf ("%d", &n);
  x = n + 3;
  for (row = 1; row <= n; row++)
    {
      for (space = 1; space <= row - 1; space++)
	printf (" ");
      for (star = 1; star <= x; star++)
	printf ("*");
      printf ("\n");
      x = x - 2;
    }

  return 0;
}
