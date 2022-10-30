# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: psadeghi <psadeghi@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/27 15:35:36 by psadeghi      #+#    #+#                  #
#    Updated: 2022/10/30 10:56:18 by parisasadeq   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs

SRCS=ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
		ft_isprint.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c\
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c\
		ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strrchr.c ft_strlen.c\
		ft_atoi.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c\
		ft_strncmp.c ft_memcmp.c ft_strnstr.c ft_substr.c ft_strjoin.c\
		ft_strmapi.c ft_striteri.c ft_strtrim.c ft_itoa.c ft_split.c\

BSRCS=ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
		ft_lstmap.c\

OBJFILES1=$(SRCS:%.c=%.o)
BOBJFILES=$(BSRCS:%.c=%.o)

#	this part of code is to prevent relinking when running make bonus command
#	but with this part francinette can not compile the bonus functions, therefore
#	if you wish to run against francinette tests, you should comment out
#	lines 36, 37, 38 , 40 and 52 and uncomment line 53.
ifdef WITH_BONUS
OBJFILES = $(OBJFILES1) $(BOBJFILES)
else
OBJFILES = $(OBJFILES1)
endif


all:$(NAME)

$(NAME) : $(OBJFILES)
	$(AR) $(NAME) $(OBJFILES)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

bonus : $(BOBJFILES)
	make WITH_BONUS=1 all
#	$(AR) $(NAME) $(BOBJFILES)

clean :
	rm -f $(OBJFILES1)
	rm -f $(BOBJFILES)

fclean:
	rm -rf $(OBJFILES1) $(NAME)
	rm -rf $(BOBJFILES) $(NAME)
re: fclean all

.PHONY: all clean fclean re