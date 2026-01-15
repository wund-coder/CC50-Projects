#include <cs50.h>
#include <stdio.h>

int main()
{
	int n;
	do
	{
      printf("Altura: ");
      scanf("%d", &n);
	}
	 while (n<1 || n>8);

        for (int i = 0; i < n; i++)
     {
		for (int e = 0; e < n - 1 - i; e++)
	 {
		    printf(" ");
	 }
		for (int j = 0; j <= i; j++)
        {
    printf("#");
        }
    printf("  ");

     for (int j = 0; j <= i; j++)
    {
     printf("#");
    }
     printf("\n");
     }

		    return 0;
}
