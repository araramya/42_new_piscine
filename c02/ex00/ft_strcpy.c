/*	
	File is property of Arsen Aramyan
	Created on: 13/09/2024	
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//Test
#include <stdio.h>
int main()
{
	char str1[] = "Copy";
	char str2[] = "Destination";

	printf("%s\n", str1);
	ft_strcpy(str1, str2);
	printf("%s\n", str1);
}
