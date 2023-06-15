#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int count = 1;

	if (argc > 1)
	{
		while (count < argc && argv[count][i] != '\0')
		{
			while (argv[count][i] != '\0')
			{
				write(1, &argv[count][i], 1);
				if (argv[count][i + 1] != '\0')
					write(1, "   ", 3);
				i++;
			}
			write(1, "\n", 1);
			i = 0;
			count++;
		}
	}
	return (0);
}