NAME := libft.a

SHELL = /bin/sh
RM = /bin/rm

.SUFFIXES:
.SUFFIXES: .c .o .h

# ********************************* INCLUDES ********************************* #

INC_FILES	=	libft.h				\
				libft_char.h		\
				libft_conv.h		\
				libft_define.h		\
				libft_file.h		\
				libft_list.h		\
				libft_mem.h			\
				libft_num.h			\
				libft_printf.h		\
				libft_put.h			\
				libft_recon.h		\
				libft_stack.h		\
				libft_str.h			\
				libft_tab.h			\

# ********************************* C FILES ********************************** #

# Memory functions #

SRC_FILES	=	ft_bzero.c			\
				ft_calloc.c			\
				ft_memalloc.c		\
				ft_memccpy.c		\
				ft_memchr.c			\
				ft_memcmp.c			\
				ft_memcpy.c			\
				ft_memdel.c			\
				ft_memmove.c		\
				ft_memset.c			\
				ft_realloc.c		\
				ft_reallocarray.c

# Input/Output functions #

SRC_FILES	+=	ft_putchar.c		\
				ft_putchar_fd.c		\
				ft_putendl.c		\
				ft_putendl_fd.c		\
				ft_putnbr.c			\
				ft_putnbr_fd.c		\
				ft_putstr.c			\
				ft_putstr_fd.c

# Char recon functions #

SRC_FILES	+=	ft_tolower.c		\
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
				ft_charcount.c

# String functions #

SRC_FILES	+=	ft_split.c			\
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
				ft_strjoindelone.c	\
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
				ft_strlowcase.c

# Array functions #

SRC_FILES	+=	ft_tablen.c			\
				ft_tabdel.c

# List functions #

SRC_FILES	+=	ft_lstappend.c		\
				ft_lstat.c			\
				ft_lstdel.c			\
				ft_lstdelif.c		\
				ft_lstdelone.c		\
				ft_lstfind.c		\
				ft_lstiter.c		\
				ft_lstiterif.c		\
				ft_lstlast.c		\
				ft_lstmap.c			\
				ft_lstnew.c			\
				ft_lstprepend.c		\
				ft_lstrev.c			\
				ft_lstsize.c		\
				ft_lstsort.c		\
				ft_lstswap.c

# Conversion functions #

SRC_FILES	+=	ft_atoi.c			\
				ft_atoi_base.c		\
				ft_atos.c			\
				ft_itoa.c			\
				ft_itoa_base.c		\
				ft_utoa.c			\
				ft_utoa_base.c		\
				ft_strtod.c			\

# Numeric functions #

SRC_FILES	+=	ft_swap.c			\
				ft_nbrlen.c			\
				ft_nbrlen_base.c	\
				ft_unbrlen_base.c	\
				ft_n_range.c		\
				ft_f_range.c

# ft_printf #

SRC_FILES	+=	ft_printf.c				\
				ft_dprintf.c			\
				ft_add_prefix.c			\
				ft_construct_output.c	\
				ft_handle_char.c		\
				ft_handle_int.c			\
				ft_handle_ptr.c			\
				ft_handle_str.c			\
				ft_handle_uint.c		\
				ft_is_prefix.c			\
				ft_parse_format.c		\
				ft_printf_nbr.c			\
				ft_put_padding.c		\
				ft_put_zeroes.c			\
				get_arg.c				\
				get_digits.c			\
				parsing_fields.c

# Stream functions #

SRC_FILES	+=	ft_fileno.c				\
				ft_fgetc.c				\
				get_next_line.c

# Stack struct functions #

SRC_FILES	+=	ft_increase_stack.c		\
				ft_peek_stack.c			\
				ft_pop_stack.c			\
				ft_push_to_stack.c		\
				ft_stack.c				\
				ft_stack_is_empty.c		\
				ft_stack_is_full.c

# ********************************* OBJECTS ********************************** #

OBJ_FILES	=	$(SRC_FILES:%.c=%.o)

# ****************************** DIRS AND PATHS ****************************** #

INC_DIR		=	includes
SRC_DIR		=	src
OBJ_DIR		=	obj

SUB_DIRS	=	ft_char \
				ft_conv \
				ft_file \
				ft_lst \
				ft_mem \
				ft_num \
				ft_printf \
				ft_put \
				ft_recon \
				ft_stack \
				ft_str \
				ft_tab

SRC_SUBDIRS	=	$(addprefix $(SRC_DIR)/, $(SUB_DIRS))

INC			=	$(addprefix $(INC_DIR)/, $(INC_FILES))
OBJ			=	$(addprefix $(OBJ_DIR)/, $(OBJ_FILES))

VPATH		=	$(SRC_DIR) $(SRC_SUBDIRS)

# *************************** COMPILING AND FLAGS **************************** #

CC = gcc
AR = ar

ARFLAGS = -rcs
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I$(INC_DIR)

# ********************************** RULES *********************************** #

all: $(NAME)

# OBJ DIR #

$(OBJ_DIR):
	@mkdir -p $@
	@echo "Created\t\t$@ directory"

# COMPILING #

$(OBJ_DIR)/%.o : %.c
	@echo "\r\033[KCompiling\t$< \c"
	@$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJ_DIR) $(OBJ) $(INC)
	@$(AR) $(ARFLAGS) $@ $(OBJ)
	@echo "\nOK\t\t$(NAME) is ready"

# DEBUG #

show:
	@echo "VPATH: $(VPATH)"

debug: CFLAGS+=-g3
debug: re

# CLEAN #

clean:
	@$(RM) -rf $(OBJ_DIR)
	@echo "Cleaned\t\tobject files"

fclean: clean
	@$(RM) -f $(NAME)
	@echo "Removed\t\t$(NAME)"

re: fclean all

.PHONY: all show debug clean fclean re
