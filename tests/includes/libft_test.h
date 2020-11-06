/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 00:12:45 by mboivin           #+#    #+#             */
/*   Updated: 2020/11/06 15:21:07 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST_H
# define LIBFT_TEST_H

# include <stdio.h>
# include "libft.h"

/*
** Test values
*/

# define MIN_ARGC 1
# define MAX_ARGC 2
# define DEFAULT_VALUE 0
# define READ_MODE "r"

# define TEST_FT_NUM 42
# define TEST_NEG -100

# define TEST_STR_EMPTY ""
# define TEST_STR_00 "Hello World!"
# define TEST_STR_01 "Hell"
# define TEST_STR_02 "a     bcd ef"
# define TEST_STR_03 "A     BCD EF"
# define TEST_STR_04 "FOO"
# define TEST_STR_05 "bar"

# define TEST_NODE_1 "1ST INPUT"
# define TEST_NODE_2 "2ND INPUT"
# define TEST_NODE_3 "3RD INPUT"
# define TEST_NODE_4 "4TH INPUT"


/*
** Output formatting
*/

# define COL_RESET "\033[0m"
# define COL_WHITE_B "\033[1m"
# define COL_RED "\033[0;31m"
# define COL_RED_B "\033[1;31m"
# define COL_GREEN "\033[0;32m"
# define COL_GREEN_B "\033[1;32m"
# define COL_YELLOW "\033[0;33m"
# define COL_YELLOW_B "\033[1;33m"
# define COL_BLUE "\033[0;34m"
# define COL_BLUE_B "\033[1;34m"

# define PRINT_SEP(void)												\
{																		\
	printf(																\
		"%s_______________________________________________________________________________%s\n\n", COL_BLUE, COL_RESET);	\
}

# define PRINT_TITLE(title)												\
{																		\
	PRINT_SEP();														\
	printf("%40s%s%s\n\n", COL_BLUE_B, title, COL_RESET);				\
	PRINT_SEP();														\
}

# define PRINT_TEST_NAME(name)											\
{																		\
	printf("%s-> %s%s\n\n", COL_BLUE_B, name, COL_RESET);				\
}

# define PRINT_TEST_NUMBER(num)											\
{																		\
	printf("%sTest n. %d:%s\n", COL_BLUE, num, COL_RESET);				\
}

# define PRINT_TEST_LIST(test_lst)										\
{																		\
	printf("Input test list:\n");										\
	ft_list_print(test_lst);											\
	printf("\n");														\
}

# define PRINT_TEST_OK(void)											\
{																		\
	printf("%s-> [OK]%s\n\n", COL_GREEN_B, COL_RESET);					\
}

# define PRINT_TEST_KO(void)											\
{																		\
	printf("%s-> [KO]%s\n\n", COL_RED_B, COL_RESET);					\
}

# define PRINT_TEST_RESULTS(passed, total)								\
{																		\
	printf("%d/%d passed tests\n", passed, total);						\
	if (passed == total)												\
		printf("%s-> [OK] All tests passed%s\n\n",						\
		COL_GREEN_B, COL_RESET);										\
	else																\
		printf(															\
			"%s-> [KO] %d tests failed%s\n\n",							\
			COL_RED_B, (total - passed), COL_RESET);					\
}

/*
** Result counter
*/

typedef	struct	s_result
{
	uint32_t	total;
	uint32_t	passed;
	int			test_num;
}				t_result;

extern t_result	*g_results;

/*
** Function tests
*/

void			launch_tests(void);
void			select_test(char *option);

void			launch_conv_tests(void);
void			launch_ctype_tests(void);
void			launch_list_tests(void);
void			launch_str_tests(void);

/*
** Conv functions
*/

void			test_ft_atoi(void);
void			test_ft_itoa(void);
void			test_ft_utoa(void);
void			test_ft_strtod(void);

/*
** Ctype functions
*/

void			test_ft_charcount(void);
void			test_ft_isalnum(void);
void			test_ft_isalpha(void);
void			test_ft_isdigit(void);

bool			check_recon_char(int ret, int ft_ret);

/*
** List functions
*/

void			test_ft_list_append(void);
void			test_ft_list_delif(void);
void			test_ft_list_prepend(void);
void			test_ft_list_size(void);
void			test_ft_list_sort(void);

void			ft_list_print(t_node *node);
int				ft_list_cmp(t_node *test_lst, char **ref);
int				data_cmp(void *data, void *data_ref);

/*
** String functions
*/

void			test_ft_strcmp(void);
void			test_ft_strcpy(void);
void			test_ft_strdup(void);
void			test_ft_strlen(void);

/*
** Test utils
*/

char			*check_params(int argc, char **argv);
void			check_return(bool condition);
t_result		*malloc_result(void);
void			free_result(t_result *to_free);
void			print_test_input(char *input1, char *input2);
void			print_ref(char **ref, int size);

#endif
