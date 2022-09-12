# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aldgonza <aldgonza@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 15:12:10 by aldgonza          #+#    #+#              #
#    Updated: 2022/06/07 15:39:58 by aldgonza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
HEADER	= libft.h
SRCS	= ft_isalpha.c \
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
		ft_memcmp.c \
		ft_memchr.c \
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
		ft_putnbr_fd.c \

BSSRCS	= ft_lstnew_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstmap_bonus.c \

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
OBJS	= ${SRCS:%.c=%.o}
BSOBJS	= ${BSSRCS:%.c=%.o}

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): ${HEADER} ${OBJS}
		ar rc $(NAME) $(OBJS)


all: $(NAME)

bonus: ${HEADER} ${OBJS} ${BSOBJS}
		ar rc $(NAME) $(OBJS) $(BSOBJS)
		@touch $@

clean:
	rm -f $(OBJS) $(BSOBJS) bonus

fclean: clean
	rm -f $(NAME)

re: fclean all
