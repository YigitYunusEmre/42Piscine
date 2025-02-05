#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int result = ft_iterative_power(0, 0);
	int flag = 0;
	printf("----------------Tester.exe-------[ex02]--\n");
	printf("Expected: 1\n");
	printf("Got: %d\n", result);
	if (result == 1)
	{
		printf("------------------Correct-----------------\n");
	}
	else
	{
		printf("-------------------WRONG------------------\n");
		flag += 1;
	}
	result = ft_iterative_power(1498, 0);
	printf("Expected: 1\n");
	printf("Got: %d\n", result);
	if (result == 1)
	{
		printf("------------------Correct-----------------\n");
	}
	else
	{
		printf("-------------------WRONG------------------\n");
		flag += 1;
	}
	result = ft_iterative_power(-2938, 1);
	printf("Expected: -2938\n");
	printf("Got: %d\n", result);
	if (result == -2938)
	{
		printf("------------------Correct-----------------\n");
	}
	else
	{
		printf("-------------------WRONG------------------\n");
		flag += 1;
	}
	result = ft_iterative_power(0, 2);
	printf("Expected: 0\n");
	printf("Got: %d\n", result);
	if (result == 0)
	{
		printf("------------------Correct-----------------\n");
	}
	else
	{
		printf("-------------------WRONG------------------\n");
		flag += 1;
	}
	result = ft_iterative_power(2, 3);
	printf("Expected: 8\n");
	printf("Got: %d\n", result);
	if (result == 8)
	{
		printf("------------------Correct-----------------\n");
	}
	else
	{
		printf("-------------------WRONG------------------\n");
		flag += 1;
	}
	result = ft_iterative_power(8, 7);
	printf("Expected: 2097152\n");
	printf("Got: %d\n", result);
	if (result == 2097152)
	{
		printf("------------------Correct-----------------\n");
	}
	else
	{
		printf("-------------------WRONG------------------\n");
		flag += 1;
	}
	result = ft_iterative_power(-5, 8);
	printf("Expected: 390625\n");
	printf("Got: %d\n", result);
	if (result == 390625)
	{
		printf("------------------Correct-----------------\n");
	}
	else
	{
		printf("-------------------WRONG------------------\n");
		flag += 1;
	}
	printf("\n\n");
	if (flag == 0)
	{
		printf("--------------WORKING AS IT SHOULD BE!!-------------\n");
	}
	else
	{
		printf("-------------------FAILED------------------\n");
		flag += 1;
	}
	printf("\n");
}
