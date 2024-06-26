# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abraekev <abraekev@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/21 20:48:57 by abraekev          #+#    #+#              #
#    Updated: 2024/04/23 09:56:46 by abraekev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# VARIABLES
# **************************************************************************** #

GCC 	=	cc

CFLAGS +=	-Wall -Wextra -Werror

SRC		=	ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c	\
			ft_isprint.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c	\
			ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c\
			ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c 	\
			ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c	\
			ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c	\
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c	\
			ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c		\
			ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c 			\
			ft_lstmap.c
DIRSRC	=	./srcs/
SRCS	=	$(addprefix $(DIRSRC), $(SRC))

OBJS	=	$(SRCS:.c=.o)

INCL	=	../../includes/

NAME	=	libft.a

LIBC	=	ar rc

LIBX	=	ranlib

RM		=	rm -f

# RULES
# **************************************************************************** #

all:		$(NAME)

.c.o:
			@$(GCC) $(CFLAGS) -I$(INCL) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
				@$(LIBC) $(NAME) $(OBJS)
				@$(LIBX) $(NAME)
				@echo "\033[32mcompiled $(NAME)\033[0m"

bonus:		all

clean:
			@$(RM) $(OBJS)
			@$(RM) $(BOBJS)
ifndef QUIET
				@echo "\033[36mcleaned $(NAME) OBJECTS.\033[0m"
endif

fclean:		clean
				@$(RM) $(NAME)
				@echo "\033[36mcleaned $(NAME) LIBRARY.\033[0m" 
re:			fclean all

.PHONY:		all bonus clean fclean re
# **************************************************************************** #
