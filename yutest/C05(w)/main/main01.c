#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int result = ft_recursive_factorial(5);
	int flag = 0;
	printf("----------------Tester.exe-------[ex01]--\n");
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
	result = ft_recursive_factorial(8);
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
	result = ft_recursive_factorial(-523);
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
