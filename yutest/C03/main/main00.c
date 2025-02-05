#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	int result = ft_strcmp("aaaa", "aaaa");
	int flag = 0;
	printf("----------------Tester.exe-------[ex00]--\n");
	printf("(aaaa) (aaaa)\n");
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
	result = ft_strcmp("aaaaa", "aaaa");
	printf("(aaaaa) (aaaa)\n");
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
	result = ft_strcmp("aaaa", "aaa");
	printf("(aaaa) (aaa)\n");
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
	result = ft_strcmp("aaaa", "aaaz");
	printf("(aaaa) (aaaz)\n");
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
	result = ft_strcmp("aaa", "aaaa");
	printf("(aaa) (aaaa)\n");
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
