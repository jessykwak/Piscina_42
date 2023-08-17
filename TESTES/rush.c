#include <stdio.h>

void rush(int x, int y)
{
    int a = 0;
    int b = 0;
    while (b>=0 && b <y+1) 
    {
        a = 0;
        while (a<=x+1)
        {
            if(b==y || b==0) 
            {
                if(a==0 || a==x) 
                {
                    ft_putchar('o');
                }
                else if(a>0 && a < x) 
                {
                    ft_putchar('-');
                }
                else 
                {
                    ft_putchar('\n');
                }
            }
            else if(b>0 && b<y) 
            {
                if(a==0 || a==x) 
                {
                    ft_putchar('|');
                } 
                else if(a>0 && a<x) 
                {
                    ft_putchar(' ');
                }
                else 
                {
                    ft_putchar('\n');
                }
            }
            a++;
        
        }
        b++;
    }
}