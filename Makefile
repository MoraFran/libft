# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frmora-m <frmora-m@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 18:53:54 by frmora-m          #+#    #+#              #
#    Updated: 2023/10/20 17:54:01 by frmora-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJS = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o \
	   ft_strlen.o ft_isprint.o ft_toupper.o ft_tolower.o \
	   ft_strchr.o ft_strrchr.o ft_strncmp.o ft_strlcpy.o \
	   ft_strlcat.o ft_strnstr.o ft_memset.o ft_memcpy.o \
	   ft_memchr.o ft_memmove.o ft_bzero.o ft_memcmp.o \
	   ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o \
	   ft_strjoin.o ft_strtrim.o ft_putchar_fd.o ft_putstr_fd.o \
	   ft_putnbr_fd.o ft_putendl_fd.o ft_striteri.o ft_strmapi.o \
	   ft_itoa.o ft_split.o 


BONUS = ft_lstnew_bonus.o ft_lstadd_front_bonus.o ft_lstsize_bonus.o \
		ft_lstlast_bonus.o ft_lstadd_back_bonus.o ft_lstdelone_bonus.o \
		ft_lstclear_bonus.o ft_lstiter_bonus.o ft_lstmap_bonus.o


AR = ar rcs
CFLAGS = -Wall -Wextra -Werror

all :  $(NAME)

$(NAME) : $(OBJS)
	$(AR) -r $@ $? 

%.o : %.c
	gcc -c $(CFLAGS) $< -o $@

clean :	
	rm -f *.o $(BONUS)

fclean : clean
	rm -f $(NAME)

re : fclean all

bonus : $(BONUS)
	$(AR) $(NAME) $(BONUS)

.PHONY : all clean fclean re bonus
