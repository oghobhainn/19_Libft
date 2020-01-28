# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmcgahan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/29 14:54:07 by cmcgahan          #+#    #+#              #
#    Updated: 2020/01/28 14:50:54 by cmcgahan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FlAGS = -Wall -Wextra -Werror

NAME = libft.a

SOURCES = ft_putchar.c ft_putstr.c\
		  ft_memset.c ft_bzero.c\
		  ft_memcpy.c ft_memccpy.c\
		  ft_memmove.c ft_memchr.c\
		  ft_memcmp.c ft_strlen.c\
		  ft_isalpha.c ft_isdigit.c\
		  ft_isalnum.c ft_isascii.c\
		  ft_isprint.c ft_toupper.c\
		  ft_tolower.c ft_strchr.c\
		  ft_strrchr.c ft_strncmp.c\
		  ft_strlcpy.c ft_strlcat.c\
		  ft_strnstr.c ft_atoi.c\
		  ft_calloc.c ft_strdup.c\
		  ft_substr.c ft_strjoin.c\
		  ft_strtrim.c ft_split.c\
		  ft_itoa.c ft_strmapi.c\
		  ft_putchar_fd.c ft_putstr_fd.c\
		  ft_putendl_fd.c ft_putnbr_fd.c\
		  ft_putchar.c ft_putstr.c\
		  ft_putnbr.c ft_convertissor_ltox.c\
		  ft_convertissor_utox.c ft_putnbr_uns.c\
		  ft_intheset.c ft_strdel.c\
		  ft_utoa_base.c

SOURCES_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c\
				ft_lstsize_bonus.c ft_lstlast_bonus.c\
				ft_lstadd_back_bonus.c ft_lstiter_bonus.c\
				ft_lstdelone_bonus.c ft_lstclear_bonus.c\
				ft_lstmap_bonus.c


HEADERS = libft.h

HEADERS_GCH = libft.h.gch

OBJECT = $(SOURCES:.c=.o)

OBJECT_BONUS = $(SOURCES_BONUS:.c=.o)

$(NAME):
	@echo "Compilation..."
	@gcc $(FLAGS) -c $(SOURCES) $(HEADERS)
	@ar rc $(NAME) $(OBJECT)
	@ranlib $(NAME)
	@echo "Compilation\t\t\033[0;32m[OK]\033[0m"

all: $(NAME) bonus

clean:
	@rm -f $(OBJECT)
	@rm -f $(OBJECT_BONUS)
	@rm -f $(HEADERS_GCH)
	@echo "Cleaning Objects\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "Cleaning .a\t\t\033[0;32m[OK]\033[0m"

bonus:
	@echo "Compilation des bonus en plus..."
	@gcc $(FLAGS) -c $(SOURCES_BONUS) $(HEADERS)
	@ar rc $(NAME) $(OBJECT_BONUS)
	@ranlib $(NAME)
	@echo "Compilation des bonus\t\033[0;32m[OK]\033[0m"

re: fclean all
