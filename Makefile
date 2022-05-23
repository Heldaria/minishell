# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llepiney <llepiney@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 14:37:39 by llepiney          #+#    #+#              #
#    Updated: 2022/05/23 21:23:48 by llepiney         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell

SRC =	free_tab.c ft_strdup.c ft_strjoin.c ft_strlen.c \
		ft_strncmp.c ft_unset.c minishell.c ft_putstr.c \
		ft_env.c \

OBJ = $(SRC:.c=.o)


CC = cc

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJ) minishell.h
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY : clean fclean bonus re all