#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	int result = ft_str_is_uppercase("ABCD");
	int flag = 0;
	printf("----------------Tester.exe-------[ex05]--\n");
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
	result = ft_str_is_uppercase("aBcD");
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
	result = ft_str_is_uppercase("AB1CD");
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
	result = ft_str_is_uppercase("AB CD");
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
	result = ft_str_is_uppercase("abc");
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
	result = ft_str_is_uppercase("");
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
