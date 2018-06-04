#
#   Created by Oleh Kurachenko
#          aka okurache
#   as a part of oop_in_c
#
#   ask me      oleh.kurachenko@gmail.com , I'm ready to help
#   GitHub      https://github.com/OlehKurachenko
#   rate & CV   http://www.linkedin.com/in/oleh-kurachenko-6b025b111
#

NAME = test

CC = gcc -Wall -Wextra -Werror

SRC_DIR = src

OBJ_DIR = obj

SRC_N =	main.c \
		point/point.c \
		colored_point/colored_point.c

SRC = $(addprefix $(SRC_DIR)/, $(SRC_N))

OBJ_N = $(SRC_N:.c=.o)

OBJ = $(addprefix $(OBJ_DIR)/, $(OBJ_N))

all: $(NAME)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	mkdir -p $(OBJ_DIR)/point
	mkdir -p $(OBJ_DIR)/colored_point

$(NAME): $(OBJ_DIR) $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all