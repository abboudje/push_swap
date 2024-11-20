# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 17:24:01 by abboudje          #+#    #+#              #
#    Updated: 2024/10/31 14:59:53 by abboudje         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
SRC_PATH	=	src/
OBJ_PATH	=	obj/
INC_PATH	=	includes/
LIBFTDIR 	=	libft/
LIBFT		=	$(LIBFTDIR)/libft.a
SRC			=	main.c \
				algo.c \
				core.c \
				creat_stack.c \
				free.c \
				moves.c \
				parsing.c \
				sort.c \
				mini_sort.c \

SRCS		=	$(addprefix $(SRC_PATH), $(SRC))
OBJS		=	$(addprefix $(OBJ_PATH), $(SRC:.c=.o))
INCS		=	-I $(INC_PATH) -I $(LIBFTDIR)
CC			=	cc
RM			=	rm -rf
CFLAGS		=   -Wall -Wextra -Werror $(INCS)  

# Create Object directory if it doesn't exist
all: $(OBJ_PATH) $(LIBFT) $(NAME)
$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_PATH)%.o: $(LIBFTDIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(addprefix $(OBJ_PATH), $(notdir $(SRCS:.c=.o))) $(LIBFT)
	$(CC) $(CFLAGS) $(addprefix $(OBJ_PATH), $(notdir $(SRCS:.c=.o))) -L $(LIBFTDIR) -lft -o $(NAME)


clean:
	$(RM) $(OBJ_PATH)
	$(MAKE) -C $(LIBFTDIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFTDIR) fclean

re:	fclean all

.PHONY:	all clean fclean re 