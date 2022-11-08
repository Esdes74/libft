# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eslamber <eslamber@student.42.ft>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 07:23:10 by eslamber          #+#    #+#              #
#    Updated: 2022/11/08 14:22:58 by eslamber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#
### Variables allocations
#

SRC := ft_atoi.c \
		ft_lstiter_bonus.c \
		ft_strjoin.c \
		ft_bzero.c \
		ft_lstlast_bonus.c \
		ft_strlcat.c \
		ft_calloc.c \
		ft_lstmap_bonus.c \
		ft_strlcpy.c \
		ft_isalnum.c \
		ft_lstnew_bonus.c \
		ft_strlen.c \
		ft_isalpha.c \
		ft_lstsize_bonus.c \
		ft_strmapi.c \
		ft_isascii.c \
		ft_memchr.c \
		ft_strncmp.c \
		ft_isdigit.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_strrchr.c \
		ft_itoa.c \
		ft_memmove.c \
		ft_strtrim.c \
		ft_lstadd_back_bonus.c \
		ft_memset.c \
		ft_substr.c \
		ft_lstadd_front_bonus.c \
		ft_split.c \
		ft_tolower.c \
		ft_lstclear_bonus.c \
		ft_strdup.c \
		ft_toupper.c \
		ft_lstdelone_bonus.c \
		ft_striteri.c
OBJ := $(SRC:%.c=%.o)
NAME := libft.a
HEADER := libft.h

FLAGS := -Wall -Werror -Wextra
cc := gcc

#
### compilations rules
#

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $<

$(OBJ): $(SRC) $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

#
### Cleaning rules
#

clean: 
	rm $(OBJ)

fclean: clean
	rm $(NAME)
