# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 11:13:24 by mvolpi            #+#    #+#              #
#    Updated: 2022/03/14 15:12:38 by mvolpi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c
OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra

NONE='\033[0m'
GREEN='\033[32m'
BLUE='\033[1;34m'
CURSIVE='\033[3m'

all: $(NAME)

$(NAME): $(OBJ)
	@echo $(CURSIVE)$(BLUE)"          - Generating $(NAME)..." $(NONE)
	@ar rc $(NAME) $(OBJ)

$(OBJ): $(SRC)
	@echo $(CURSIVE)$(BLUE)"          - Compiling libft..." $(NONE)
	@gcc $(FLAGS) -c $(SRC)

norm:
	@norminette $(SRC) libft.h

clean:
	@echo $(CURSIVE)$(BLUE)"          - Removing libft object files"... $(NONE)
	@rm -f $(OBJ)

fclean: clean
	@echo $(CURSIVE)$(BLUE)"          - Removing $(NAME)..." $(NONE)
	@rm -f $(NAME)

re: fclean all
