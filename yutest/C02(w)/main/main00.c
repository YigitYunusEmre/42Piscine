#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char copy1[] = "I want to sleep in a real bed";
	char copy2[] = "Why are we still here, just to suffer?";
	char paste1[30];
	char paste2[39];

	printf("----------------Tester.exe-------[ex00]--\n");
	ft_strcpy(paste1, copy1);
	printf("Expected: I want to sleep in a real bed\n");
	printf("Got: %s\n", paste1);
	printf("|\n");
	printf("|\n");
	ft_strcpy(paste2, copy2);
	printf("Expected: Why are we still here, just to suffer?\n");
	printf("Got: %s\n", paste2);
	printf("|\n");
	printf("|\n");
	printf("------------------End-----------------\n");
	printf("\n");
}
