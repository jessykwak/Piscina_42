NAME = rush-02

SRC = main.c ft_atoi.c find_number.c ft_putstr.c number_rules_part_two.c number_rules.c print_number_logic.c read_dict.c validation.c

all : ${NAME} 

${NAME} : 
	cc -Wall -Werror -Wextra -o ${NAME} ${SRC}

clean:
	rm -f *.o

fclean:
	rm -f ${NAME}

re: fclean all ${NAME}