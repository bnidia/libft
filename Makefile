# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bnidia <bnidia@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 19:16:59 by bnidia            #+#    #+#              #
#    Updated: 2021/10/26 16:05:02 by bnidia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a

Part_1	= 	ft_isalpha.c	ft_toupper.c	ft_calloc.c\
			ft_isdigit.c	ft_tolower.c	ft_strdup.c\
			ft_isalnum.c	ft_strchr.c\
			ft_isascii.c	ft_strrchr.c\
			ft_isprint.c	ft_strncmp.c\
			ft_strlen.c		ft_memchr.c\
			ft_memset.c		ft_memcmp.c\
			ft_bzero.c		ft_strnstr.c\
			ft_memcpy.c		ft_atoi.c\
			ft_memmove.c\
			ft_strlcpy.c\
			ft_strlcat.c
			
Part_2	=	ft_substr.c		ft_striteri.c\
			ft_strjoin.c	ft_putchar_fd.c\
			ft_strtrim.c	ft_putstr_fd.c\
			ft_split.c		ft_putendl_fd.c\
			ft_itoa.c		ft_putnbr_fd.c\
			ft_strmapi.c

Bonus	=	ft_lstnew_bonus.c			ft_lstdelone_bonus.c\
			ft_lstadd_front_bonus.c		ft_lstclear_bonus.c\
			ft_lstsize_bonus.c			ft_lstiter_bonus.c\
			ft_lstlast_bonus.c			ft_lstmap_bonus.c\
			ft_lstadd_back_bonus.c
			
Obj 		= $(patsubst %.c,%.o,$(Part_1) $(Part_2))
Obj_bonus 	= $(patsubst %.c,%.o,$(Bonus))
D_file		= $(patsubst %.c,%.d,$(Part_1) $(Part_2))
D_file_b	= $(patsubst %.c,%.d,$(Bonus))
override Obj_all ?= $(Obj)
override D_all ?= $(D_file)

all		: $(NAME)

$(NAME)	: $(Obj_all)
	ar rcs $(NAME) $?

%.o 	: %.c
	gcc -Wall -Werror -Wextra -O2 -c $< -o $@ -MD

include $(wildcard $(D_all))

bonus	: $(Obj_bonus)
	@make Obj_all="$(Obj) $(Obj_bonus)" D_all="$(D_file) $(D_file_b)"all

clean	:
	rm -f $(Obj) $(Obj_bonus) $(D_file) $(D_file_b)

fclean	: clean
	rm -f $(NAME)

re		: fclean all

.PHONY	: all bonus clean fclean re
