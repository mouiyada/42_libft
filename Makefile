# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 13:10:03 by kyamada           #+#    #+#              #
#    Updated: 2025/01/02 10:39:43 by kyamada          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
TARGET = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =	ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memchr.c \
		ft_memmove.c \
		ft_memcmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c\
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

$(NAME): $(SRCS)

OBJS = $(SRCS:.c=.o)

.PHONY: all
all: $(TARGET)

$(TARGET): $(OBJS)
	ar rcs $(TARGET) $(OBJS)

.PHONY: clean
clean:
	$(RM) $(OBJS)

.PHONY: fclean
fclean: clean
	$(RM) $(TARGET)

.PHONY: re
re: fclean all
