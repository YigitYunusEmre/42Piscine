#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	int result = ft_strncmp("aaaa", "aaa", 3);
	int flag = 0;
	printf("----------------Tester.exe-------[ex01]--\n");
	printf("(aaaa) (aaa) (3)\n");
	printf("Expected 0\n");
	printf("Got %d\n", result);
	if (result == 0)
	{
		printf("------------------Correct-----------------\n");
	}
	else
	{
		printf("-------------------WRONG------------------\n");
		flag += 1;
	}
	result = ft_strncmp("aaaa", "aaa", 4);
	printf("(aaaa) (aaa) (4)\n");
	printf("Expected Positive\n");
	printf("Got %d\n", result);
	if (result > 0)
	{
		printf("------------------Correct-----------------\n");
	}
	else
	{
		printf("-------------------WRONG------------------\n");
		flag += 1;
	}
	result = ft_strncmp("aaaz", "aaaa", 4);
	printf("(aaaz) (aaaa) (4)\n");
	printf("Expected Positive\n");
	printf("Got %d\n", result);
	if (result > 0)
	{
		printf("------------------Correct-----------------\n");
	}
	else
	{
		printf("-------------------WRONG------------------\n");
		flag += 1;
	}
	result = ft_strncmp("aaa", "aaaa", 4);
	printf("(aaa) (aaaa) (4)\n");
	printf("Expected Negative\n");
	printf("Got %d\n", result);
	if (result < 0)
	{
		printf("------------------Correct-----------------\n");
	}
	else
	{
		printf("-------------------WRONG------------------\n");
		flag += 1;
	}
	result = ft_strncmp("aaaa", "aaaz", 4);
	printf("(aaaa) (aaaz) (4)\n");
	printf("Expected Negative\n");
	printf("Got %d\n", result);
	if (result < 0)
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
		printf("------------------WORKING AS IT SHOULD BE!!-----------------\n");
	}
	else
	{
		printf("-------------------FAILED------------------\n");
		flag += 1;
	}
	printf("\n");
}
