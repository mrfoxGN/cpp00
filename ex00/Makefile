

CC=c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME=megaphone
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
all:$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS)  $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS)  -c $< -o $@

clean:
	@rm -f *.o
fclean: clean
	@rm -rf $(NAME)
re: fclean all

.SECONDARY: $(OBJ)
.PHONY: all clean fclean re