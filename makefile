CC := gcc
FLAGS := -std=c99 -Werror -Wall -Wextra

build:
	$(CC) $(FLAGS) SVGditors.c -c
	$(CC) $(FLAGS) shapes.c -c  
	$(CC) $(FLAGS) ui.c -c 
	$(CC) $(FLAGS) colors.c -c 
	$(CC) $(FLAGS) rotate.c -c 
	$(CC) $(FLAGS) SVGditors.c ui.c shapes.c colors.c rotate.c -o SVGXE