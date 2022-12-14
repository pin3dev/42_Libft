# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivbatist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 14:13:56 by ivbatist          #+#    #+#              #
#    Updated: 2022/11/26 02:44:12 by ivbatist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME                    = libft.a

SRCS			= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
				ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
				ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
				ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
				ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
				ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
				ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
				ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
				ft_putendl_fd.c ft_putnbr_fd.c

OBJS			= $(SRCS:.c=.o)


SRCS_BONUS 		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
				ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
				ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS_BONUS		= $(SRCS_BONUS:.c=.o)


CC			= cc
AR			= ar rcs
RM			= rm -f
CFLAGS			= -Wall -Wextra -Werror

 
MSG1                    = @echo "Compilation complete"
MSG2                    = @echo "Cleaning complete"
MSG3					= @echo "ReCompilation complete"
MSG4					= @echo "Bonus compilation complete"


$(NAME):		$(OBJS)
				$(AR) $(NAME) $(OBJS)
				$(MSG1)

all:                    $(NAME)

bonus:			$(OBJS) $(OBJS_BONUS)
				$(AR) $(NAME) $(OBJS_BONUS) $(OBJS)
				$(MSG4)

clean:
				$(RM) $(OBJS) $(OBJS_BONUS) 
				$(MSG2)

fclean:			clean
				$(RM) $(NAME)
				$(MSG2)


re:			fclean all
				$(MSG3)

#so:
#	$(CC) -fPIC $(CFLAGS) $(SRCS)
#	gcc -shared -o libft.so $(OBJS) $(OBJS_BONUS)

.PHONY:			all clean fclean re bonus
