#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int result = ft_iterative_factorial(5);
	int flag = 0;
	printf("------------[-Made by (yuyigit)-]--------\n");
	printf("\n\n");
	printf("----------------Tester.exe-------[ex00]--\n");
	printf("Expected: 120\n");
	printf("Got: %d\n", result);
	if (result == 120)
	{
		printf("------------------Correct-----------------\n");
	}
	else
	{
		printf("-------------------WRONG------------------\n");
		flag += 1;
	}
	result = ft_iterative_factorial(8);
	printf("Expected: 40320\n");
	printf("Got: %d\n", result);
	if (result == 40320)
	{
		printf("------------------Correct-----------------\n");
	}
	else
	{
		printf("-------------------WRONG------------------\n");
		flag += 1;
	}
	result = ft_iterative_factorial(-523);
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
