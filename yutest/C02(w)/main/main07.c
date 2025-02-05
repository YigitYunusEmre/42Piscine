#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char text1[] = "ABCD";
	char text2[] = "aBcD";
	char text3[] = "i want t0 FIGHT them all";
	char text4[] = "ABcD eF";
	char text5[] = "abc";

	printf("----------------Tester.exe-------[ex07]--\n");
	printf("Expected: ABCD\n");
	printf("Got: %s\n", ft_strupcase(text1));
	printf("|\n");
	printf("|\n");
	printf("Expected: ABCD\n");
	printf("Got: %s\n", ft_strupcase(text2));
	printf("|\n");
	printf("|\n");
	printf("Expected: I WANT T0 FIGHT THEM ALL\n");
	printf("Got: %s\n", ft_strupcase(text3));
	printf("|\n");
	printf("|\n");
	printf("Expected: ABCD EF\n");
	printf("Got: %s\n", ft_strupcase(text4));
	printf("|\n");
	printf("|\n");
	printf("Expected: ABC\n");
	printf("Got: %s\n", ft_strupcase(text5));
	printf("|\n");
	printf("|\n");
	printf("------------------End-----------------\n");
	printf("\n");
}
