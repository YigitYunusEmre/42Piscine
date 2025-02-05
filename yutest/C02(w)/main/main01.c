#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char copy1[] = "I want to sleep in a real bed";
	char copy2[] = "Why are we still here, just to suffer?";
	char paste1[30];
	char paste2[39];

	printf("----------------Tester.exe-------[ex01]--\n");
	ft_strncpy(paste1, copy1, 15);
	printf("Expected: I want to sleep\n");
	printf("Got: %s\n", paste1);
	printf("|\n");
	printf("|\n");
	ft_strncpy(paste2, copy2, 22);
	printf("Expected: Why are we still here,\n");
	printf("Got: %s\n", paste2);
	printf("|\n");
	printf("|\n");
	printf("------------------End-----------------\n");
	printf("\n");
}
