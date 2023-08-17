/* Nome da tarefa: print_odd
Ficheiro esperados: print_odd.c
funcoes permitidas: write

Escreva um programa que receba uma string e imprima apenas cada carater na posicao string fornecida por uma nova linha (\n).
Se o numero de parametros nao for 1, ou se nao houver parametros, simplesmente exibe uma nova linha.

Exemplo:
$>./print_odd 'FOR 42 !!' | cat -e
O 2!$
$>./print_odd "hyeolulgoowtotrhlids!!!!!!!!" | cat -e
yougotthis!!!!$ */

#include <unistd.h>

int main(int argc, char **argv)
{
    int count;

    if (argc == 2)
    {  
        count = 0;
        while (argv[1][count] != '\0')
        {
            if (count % 2 == 1)
            {
                write(1, &argv[1][count], 1);
            }
            count++;
        }
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
    return (0);
}