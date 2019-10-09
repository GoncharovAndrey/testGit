# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjosue <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/08 14:23:10 by cjosue            #+#    #+#              #
#    Updated: 2019/10/08 14:23:12 by cjosue           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME    = fillit

# directories
INC_DIR	:= ./src
LIB_DIR	:= ./libft

# src / obj files
SRC		:=  ./src/main.c \
			./src/read_file.c \
			./src/map_filling.c

OBJ		:=  main.o \
			read_file.o \
			map_filling.o

all:$(NAME)

$(NAME):
		@cd $(LIB_DIR) && $(MAKE)
		@gcc -Wall -Wextra -Werror -c $(SRC)
		@gcc $(OBJ) -L$(LIB_DIR) -lft -I$(INC_DIR) -o $(NAME)


clean:
		@cd $(LIB_DIR) && $(MAKE) clean
		@rm -rf $(OBJ)

fclean:	clean
		@cd $(LIB_DIR) && $(MAKE) fclean
		@rm -rf $(NAME)

re:	fclean all