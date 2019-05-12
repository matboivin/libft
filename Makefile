# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 09:17:58 by mboivin           #+#    #+#              #
#    Updated: 2019/05/12 15:38:35 by mboivin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ******************************** Variables ********************************* #

NAME =			libft.a
SHELL =			/bin/sh
CC =			gcc
RM =			rm -rf
AR =			ar
ARFLAGS =		-rcs
CFLAGS ?=		-Wall -Wextra -Werror
CPPFLAGS =		-I $(INCDIR)
QUIET :=		@
ECHO :=			@echo
ifneq ($(QUIET),@)
ECHO :=			@true
endif

SRCDIR =		srcs
INCDIR =		includes
OBJDIR =		objs

INCLUDES =		$(addprefix -I, $(INCDIR))
SRC =			$(addprefix $(SRCDIR)/, $(SRC_FILES))
OBJ =			$(addprefix $(OBJDIR)/, $(SRC_FILES:.c=.o))

.SUFFIXES:
.SUFFIXES: .c .o .h

# ********************************* Colors *********************************** #

ifdef TERM
EOC =			\033[0m
RED =			\033[31m
GREEN =			\033[32m
YELLOW =		\033[33m
WHITE =			\033[37m
endif

# ********************************* C Files ********************************** #

# Memory functions

SRC_FILES =		ft_bzero.c \
				ft_memset.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memalloc.c \
				ft_memdel.c

# Input/Output functions

SRC_FILES +=	ft_putchar.c \
				ft_putstr.c \
				ft_putendl.c \
				ft_putnbr.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c

# Char recon functions

SRC_FILES +=	ft_toupper.c \
				ft_tolower.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_iswhitespace.c \
				ft_isspace.c \
				ft_ischarset.c

# String functions

SRC_FILES +=	ft_strlen.c \
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
				ft_strrev.c

# List functions

SRC_FILES +=	ft_lstnew.c \
				ft_lstdelone.c \
				ft_lstdel.c \
				ft_lstadd.c \
				ft_lstiter.c \
				ft_lstmap.c

# Conversion functions

SRC_FILES +=	ft_atoi.c \
				ft_itoa.c

# Miscellaneous functions

SRC_FILES +=	ft_swap.c \
				ft_nbrlen.c \
				get_next_line.c

# ********************************** Rules *********************************** #

.PHONY: all
all: $(NAME)

$(NAME): $(OBJDIR) $(OBJ) $(INCDIR)/libft.h
	$(ECHO) "Archiving object files..."
	$(QUIET) $(AR) $(ARFLAGS) $@ $(OBJ)
	$(ECHO) "$(GREEN)libft is ready.$(EOC)"

$(OBJDIR):
	$(ECHO) "Making directory $@..."
	$(QUIET) mkdir -p $@
	$(ECHO) "$(GREEN)Build directory created.$(EOC)"

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(QUIET) $(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

.PHONY: debug
debug: CFLAGS=-g
debug: re

.PHONY: clean
clean:
	$(ECHO) "Cleaning object files..."
	$(QUIET) $(RM) $(OBJDIR)
	$(ECHO) "$(YELLOW)All object files were removed.$(EOC)"

.PHONY: fclean
fclean: clean
	$(ECHO) "Removing $(NAME)..."
	$(QUIET) $(RM) $(NAME)
	$(ECHO) "$(RED)$(NAME) has been deleted.$(EOC)"

.PHONY: re
re: fclean all