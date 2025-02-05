#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	int result = ft_str_is_alpha("abcd");
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
	result = ft_str_is_alpha("aBcD");
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
	result = ft_str_is_alpha("ab1cd");
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
	result = ft_str_is_alpha("ab cd");
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
	result = ft_str_is_alpha("aBc3D");
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
	result = ft_str_is_alpha("");
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
