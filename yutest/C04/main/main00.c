#include <stdio.h>

int	main(void)
{
	int result = ft_strlen("hallo");
	int flag = 0;
	printf("----------------Tester.exe---------------\n");
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
	result = ft_strlen("hallo why are you here my man?");
	printf("Expected: 30\n");
	printf("Got: %d\n", result);
	if (result == 30)
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
