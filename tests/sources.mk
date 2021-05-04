SRC_FILES	=	main.c

# UTILS #

SRC_FILES	+=	check_params.c				\
				check_recon_char.c			\
				check_return.c				\
				data_cmp.c					\
				ft_list_print.c				\
				ft_list_cmp.c				\
				launch_tests.c				\
				select_test.c				\
				launch_conv_tests.c			\
				launch_ctype_tests.c		\
				launch_io_tests.c			\
				launch_list_tests.c			\
				launch_num_tests.c			\
				launch_str_tests.c			\
				launch_stack_test.c			\
				print_ref.c					\
				print_test_input.c			\
				result_counter.c

# FUNCTION TESTS #

# CONVERSION FUNCTIONS #

SRC_FILES	+=	test_ft_atoi.c				\
				test_ft_itoa.c				\
				test_ft_utoa.c				\
				test_ft_strtod.c			\
				test_ft_strtol.c

# CTYPE FUNCTIONS #

SRC_FILES	+=	test_ft_charcount.c		\
				test_ft_isalnum.c		\
				test_ft_isalpha.c		\
				test_ft_isascii.c		\
				test_ft_isblank.c		\
				test_ft_ischarset.c		\
				test_ft_iscntrl.c		\
				test_ft_isdigit.c		\
				test_ft_islower.c		\
				test_ft_isnumeric.c		\
				test_ft_isprint.c		\
				test_ft_isspace.c		\
				test_ft_isupper.c		\
				test_ft_tolower.c		\
				test_ft_toupper.c


# INPUT/OUTPUT FUNCTIONS #

# SRC_FILES	+=	test_ft_putchar.c		\
# 				test_ft_putchar_fd.c

# LIST FUNCTIONS #

SRC_FILES	+=	test_ft_list_append.c	\
				test_ft_list_delif.c	\
				test_ft_list_prepend.c	\
				test_ft_list_size.c

# NUMERIC FUNCTIONS #

SRC_FILES	+=	test_ft_swap.c			\
				test_ft_nbrlen.c		\
				test_ft_nbrlen_base.c	\
				test_ft_unbrlen_base.c	\
				test_ft_n_range.c		\
				test_ft_f_range.c

# STRING #

SRC_FILES	+=	test_ft_split.c				\
				test_ft_str_arr_len.c		\
				test_ft_strcat.c			\
				test_ft_strncat.c			\
				test_ft_strlcat.c			\
				test_ft_strcmp.c			\
				test_ft_strcpy.c			\
				test_ft_strncpy.c			\
				test_ft_strlcpy.c			\
				test_ft_strdup.c			\
				test_ft_strjoin.c			\
				test_ft_strjoindel.c		\
				test_ft_strjoindelone.c		\
				test_ft_join_n_str.c		\
				test_ft_strlen.c			\
				test_ft_strtok.c			\
				test_ft_strtrim.c			\
				test_ft_append_char.c

# STACK #

SRC_FILES	+=	test_ft_stack.c				\
				ft_stack_cmp.c
