NAME := libft.a
SHELL = /bin/sh
CC = gcc
RM = rm -rf
AR = ar
ARFLAGS = -rcs
CFLAGS ?= -Wall -Wextra -Werror
CPPFLAGS = -I$(INC_PATH)

.SUFFIXES:
.SUFFIXES: .c .o .h

INC_FILES = libft.h
INC_PATH = inc
INC = $(addprefix $(INC_PATH)/, $(INC_FILES))

SRC_PATH = src
SRC = $(addprefix $(SRC_PATH)/, $(SRC_FILES))

OBJ_PATH = obj
OBJ = $(addprefix $(OBJ_PATH)/, $(SRC_FILES:.c=.o))

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

.PHONY: all
all: $(NAME)

$(NAME): $(OBJ_PATH) $(OBJ) $(INC)
	@$(AR) $(ARFLAGS) $@ $(OBJ)
	@echo "[OK]\t\t$(NAME) is ready"

$(OBJ_PATH):
	@mkdir -p $@
	@echo "[OK]\t\tCreated $@$  directory"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@echo "[Compiling]\t$< -> $@ ..."
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

.PHONY: debug
debug: CFLAGS=-g
debug: re

.PHONY: clean
clean:
	@$(RM) $(OBJ_PATH)
	@echo "[OK]\t\tCleaned object files"

.PHONY: fclean
fclean: clean
	@$(RM) $(NAME)
	@echo "[OK]\t\tRemoved $(NAME)"

.PHONY: re
re: fclean all