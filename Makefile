NAME	=	generator

FLAGS	=	-lm

all:
	gcc -o $(NAME) main.c $(FLAGS)

clean:
	rm $(NAME)

.PHONY: all clean