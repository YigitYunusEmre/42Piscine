#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char text1[] = "abcd";
	char text2[] = "aBcD";
	char text3[] = "I wANt T0 FigHT thEN ALl";
	char text4[] = "AbCd eF";
	char text5[] = "ABC";

	printf("----------------Tester.exe-------[ex08]--\n");
	printf("Expected: abcd\n");
	printf("Got: %s\n", ft_strlowcase(text1));
	printf("|\n");
	printf("|\n");
	printf("Expected: abcd\n");
	printf("Got: %s\n", ft_strlowcase(text2));
	printf("|\n");
	printf("|\n");
	printf("Expected: i want t0 fight them all\n");
	printf("Got: %s\n", ft_strlowcase(text3));
	printf("|\n");
	printf("|\n");
	printf("Expected: abcd ef\n");
	printf("Got: %s\n", ft_strlowcase(text4));
	printf("|\n");
	printf("|\n");
	printf("Expected: abc\n");
	printf("Got: %s\n", ft_strlowcase(text5));
	printf("|\n");
	printf("|\n");
	printf("------------------End-----------------\n");
	printf("\n");
}
