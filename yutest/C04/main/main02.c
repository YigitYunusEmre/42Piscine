#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	printf("----------------Tester.exe---------------\n");
	printf("Expected: 130\n");
	printf("Got: \n");
	ft_putnbr(130);
	printf("\n");
	printf("|   \n");
	printf("|   \n");
	printf("Expected: -2345\n");
	printf("Got: \n");
	ft_putnbr(-2345);
	printf("\n");
	printf("|   \n");
	printf("|   \n");
		printf("Expected: 2025\n");
	printf("Got: \n");
	ft_putnbr(2025);
	printf("\n");
	printf("|   \n");
	printf("|   \n");
	printf("Expected: 2147483647\n");
	printf("Got:\n");
	ft_putnbr(2147483647);
	printf("\n");
	printf("|   \n");
	printf("|   \n");
	printf("Expected: -2147483648\n");
	printf("Got: \n");
	ft_putnbr(-2147483648);
	printf("\n");
	printf("|   \n");
	printf("|   \n");
	printf("------------------End-----------------\n");
	printf("\n");
}
