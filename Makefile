# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/08 14:02:01 by jmatheis          #+#    #+#              #
#    Updated: 2023/09/04 17:53:35 by jmatheis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC			= cc
CFLAGS		= -Wall -Werror -Wextra

MANDATORYPART = ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c

BONUSPART = 	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c

HEADER = libft.h

M_SRCS = $(addprefix ./sources/mandatory/, $(MANDATORYPART))
B_SRCS = $(addprefix ./sources/bonus/, $(BONUSPART))
M_HEADER = $(addprefix ./includes/, $(HEADER))

mandatory = $(M_SRCS:%.c=%.o)
bonus = $(B_SRCS:%.c=%.o)

# ************* #
#     RULES     #
# ************* #

$(NAME): $(mandatory)
	ar -rs $(NAME) $^

bonus: $(mandatory) $(bonus)
	ar -rs $(NAME) $^

%.o : %.c
	$(CC) $(CFLAGS) -c $^ -o $@
	
clean:
	rm -f $(mandatory)
	rm -f $(bonus)

fclean: clean
	rm -f $(NAME)

re: fclean all

all: bonus

.PHONY: bonus clean fclean re all