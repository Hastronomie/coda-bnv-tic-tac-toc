#Makefile
NAME = tic-tac-toe 

SRCS = main.c \
    afficherTab.c \
	initTab.c \
	gameOver.c \
	reponses.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
