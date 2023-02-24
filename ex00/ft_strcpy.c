/*#include <stdio.h>
#include <string.h>*/

char	*ft_strcpy(char *dest, char *src)
	{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

/*
int main(void)
{
	char src[] = "je suis le notre";
	char dest[] = "bye bye";
	char src1[] = "je suis le vrai";
	char dest1[] = "au revoir";

	printf("source : %s, dest : %s\n", src, dest);
	printf("source1 : %s, dest1 : %s\n", src1, dest1);
	strcpy(dest1, src1);
	ft_strcpy(dest, src);
	printf("source1 : %s, dest1 : %s\n", src1, dest1);
	printf("source : %s, dest : %s\n", src, dest);
	return(0);
}
*/
