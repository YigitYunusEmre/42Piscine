#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char Ftext1[] = "3rd week of pisine already?";
	char Ftext2[] = "3rd week of pisine";
	char Ftext3[] = "Piscine almost over, now I can sleep well...";
	char Ftext4[] = "Piscine almost over, now I can sleep";
	char text1_1[100] = "3rd week of ";
	char text1_2[] = "pisine already?";
	char text2_1[100] = "3rd week of ";
	char text2_2[] = "pisine already?";
	char text3_1[100] = "Piscine almost over, ";
	char text3_2[] = "now I can sleep well...";
	char text4_1[100] = "Piscine almost over, ";
	char text4_2[] = "now I can sleep well...";
	printf("----------------Tester.exe-------[ex03]--\n");
	printf("Expected: \n---%s---\n", Ftext1);
	printf("Got \n---%s---\n", ft_strncat(text1_1, text1_2, 15));
	printf("|   \n");
	printf("|   \n");
	printf("Expected: \n---%s---\n", Ftext2);
	printf("Got \n---%s---\n", ft_strncat(text2_1, text2_2, 6));
	printf("|   \n");
	printf("|   \n");
	printf("Expected: \n---%s---\n", Ftext3);
	printf("Got \n---%s---\n", ft_strncat(text3_1, text3_2, 23));
	printf("|   \n");
	printf("|   \n");
	printf("Expected: \n---%s---\n", Ftext4);
	printf("Got \n---%s---\n", ft_strncat(text4_1, text4_2, 15));
	printf("|\n");
	printf("|\n");
	printf("------------------End-----------------\n");
	printf("\n");
}
