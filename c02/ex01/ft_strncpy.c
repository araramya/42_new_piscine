char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while(src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

//Test
#include <stdio.h>
int main()
{
	char str1[] = "Hello";
	char str2[] = "Arsenikum";
	ft_strncpy(str1, str2, 3);
	printf("%s\n", str1);
}
