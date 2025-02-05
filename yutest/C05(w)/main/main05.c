#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int result = ft_sqrt(25);
	int flag = 0;
	printf("----------------Tester.exe-------[ex05]--\n");
	printf("Expected: 5\n");
	printf("Got: %d\n", result);
	if (result == 5)
	{
		printf("------------------Correct-----------------\n");
	}
	else
	{
		printf("-------------------WRONG------------------\n");
		flag += 1;
	}
	result = ft_sqrt(8);
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
	result = ft_sqrt(2147395600);
	printf("Expected: 46340\n");
	printf("Got: %d\n", result);
	if (result == 46340)
	{
		printf("------------------Correct-----------------\n");
	}
	else
	{
		printf("-------------------WRONG------------------\n");
		flag += 1;
	}
	result = ft_sqrt(-52);
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
