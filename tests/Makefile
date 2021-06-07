BIN_NAME := libft_tester

SHELL = /bin/sh
RM = /bin/rm

.SUFFIXES:
.SUFFIXES: .c .o .h

include includes.mk sources.mk

OBJ_FILES	=	$(SRC_FILES:%.c=%.o)
LIBS		=	ft

# ******************************* DIRS AND PATHS ***************************** #

LIB_DIR		=	../

INC_DIR		=	include
SRC_DIR		=	src
OBJ_DIR		=	obj


SUB_DIRS	=	test_launchers \
				test_utils \
				ft_conv \
				ft_ctype \
				ft_list \
				ft_num \
				ft_str \
				ft_stack

SRC_SUBDIRS	=	$(addprefix $(SRC_DIR)/, $(SUB_DIRS))

INC			=	$(addprefix $(INC_DIR)/, $(INC_FILES))
OBJ			=	$(addprefix $(OBJ_DIR)/, $(OBJ_FILES))

INC_PATHS	=	$(INC_DIR) $(addsuffix /$(INC_DIR), $(LIB_DIR))

VPATH		=	$(SRC_DIR) $(SRC_SUBDIRS)

# *************************** COMPILING AND FLAGS **************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = $(foreach path, $(INC_PATHS), -I$(path))
LDFLAGS = -L$(LIB_DIR)
LDLIBS = -l$(LIBS)
DEBUG_CFLAGS += -g3 -D DEBUG

# ********************************* COLORS *********************************** #

COL_RESET	=	\033[0m
COL_RED		=	\033[31m
COL_GREEN	=	\033[32m
COL_BLUE	=	\033[34m

# ********************************** RULES *********************************** #

all: $(BIN_NAME)

# INSTALL #

install :
	@echo "\n$(COL_BLUE)INSTALL LIBFT$(COL_RESET)"
	@make -C $(LIB_DIR)

re-install :
	@make -C $(LIB_DIR) fclean
	@make install

# OBJ DIR #

$(OBJ_DIR):
	@echo "$(COL_BLUE)CREATE PROJECT$(COL_RESET)"
	@mkdir -p $@
	@echo "Created\t\t$@ directory"

# COMPILING #

$(OBJ_DIR)/%.o : %.c $(INC)
	@echo "\r\033[KCompiling\t$< \c"
	@$(CC) $(CPPFLAGS) $(CFLAGS) -o $@ -c $<

# LINKING #

$(BIN_NAME): $(OBJ_DIR) $(OBJ) $(INC)
	@$(CC) $(OBJ) $(LDFLAGS) $(LDLIBS) -o $@
	@echo "\n$(COL_GREEN)OK$(COL_RESET)\t\t$@ is ready"

# DEBUG #

# Debug build for gdb debugging #

#debug: CFLAGS += $(DEBUG_CFLAGS)
debug: re
	@echo "DEBUG\t\tDebug build done"

check_leaks: re
	@echo "$(COL_BLUE)CHECK LEAKS$(COL_RESET)"
	@$(RM) -f leaks.txt
	@echo "\n---------------------- LEAKS CHECK ----------------------\n" >> leaks.txt ; \
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./libft_tester >> leaks.txt 2>&1 ;
	@if grep -q "LEAK SUMMARY:" leaks.txt ; \
	then echo "$(COL_RED)KO$(COL_RESET)\t\tLeaks found." ; \
	else echo "$(COL_GREEN)OK$(COL_RESET)\t\tNo leaks found." ; fi
	@if grep -q "ERROR SUMMARY: 0" leaks.txt ; \
	then echo "$(COL_GREEN)OK$(COL_RESET)\t\tNo errors found." ; \
	else echo "$(COL_RED)KO$(COL_RESET)\t\tErrors found." ; fi
	@echo "Done\t\tCheck results in 'leaks.txt'"
	@$(RM) -f outfile

# CLEAN #

clean:
	@echo "$(COL_BLUE)CLEAN PROJECT$(COL_RESET)"
	@$(RM) -rf $(OBJ_DIR)
	@echo "Cleaned\t\tobject files"

fclean: clean
	@$(RM) -f $(BIN_NAME)
	@echo "Removed\t\t$(BIN_NAME)"

re: fclean all

.PHONY: all install re-install debug check_leaks clean fclean re
