
#include <unistd.h>

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

int	main(int argc, char **argv)
{
	int	index;
	int	digits;

	index = 0;
	if (argc < 2 || argc > 3)
	{
		write(1, "ERROR", 5);
		return (1);
	}
	else if (argc == 2)
	{
		while (argv[2][index] != '\0')
		{
			digits = strlen(&*argv[2]);
			if (digits == 1)
			{
				search_dict(numbers.dict, &*argv[2])
			}
			else if (digits == 2)
			{

			}
			else if (digits == 3)
			{

			}
			else if (digits >= 4 && digits < 7)
			{

			}
			else if (digits >= 7 && digits < 10)
			{

			}
			else if (digits == 10)
			{

			}
			else
			{
				write(1, "ERROR", 5);
				return (1);
			}
			index++;
		}
	}
	else if (argc == 3)
	{

	}
}