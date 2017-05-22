#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE* file = fopen("file.txt", "r");
	int n, m, k;
	fscanf(file, "%d %d %d", &n, &m, &k);
	
	double a[8][12];
	int i, j;
	for (i = 0; i < 8; i++)
		for (j = 0; j < 12; j++)
			fscanf(file, "%lf", &a[i][j]);
		
	double b[12][5];
	for (i = 0; i < 12; i++)
		for (j = 0; j < 5; j++)
			fscanf(file, "%lf", &b[i][j]);
		
	double c[5];
	for (i = 0; i < 5; i++)
		fscanf(file, "%lf", &c[i]);
	
	double arr[8][5];
	for (i = 0; i < 8; i++)
		for (j = 0; j < 5; j++)
		{
			arr[i][j] = 0;
			int h;
			for (h = 0; h < 12; h++)
				arr[i][j] += a[i][h] * b[h][j];			
		}
		

	double arr2[8];
	
	for (i = 0; i < 8; i++)
	{
		arr2[i] = 0;
		int h;
		for (h = 0; h < 5; h++)
			arr2[i] += arr[i][h] * c[h];
	}
	
	for (i = 0; i < 8; i++)
		printf("%lf\n", arr2[i]);

	return 0;
}





















