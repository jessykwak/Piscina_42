#include <unistd.h>

void    ft_print_numbers(void)
{
    char numero = '0';
    while (numero <= '9') 
    {
        write(1, &numero, 1);
        numero ++;
    }
    write(1, "\n", 1);
}
