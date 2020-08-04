#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	do
	{

		printf("How big shall your 1D array be?\n");
		float n = 0;
		scanf_s("%f", &n);
		float* A = malloc(n * sizeof(float));

		if (A == 0)
			printf("wrong input!\n");

		int teiler = n;
		float less = 123.0;
		float higher = 456.0;
		float middle = 999.0;

		if (teiler % 2 == 0)
		{
			for (int i = 0; i < (teiler / 2); i++)
			{
				A[i] = less;
			}
			for (int i = 0; i < (teiler / 2); i++)
				printf("Array number #%d has the amount %f\n", i, A[i]);

			for (int i = (teiler / 2); i < teiler; i++)
			{
				A[i] = higher;
			}
			for (int i = (teiler / 2); i < teiler; i++)
				printf("Array number #%d has the amount %f\n", i, A[i]);
		}

		else
		{
			for (int i = 0; i < (teiler / 2); i++)
			{
				A[i] = less;
			}
			for (int i = 0; i < (teiler / 2); i++)
				printf("Array number #%d has the amount %f\n", i, A[i]);

			if (teiler / 2);
			{
				A[teiler / 2] = middle;
				printf("Array number #%d has the amount %f\n", (teiler / 2), A[teiler / 2]);
			}

			for (int i = (teiler / 2); i < teiler; i++)
			{
				A[i] = higher;
			}
			for (int i = ((teiler / 2) + 1); i < teiler; i++)
				printf("Array number #%d has the amount %f\n", i, A[i]);
		}

		printf("\n");
		free(A);

	} while (1);

		_getwch();
		return EXIT_SUCCESS;
}