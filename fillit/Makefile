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
SRC_DIR	:= ./src
INC_DIR	:= ./includes
OBJ_DIR	:= ./obj
LIB_DIR	:= ./lib

# src / obj files
SRC		:= main.c \
		   read_file.c \
		   map_filling.c \

$(NAME):    gcc -Wall -Wextra -Werror -c $(SRC_DIR)$(SRC) -I./includes/ -L./lib/lidft/ -lft -o fillit

all:$(NAME)