# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjosue <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 18:15:54 by cjosue            #+#    #+#              #
#    Updated: 2019/09/05 18:18:09 by cjosue           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE_FOR_LIB = *.c
FILE_O = *.o

all:
		    gcc -Wall -Wextra -Werror -c -I$ -c $(FILE_FOR_LIB)
			ar rc libft.a $(FILE_O)
			ranlib libft.a
			rm -f $(FILE_O)

clean:
		    rm -f $(FILE_O)

fclean: clean
		    rm -f libft.a

re: fclean all

