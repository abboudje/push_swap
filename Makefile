# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 17:24:01 by abboudje          #+#    #+#              #
#    Updated: 2024/10/07 15:26:20 by abboudje         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
SRC_PATH	=	src/
OBJ_PATH	=	obj/
INC_PATH	=	includes/

SRC			=	main.c \
				ft_split.c \
				ft_strlcpy.c \
				ft_push.c \
				ft_utils.c \
				ft_rules.c \
				ft_stack.c \

SRCS		=	$(addprefix $(SRC_PATH), $(SRC))
OBJS		=	$(addprefix $(OBJ_PATH), $(SRC:.c=.o))
INCS		=	-I $(INC_PATH)
CC			=	cc
RM			=	rm -rf
CFLAGS		=  -Wall -Wextra -Werror $(INCS)

# Create Object directory if it doesn't exist
all: $(OBJ_PATH) $(NAME)

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


clean:
	$(RM) $(OBJ_PATH)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re 