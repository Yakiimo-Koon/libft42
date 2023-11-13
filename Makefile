# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kevin <kevin@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 17:50:49 by kevin             #+#    #+#              #
#    Updated: 2023/11/12 18:44:18 by kevin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_strncmp.c ft_strchr.c ft_strrchr.c ft_atoi.c\
			ft_strdup.c ft_memset.c ft_bzero.c

OBJS	= $(SRCS:.c=.o)

CC	= gcc
RM	= rm -f
CFLAGS	= -Wall -Wextra -Werror -I.

NAME	= libft.a

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS) $(BONUS_OBJS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean $(NAME)

bonus:	$(OBJS) $(BONUS_OBJS)
		ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus