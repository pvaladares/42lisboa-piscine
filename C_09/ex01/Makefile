# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 10:51:42 by pvaladar          #+#    #+#              #
#    Updated: 2022/02/02 12:30:06 by pvaladar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Based on intra video, C Piscine - C 09, C 11
# https://elearning.intra.42.fr/notions/c-piscine-c-09-c-11/subnotions/makefile-example/videos/makefile-example

SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= libft.a

# Redirects to the next rule
all: $(NAME)

# Compile the sources (*.c) to object files (*.o)
# Then generate a library file, and make an index of the libraries
${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}
# Bonus command, remove since it is not required for the exercise and it is clearly stated
# 'Your makefile should not run any unnecessary command.'
# ranlib ${NAME}

# Clean only object files (*.o)
clean:
	/bin/rm -f $(OBJS)

# Clean object files (*.o) and the binary file
fclean: clean
	/bin/rm -f $(NAME)

# Clean object files (*.o) and the binary file; Then create the binary file again
re: fclean all

.c.o:
	gcc -Wall -Wextra -Werror -c $< -o ${<:.c=.o} -I ${INCS}
# -c                      Only run preprocess, compile, and assemble steps
# -o <file>               Write output to <file>
# -I <dir>                Add directory to include search path
