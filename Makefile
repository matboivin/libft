# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboivin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 09:17:58 by mboivin           #+#    #+#              #
#    Updated: 2018/11/27 11:29:09 by mboivin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCDIR = srcs

INCDIR = includes

OBJDIR = objs

RM = rm -rf

AR = ar -rc


# C files

SRC_FILES = ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memccpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strlen.c \
	ft_strdup.c \
	ft_strcpy.c \
	ft_strncpy.c \
	ft_strcat.c \
	ft_strncat.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strstr.c \
	ft_strnstr.c \
	ft_strcmp.c \
	ft_strncmp.c \
	ft_atoi.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_memalloc.c \
	ft_memdel.c \
	ft_strnew.c \
	ft_strdel.c \
	ft_strclr.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strmap.c \
	ft_strmapi.c \
	ft_strequ.c \
	ft_strnequ.c \
	ft_strsub.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_strsplit.c \
	ft_itoa.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_putendl.c \
	ft_putnbr.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_lstnew.c \
	ft_lstdelone.c \
	ft_lstdel.c \
	ft_lstadd.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_iswhitespace.c \
	ft_ischarset.c \
	ft_swap.c \
	ft_strrev.c \
	ft_nbrlen.c \
	get_next_line.c \


INCLUDES = $(addprefix -I, $(INCDIR))

SRC = $(addprefix $(SRCDIR)/, $(SRC_FILES))

OBJ = $(addprefix $(OBJDIR)/, $(SRC_FILES:.c=.o))


ifdef TERM
# My colors

RESET =		\033[0m
RED =		\033[31m
GREEN =		\033[32m
YELLOW =	\033[33m
WHITE =		\033[37m
endif


# Rules

all: $(NAME)

# The line below won't run if the object files don't exist or were not modified

$(NAME): $(OBJDIR) $(OBJ) $(INCDIR)/libft.h
	@echo "$(WHITE)Archiving object files...$(RESET)"
	@$(AR) $(NAME) $(OBJ)
	@echo "$(WHITE)Indexing...$(RESET)"
	@ranlib $(NAME)
	@echo "$(GREEN)libft is ready.$(RESET)"

$(OBJDIR):
	@mkdir -p $(OBJDIR)
	@echo "$(GREEN)Build directory created.$(RESET)"

# The line below won't run if the source files don't exist or were not modified

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

clean:
	@echo "$(WHITE)Cleaning object files...$(RESET)"
	@$(RM) $(OBJDIR)
	@echo "$(YELLOW)All object files were removed.$(RESET)"

fclean: clean
	@echo "$(WHITE)Removing $(NAME)...$(RESET)"
	@$(RM) $(NAME)
	@echo "$(RED)$(NAME) has been deleted.$(RESET)"

re: fclean all

.PHONY: all clean fclean re
