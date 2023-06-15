int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i_dest;
	unsigned int	i_src;
	unsigned int	len_result;

	i_src = 0;
	i_dest = ft_strlen(dest);
	len_result = (ft_strlen(dest) + ft_strlen(src));
	if (size > i_dest)
	{
		while (src[i_src] && i_dest < size - 1)
		{
			dest[i_dest] = src[i_src];
			i_dest++;
			i_src++;
		}
		dest[i_dest] = '\0';
		return (len_result);
	}
	return (ft_strlen(src) + size);
}

#include <stdio.h>

int	main(void)
{
	char	dest[16] = "to com fome";
	char	src[13] = " quero leite";

	printf("%i", ft_strlcat(dest, src, 10));
	printf("\n%s", dest);
	return (0);
}
