#include<stdio.h>
#include<stdlib.h>
//obmenom
int main()
{
	int array[10] = { 4, 7, 2, 9, 3, 8, 5, 1, 6, 0 };
	int ind_sort = 0;
	int num = 0;
	for (int i = 0; i < 10; i++)
	{
		int min = ind_sort;
		for (int i2 = ind_sort; i2 < 10; i2++)
		{
			if (array[min] > array[i2])
			{
				min = i2;
			}
		}
		num = array[min];
		array[min] = array[i];
		array[i] = num;
		ind_sort++;
		for (int i1 = 0; i1 < 10; i1++)
		{
			printf("%d ", array[i1]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}