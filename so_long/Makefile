# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 11:20:05 by mvolpi            #+#    #+#              #
#    Updated: 2022/03/14 15:13:19 by mvolpi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long.out

SRC = $(MAIN_SRC) $(SRC_ERR) $(SRC_GNL) $(SRC_MAP) $(SRC_GAME)

MAIN_SRC = main.c errors.c

LIBFT_A = libft.a
LIBF_DIR = libft/
LIBFT  = $(addprefix $(LIBF_DIR), $(LIBFT_A))

GNL = get_next_line.c get_next_line_utils.c
SRC_GNL = $(addprefix gnl/, $(GNL))

MAP = 	map_reader.c map_checker.c map_checker_utils.c \
		tilemap_generator.c enemy_generator.c
SRC_MAP = $(addprefix map/, $(MAP))

GAME =	game_init.c open_images.c open_wall_images.c open_panel.c \
		input.c player_movement.c player_end.c update.c enemy_behaviour.c  follower_behaviour.c \
		render.c draw_wall.c \
		reset.c end_program.c
SRC_GAME = $(addprefix game/, $(GAME))

OBJ = *.o

FLAGS = -Wall -Wextra -Werror
INCLUDE = -lmlx -framework OpenGL -framework AppKit

NONE='\033[0m'
GREEN='\033[1;32m'
YELLOW='\033[33m'
CYAN='\033[1;36m'
CURSIVE='\033[3m'

all: $(NAME)

$(NAME): $(OBJ)
	@echo $(CURSIVE)$(CYAN) "     - Making libft..." $(NONE)
	@make -C $(LIBF_DIR)
	@echo $(CURSIVE)$(CYAN) "     - Compiling $(NAME)..." $(NONE)
	@gcc $(FLAGS) $(OBJ) $(LIBFT) $(INCLUDE) -o $(NAME)
	@echo $(GREEN)"- Compiled -"$(NONE)

$(OBJ): $(SRC)
	@echo $(CURSIVE)$(CYAN) "     - Making object files..." $(NONE)
	@gcc $(FALGS) -c $(SRC)

exe: re
	@make -C ./ clean
	@echo $(YELLOW)"     - Executing $(NAME)... \n"$(NONE)
	@./$(NAME) $(m)
	@echo $(YELLOW)"\n     - Done -"$(NONE)

play: all
	@echo $(YELLOW)"     - Playing all maps... \n"$(NONE)
	@make -C ./ clean
	@./$(NAME) map_files/map_0.ber
	@./$(NAME) map_files/map_1.ber
	@./$(NAME) map_files/map_2.ber
	@./$(NAME) map_files/map_3.ber
	@./$(NAME) map_files/map_4.ber
	@./$(NAME) map_files/map_5.ber
	@./$(NAME) map_files/map_6.ber
	@./$(NAME) map_files/long.ber
	@./$(NAME) map_files/sergio.ber

norm:
	@echo $(CYAN) ""
	@norminette $(SRC) *.h */*.h
	@echo $(NONE) ""

libftnorm:
	@echo $(CYAN) ""
	@make -C $(LIBF_DIR) norm
	@echo $(NONE) ""

clean:
	@echo $(CURSIVE)$(CYAN) "     - Removing object files..." $(NONE)
	@rm -rf $(OBJ)
	@make -C $(LIBF_DIR) clean

fclean: clean
	@echo $(CURSIVE)$(CYAN) "     - Removing $(NAME)..." $(NONE)
	@rm -rf $(NAME)
	@make -C $(LIBF_DIR) fclean

re: fclean all
