NAME := libft.a

SHELL = /bin/sh
CC = gcc
RM = rm -rf
AR = ar
ARFLAGS = -rcs
CFLAGS = -Wall -Wextra -Werror
IFLAGS = -I$(INC_PATH)

.SUFFIXE:
.SUFFIXES: .c .o .h

INC_PATH = $(shell find includes -type d)
SRC_PATH = $(shell find src -type d)
OBJ_PATH = obj

vpath %.c $(foreach dir, $(SRC_PATH), $(dir):)

# Memory functions

SRC		=		ft_bzero.c			\
				ft_calloc.c			\
				ft_memalloc.c		\
				ft_memccpy.c		\
				ft_memchr.c			\
				ft_memcmp.c			\
				ft_memcpy.c			\
				ft_memdel.c			\
				ft_memmove.c		\
				ft_memset.c			\

# Input/Output functions

SRC		+=		ft_putchar.c		\
				ft_putchar_fd.c		\
				ft_putendl.c		\
				ft_putendl_fd.c		\
				ft_putnbr.c			\
				ft_putnbr_fd.c		\
				ft_putstr.c			\
				ft_putstr_fd.c		\

# Char recon functions

SRC		+=		ft_tolower.c		\
				ft_toupper.c		\
				ft_isalnum.c		\
				ft_isalpha.c		\
				ft_isascii.c		\
				ft_isblank.c		\
				ft_ischarset.c		\
				ft_iscntrl.c		\
				ft_isdigit.c		\
				ft_islower.c		\
				ft_isprint.c		\
				ft_isspace.c		\
				ft_isupper.c		\
				ft_isnumeric.c		\
				ft_charcount.c		\

# String functions

SRC		+=		ft_split.c			\
				ft_strappend.c		\
				ft_strcat.c			\
				ft_strchr.c			\
				ft_strclr.c			\
				ft_strcmp.c			\
				ft_strcpy.c			\
				ft_strdel.c			\
				ft_strdup.c			\
				ft_strequ.c			\
				ft_striter.c		\
				ft_striteri.c		\
				ft_strjoin.c		\
				ft_strjoindel.c		\
				ft_strlcat.c		\
				ft_strlcpy.c		\
				ft_strlen.c			\
				ft_strmap.c			\
				ft_strmapi.c		\
				ft_strncat.c		\
				ft_strncmp.c		\
				ft_strncpy.c		\
				ft_strnequ.c		\
				ft_strnew.c			\
				ft_strnstr.c		\
				ft_strprepend.c		\
				ft_strrchr.c		\
				ft_strrep.c			\
				ft_strrev.c			\
				ft_strstr.c			\
				ft_strtrim.c		\
				ft_substr.c			\
				ft_strupcase.c		\
				ft_strlowcase.c		\

# Array functions

SRC		+=		ft_tablen.c			\
				ft_tabdel.c			\

# List functions

SRC		+=		ft_lstat.c			\
				ft_lstnew.c			\
				ft_lstadd_front.c	\
				ft_lstsize.c		\
				ft_lstlast.c		\
				ft_lstadd_back.c	\
				ft_lstdelif.c		\
				ft_lstdelone.c		\
				ft_lstclear.c		\
				ft_lstiter.c		\
				ft_lstmap.c			\
				ft_lstrev.c			\
				ft_lstswap.c		\
				ft_lstfind.c		\
				ft_lstiterif.c		\
				ft_lstsort.c		\

# Conversion functions

SRC		+=		ft_atoi.c			\
				ft_atoi_base.c		\
				ft_atos.c			\
				ft_itoa.c			\
				ft_itoa_base.c		\
				ft_utoa.c			\
				ft_utoa_base.c		\
				ft_strtod.c			\

# Int functions

SRC		+=		ft_swap.c			\
				ft_nbrlen.c			\
				ft_nbrlen_base.c	\
				ft_unbrlen_base.c	\
				ft_n_range.c		\
				ft_f_range.c		\

# GNL

SRC		+=		get_next_line.c		\

# ft_printf

SRC		+=		ft_printf.c			\
				ft_dprintf.c		\
				conv_char.c			\
				conv_int.c			\
				conv_p.c			\
				conv_percent.c		\
				conv_s.c			\
				conv_uint.c			\
				format_csp.c		\
				format_nbr.c		\
				format_utils.c		\
				init_struct.c		\
				parsing.c			\
				parsing_fields.c	\
				parsing_utils.c		\

OBJ = $(addprefix $(OBJ_PATH)/, $(SRC:%.c=%.o))

.PHONY: all
all: $(NAME)

$(NAME): $(OBJ_PATH) $(OBJ)
	@$(AR) $(ARFLAGS) $@ $(OBJ)
	@echo "[OK]\t\t$(NAME) is ready"

$(OBJ_PATH):
	@mkdir -p $@
	@echo "[OK]\t\tCreated $@ directory"

$(OBJ_PATH)/%.o : %.c
	@echo "[Compiling]\t$< -> $@ ..."
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

.PHONY: debug
debug: CFLAGS+=-g3
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
