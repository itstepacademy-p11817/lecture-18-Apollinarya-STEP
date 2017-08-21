#include<stdio.h>
#include<stdlib.h>
//puzyr'kom
main()
{
	int array[10] = { 4, 7, 2, 9, 3, 8, 5, 1, 6, 0 };
	int num = 0;
	for (int i1 = 0; i1 < 10; i1++)
	{
		int move = 0;
		for (int i = 0; i <= 8; i++)
		{
			if (array[i] > array[i + 1])
			{
				num = array[i];
				array[i] = array[i + 1];
				array[i + 1] = num;
				move++;
			}
		}
		for (int i2 = 0; i2 < 10; i2++)
		{
			printf("%d ", array[i2]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}