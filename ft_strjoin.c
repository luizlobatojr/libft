#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	
	// 1. Calcula o tamanho de ambas as strings
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	
	// 2. Aloca espaço para s1 + s2 + 1 (para o terminador nulo)
	new_str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!new_str)
		return (NULL);
	
	// 3. Copia a primeira string (s1)
	i = 0;
	while (i < len1)
	{
		new_str[i] = s1[i];
		i++;
	}
	
	// 4. Copia a segunda string (s2) logo em seguida
	j = 0;
	while (j < len2)
	{
		new_str[i + j] = s2[j];
		j++;
	}
	new_str[i + j] = '\0';
	
	return (new_str);
}