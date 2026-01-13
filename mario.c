/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
		for (int j = 0; j <= i; j++)
    {
    printf("#");
    }
    printf("\n");
}
		    return 0;
}
		
	