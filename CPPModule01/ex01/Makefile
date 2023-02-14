NAME = phonebook

SRCS = $(shell find . -name "*.cpp")

CC = g++
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRCS)
	@echo "\033[33m------------- making compilation ... --------------\n"
	@${CC} ${CFLAGS} -o ${NAME} ${SRCS}
	@echo "\033[32m-------------- finished ... -------------"


clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
