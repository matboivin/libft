# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 09:17:58 by mboivin           #+#    #+#              #
#    Updated: 2019/05/14 10:15:37 by mboivin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ________________________________ Variables _________________________________ #

NAME 		=		libft.a
SHELL 		=		/bin/sh
CC 			=		gcc
RM 			=		rm -rf
AR 			=		ar
ARFLAGS 	=		-rcs
CFLAGS 		?=		-Wall -Wextra -Werror
CPPFLAGS 	=		-I$(INC_DIR)

QUIET 		=		@
ECHO 		=		@echo
ifneq ($(QUIET),@)
ECHO 		=		@true
endif

SRC_DIR 	=		srcs
INC_DIR 	=		includes
OBJ_DIR 	=		objs

INCLUDES 	=		$(addprefix -I, $(INC_DIR))
SRC 		=		$(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ 		=		$(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))

.SUFFIXES:
.SUFFIXES: .c .o .h

# __________________________________ Colors __________________________________ #

ifdef TERM
EOC 		=		\033[0m
RED 		=		\033[38;5;88m
YELLOW		=		\033[38;5;178m
GREEN 		=		\x1b[32;01m
PURPLE 		=		\033[38;5;98m
BLUE		=		\033[34;01m
GREY		=		\033[38;5;242m
endif

# _________________________________ C Files __________________________________ #

# Memory functions

SRC_FILES	=		ft_bzero.c \
					ft_memset.c \
					ft_memcpy.c \
					ft_memccpy.c \
					ft_memmove.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memalloc.c \
					ft_memdel.c \

# Input/Output functions

SRC_FILES 	+=		ft_putchar.c \
					ft_putstr.c \
					ft_putendl.c \
					ft_putnbr.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c \

# Char recon functions

SRC_FILES 	+=		ft_toupper.c \
					ft_tolower.c \
					ft_isalpha.c \
					ft_isdigit.c \
					ft_isalnum.c \
					ft_isascii.c \
					ft_isprint.c \
					ft_iswhitespace.c \
					ft_isspace.c \
					ft_ischarset.c \

# String functions

SRC_FILES 	+=		ft_strlen.c \
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
					ft_strrev.c \

# List functions

SRC_FILES 	+=		ft_lstnew.c \
					ft_lstdelone.c \
					ft_lstdel.c \
					ft_lstadd.c \
					ft_lstiter.c \
					ft_lstmap.c \

# Conversion functions

SRC_FILES 	+=		ft_atoi.c \
					ft_itoa.c \

# Miscellaneous functions

SRC_FILES 	+=		ft_swap.c \
					ft_nbrlen.c \
					get_next_line.c \

# __________________________________ Rules ___________________________________ #

.PHONY: all
all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ) $(INC_DIR)/libft.h
	$(ECHO) "$(GREY)Archiving$(EOC) $(PURPLE)object files$(EOC) $(GREY)...$(EOC)"
	$(QUIET) $(AR) $(ARFLAGS) $@ $(OBJ)
	$(ECHO) "$(GREEN)⟹  $(NAME) is ready.$(EOC)"

$(OBJ_DIR):
	$(ECHO) "$(GREY)Making directory $(EOC)$(PURPLE)$@$(EOC) $(GREY)...$(EOC)"
	$(QUIET) mkdir -p $@
	$(ECHO) "$(GREEN)Build directory succesfully created.$(EOC)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(ECHO) "$(GREY)Compiling$(EOC) $(BLUE)$<$(EOC) $(GREY)->$(EOC) $(PURPLE)$@$(EOC) $(GREY)...$(EOC)"
	$(QUIET) $(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

.PHONY: debug
debug: CFLAGS=-g
debug: re

.PHONY: clean
clean:
	$(ECHO) "$(GREY)Cleaning $(EOC)$(PURPLE)object files$(EOC) $(GREY)...$(EOC)"
	$(QUIET) $(RM) $(OBJ_DIR)
	$(ECHO) "$(GREEN)⟹  All object files succesfully cleaned.$(EOC)"

.PHONY: fclean
fclean: clean
	$(ECHO) "$(GREY)Cleaning $(EOC)$(YELLOW)$(NAME)$(EOC) $(GREY)...$(EOC)"
	$(QUIET) $(RM) $(NAME)
	$(ECHO) "$(GREEN)⟹  $(NAME) has been succesfully deleted.$(EOC)"

.PHONY: re
re: fclean all