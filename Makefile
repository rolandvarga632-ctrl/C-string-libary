all:
	@gcc -Wall -Wextra -g strlib.c testmain.c -o test && ./test
	@valgrind --leak-check=full --track-origins=yes ./test
