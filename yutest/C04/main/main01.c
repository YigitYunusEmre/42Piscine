#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	char text1[] = "Why are we still here, just to suffer?";
	int flag = 0;
	printf("----------------Tester.exe---------------\n");
	printf("|   \n");
	printf("|   \n");
	printf("Expected: \n%s\n", text1);
	printf("Got:\n");
	ft_putstr(text1);
	printf("\n");
	printf("|   \n");
	printf("|   \n");
	printf("--------------End-------------\n");
	printf("\n");
}
