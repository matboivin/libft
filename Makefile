NAME := libft.a

SHELL = /bin/sh
RM = /bin/rm

.SUFFIXES:
.SUFFIXES: .c .o .h

include includes.mk sources.mk

OBJ_FILES	=	$(SRC_FILES:%.c=%.o)

# ****************************** DIRS AND PATHS ****************************** #

INC_DIR		=	includes
SRC_DIR		=	src
OBJ_DIR		=	obj

SUB_DIRS	=	ft_conv \
				ft_ctype \
				ft_io \
				ft_list \
				ft_mem \
				ft_num \
				ft_stack \
				ft_str

SRC_SUBDIRS	=	$(addprefix $(SRC_DIR)/, $(SUB_DIRS))

INC			=	$(addprefix $(INC_DIR)/, $(INC_FILES))
OBJ			=	$(addprefix $(OBJ_DIR)/, $(OBJ_FILES))

VPATH		=	$(SRC_SUBDIRS)

# *************************** COMPILING AND FLAGS **************************** #

CC = gcc
AR = ar

ARFLAGS = -rcs
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I$(INC_DIR)
DEBUG_CFLAGS = -g3

# ********************************** RULES *********************************** #

all: $(NAME)

# OBJ DIR #

$(OBJ_DIR):
	@mkdir -p $@
	@echo "Created\t\t$@ directory"

# COMPILING #

$(OBJ_DIR)/%.o : %.c $(INC)
	@echo "\r\033[KCompiling\t$< \c"
	@$(CC) $(CPPFLAGS) $(CFLAGS) -o $@ -c $<

# ARCHIVING AND INDEXING #

$(NAME): $(OBJ_DIR) $(OBJ) $(INC)
	@$(AR) $(ARFLAGS) $@ $(OBJ)
	@echo "\nOK\t\t$@ is ready"

# DEBUG #

show:
	@echo "VPATH: $(VPATH)"
	@echo "SRC_SUBDIRS: $(SRC_SUBDIRS)"

# Debug build for gdb debugging #

#debug: CFLAGS += $(DEBUG_CFLAGS)
debug: re
	@make -C tests/ re
	@./tests/libft_tester

# CLEAN #

clean:
	@$(RM) -rf $(OBJ_DIR)
	@echo "Cleaned\t\tobject files"

fclean: clean
	@$(RM) -f $(NAME)
	@echo "Removed\t\t$(NAME)"

re: fclean all

.PHONY: all show debug check_leaks clean fclean re
