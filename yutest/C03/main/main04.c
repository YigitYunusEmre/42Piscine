#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main (void) {
	char hay1[] = "Birds are a drone created by the government to spy on us";
	char hay2[] = "Birds are a dro created by the government drone to spy on us";
	char hay3[] = "Birds are the gover drone created by the government to spy on us";
	char needle1[] = "drone";
	char needle2[] = "drone";
	char needle3[] = "government";
	char text1[] = "drone created by the government to spy on us";
	char text2[] = "drone to spy on us";
	char text3[] = "government to spy on us";
	printf("----------------Tester.exe-------[ex04]--\n");
	printf("Hay---[%s]\n", hay1);
	printf("|   \n");
	printf("Needle--[%s]\n", needle1);
	printf("|   \n");
	printf("Expected: \n---%s---\n", text1);
	printf("Got \n---%s---\n", ft_strstr(hay1, needle1));
	printf("|   \n");
	printf("|   \n");
	printf("Hay---[%s]\n", hay2);
	printf("|   \n");
	printf("Needle--[%s]\n", needle2);
	printf("|   \n");
	printf("Expected: \n---%s---\n", text2);
	printf("Got \n---%s---\n", ft_strstr(hay2, needle2));
	printf("|   \n");
	printf("|   \n");
	printf("Hay---[%s]\n", hay3);
	printf("|   \n");
	printf("Needle--[%s]\n", needle3);
	printf("|   \n");
	printf("Expected: \n---%s---\n", text3);
	printf("Got \n---%s---\n", ft_strstr(hay3, needle3));
	printf("|\n");
	printf("|\n");
	printf("------------------End-----------------\n");
	printf("\n");
}
