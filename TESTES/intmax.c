#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648) 
    {
        write(1, "-2147483648", 11);
    } 
    else 
    {
        if (nb < 0) {
            ft_putchar('-');
            nb = -nb;
        }
        else if (nb >= 10) 
        {
            ft_putnbr(nb / 10);
        }
        ft_putchar((nb % 10) + '0');
    }
}

int main() 
{
    int number = -2147483647;
    ft_putnbr(number);
    return 0;
}