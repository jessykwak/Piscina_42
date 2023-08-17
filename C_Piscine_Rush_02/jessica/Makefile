NAME = rush-02
MAIN_DICTIONARY = numbers.dict

rush-02: main.o dictionary.o
	cc -Wall -Wextra -Werror main.c -o rush-02

main: main.c 
	cc -Wall -Wextra -Werror main.c -o main

dictionary: dictionary.c
	cc -Wall -Wextra -Werror main.c -o dictionary

clean:
	@find . -name "*.o" -delete

fclean: clean
	@find data -name *.dict -not -name$(MAIN_DICTIONARY) -delete
