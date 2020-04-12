# libft

libft is an individual school project at [42 Paris](https://www.42.fr) campus.

42 is a private, non-profit and tuition-free Computer Science school based on peer-to-peer learning and hands-on projects.

> First C project: many implementations of the Standard C Library functions, and additional functions.
<br>

### Table of Contents

- [Prerequisites](#prerequisites)
- [Function list](#function-list)
- [Acknowledgements](#acknowledgements)
<br>

The libft project is about implementing some of the Standard C Library functions to get a glimpse on basic algorithms. This personal library aims to be expanded and improved throughout the years.

The 'ft' in front of function names stands for 'fourty two'.
<br>

### Prerequisites

GNU make and a C compiler.

## Function list

### Memory functions

| Name                                         |Description                     |
|:---------------------------------------------|:-------------------------------|
|[ft_bzero](src/mem/ft_bzero.c)                | Erases the data in the `n` bytes of the memory starting at the location pointed to by `s`, by writing zeros|
|[ft_calloc](src/mem/ft_calloc.c)              |Allocates enough space for `count` objects that are `size` bytes of memory each |
|[ft_memalloc](src/mem/ft_memalloc.c)          |Allocates (with `malloc(3)`) and returns a “fresh” memory area |
|[ft_memccpy](src/mem/ft_memccpy.c)            |Copies bytes from memory area `src` to `dst` stopping after the first occurrence of `c` or `n` bytes have been copied |
|[ft_memchr](src/mem/ft_memchr.c)              |Locates the first occurrence of `c` |
|[ft_memcmp](src/mem/ft_memcmp.c)              |Compares byte string `s1` against byte string `s2` |
|[ft_memcpy](src/mem/ft_memcpy.c)              |Copies `n` bytes from memory area `src` to `dst` |
|[ft_memdel](src/mem/ft_memdel.c)              |Takes as a parameter the address of a memory area that needs to be freed with `free(3)`, then puts the pointer to NULL |
|[ft_memmove](src/mem/ft_memmove.c)            |Copies `len` characters from `src` to `dst` |
|[ft_memset](src/mem/ft_memset.c)              |Writes `len` bytes of value `c` to string `s` |

### Input/Output functions

| Name                                         |Description                     |
|:---------------------------------------------|:-------------------------------|
|[ft_putchar_fd](src/io/ft_putchar_fd.c)       |Outputs the character `c` to given file descriptor |
|[ft_putchar](src/io/ft_putchar.c)             |Outputs the character `c` to the standard output |
|[ft_putendl_fd](src/io/ft_putendl_fd.c)       |Outputs the string `s` to given file descriptor, followed by a newline |
|[ft_putendl](src/io/ft_putendl.c)             |Outputs the string `s` to the standard output, followed by a newline |
|[ft_putnbr_fd](src/io/ft_putnbr_fd.c)         |Outputs the integer `n` to given file descriptor |
|[ft_putnbr](src/io/ft_putnbr.c)               |Outputs the integer `n` to the standard output |
|[ft_putstr_fd](src/io/ft_putstr_fd.c)         |Outputs the string `s` to given file descriptor |
|[ft_putstr](src/io/ft_putstr.c)               |Outputs the string `s` to the standard output |

### Char recon functions

| Name                                         |Description                     |
|:---------------------------------------------|:-------------------------------|
|[ft_tolower](src/recon/ft_tolower.c)          |Converts an upper-case letter to the corresponding lower-case letter |
|[ft_toupper](src/recon/ft_toupper.c)          |Converts a lower-case letter to the corresponding upper-case letter |
|[ft_isalnum](src/recon/ft_isalnum.c)          |Checks if `c` is an alphanumeric character |
|[ft_isalpha](src/recon/ft_isalpha.c)          |Checks if `c` is an alphabet character |
|[ft_isascii](src/recon/ft_isascii.c)          |Checks if `c` is a 7-bit US-ASCII character code between 0 and octal 0177 inclusive |
|[ft_isblank](src/recon/ft_isblank.c)          |Checks if `c` is a space or tab character |
|[ft_ischarset](src/recon/ft_ischarset.c)      |Checks if `c` is present in `set` |
|[ft_iscntrl](src/recon/ft_iscntrl.c)          |Checks if `c` is a control character |
|[ft_isdigit](src/recon/ft_isdigit.c)          |Checks if `c` is a numeric character |
|[ft_islower](src/recon/ft_islower.c)          |Checks if `c` is a lower-case character |
|[ft_isprint](src/recon/ft_isprint.c)          |Checks if `c` is a printable character |
|[ft_isspace](src/recon/ft_isspace.c)          |Checks if `c` is a space character |
|[ft_isupper](src/recon/ft_isupper.c)          |Checks if `c` is a upper-case character |

### String functions

| Name                                         |Description                     |
|:---------------------------------------------|:-------------------------------|
|[ft_split](src/str/ft_split.c)                |Allocates (with `malloc(3)`) and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter |
|[ft_strcat](src/str/ft_strcat.c)              |Appends the NUL-terminated string `s2` to the end of `s1`, NUL-terminating the result |
|[ft_strchr](src/str/ft_strchr.c)              |Locates the first occurrence of `c` in the string pointed to by `s` |
|[ft_strclr](src/str/ft_strclr.c)              |Sets every character of the string to the value ’\0’ |
|[ft_strcmp](src/str/ft_strcmp.c)              |Compares the string pointed to, by `s1` to the string pointed to by `s2` |
|[ft_strcpy](src/str/ft_strcpy.c)              |Copies the string `src` to `dst`, NUL-terminating the result |
|[ft_strdel](src/str/ft_strdel.c)              |Frees a string, then sets its pointer to NULL |
|[ft_strdup](src/str/ft_strdup.c)              |Allocates sufficient memory for a copy of the string `s1`, does the copy, and returns a pointer to it |
|[ft_strequ](src/str/ft_strequ.c)              |Lexicographically compares `s1` and `s2` |
|[ft_striter](src/str/ft_striter.c)            |Applies the function `f` to each character of the string passed as argument |
|[ft_striteri](src/str/ft_striteri.c)          |Applies the function `f` to each character of the string passed as argument, and passing its index as first argument |
|[ft_strjoin](src/str/ft_strjoin.c)            |Allocates (with `malloc(3)`) and returns a new string, result of the concatenation of `s1` and `s2` |
|[ft_strjoindel](src/str/ft_strjoindel.c)      |Allocates (with `malloc(3)`) and returns a new string, result of the concatenation of `s1` and `s2`, frees s1 if it exists |
|[ft_strlcat](src/str/ft_strlcat.c)            |Appends the NUL-terminated string `src` to the end of `dst` at most `size` − `dst` length − 1 bytes, NUL-terminating the result |
|[ft_strlcpy](src/str/ft_strlcpy.c)            |Copies up to size − 1 characters from the NUL-terminated string `src` to `dst`, NUL-terminating the result |
|[ft_strlen](src/str/ft_strlen.c)              |Computes the length of the string `s` |
|[ft_strmap](src/str/ft_strmap.c)              |Applies the function `f` to each character of the string given as  argument to create a “fresh” new string (with `malloc(3)`) resulting from the successive applications of `f` |
|[ft_strmapi](src/str/ft_strmapi.c)            |Applies the function `f` to each character of the string passed as argument to create a new string (with `malloc(3)`) resulting from successive applications of `f` |
|[ft_strncat](src/str/ft_strncat.c)            |Appends no more than n characters of the string pointed to by `src` to the end of the string pointed to by `dst` and nul-terminates the resulting string |
|[ft_strncmp](src/str/ft_strncmp.c)            |Lexicographically compares the null-terminated strings `s1` and `s2` |
|[ft_strncpy](src/str/ft_strncpy.c)            |Copies up to `n` characters from the string pointed to by `src` to `dst` |
|[ft_strnequ](src/str/ft_strnequ.c)            |Lexicographically compares `s1` and `s2` up to `n` characters or  until a ’\0’ is reached |
|[ft_strnew](src/str/ft_strnew.c)              |Allocates (with `malloc(3)`) and returns a “fresh” string ending with ’\0’ |
|[ft_strnstr](src/str/ft_strnstr.c)            |Locates the first occurrence of the null-terminated string `needle` in the null-terminated string `haystack` |
|[ft_strrchr](src/str/ft_strrchr.c)            |Locates the last occurrence of `c` in the string pointed to by `s` |
|[ft_strrev](src/str/ft_strrev.c)              |Reverses the order of characters in a string |
|[ft_strstr](src/str/ft_strstr.c)              |Finds the first occurrence of the substring `needle` in the string `s` |
|[ft_strtrim](src/str/ft_strtrim.c)            |Allocates (with `malloc(3)`) and returns a copy of the string given as argument without the characters specified in the set argument at the beginning and the end of the string |
|[ft_substr](src/str/ft_substr.c)              |Allocates (with `malloc(3)`) and returns a substring from the string given in argument. It begins at index `start` and is of maximum size `len` |

### Int functions

| Name                                         |Description                     |
|:---------------------------------------------|:-------------------------------|
|[ft_swap](src/int/ft_swap.c)                  |Swaps the value of two integers |
|[ft_nbrlen](src/int/ft_nbrlen.c)              |Computes the length of the integer passed as an argument|
|[ft_nbrlen_base](src/int/ft_nbrlen_base.c)    |Computes the length of the integer passed as an argument using the specified base |

### Conversion functions

| Name                                         |Description                     |
|:---------------------------------------------|:-------------------------------|
|[ft_atoi](src/conv/ft_atoi.c)                 |Converts a string to an integer |
|[ft_atoi_base](src/conv/ft_atoi_base.c)       |Converts a string (base N <= 16) to an integer |
|[ft_itoa](src/conv/ft_itoa.c)                 |Converts an integer to a string representation |
|[ft_itoa_base](src/conv/ft_itoa_base.c)       |Converts an integer to a string representation using the specified base |

### List functions

| Name                                         |Description                     |
|:---------------------------------------------|:-------------------------------|
|[ft_lstadd_back](src/list/ft_lstadd_back.c)   |Adds the element new at the end of the list |
|[ft_lstadd_front](src/list/ft_lstadd_front.c) |Adds the element new at the beginning of the list |
|[ft_lstat](src/list/ft_lstat.c)               |Finds the Nth element of the list |
|[ft_lstclear](src/list/ft_lstclear.c)         |Deletes and frees the given element and every successor of that element |
|[ft_lstdelif](src/list/ft_lstdelif.c)         |Erases off the list all elements, whose data is "equal" to the reference data |
|[ft_lstdelone](src/list/ft_lstdelone.c)       |Takes as a parameter an element and frees the memory of the element’s content using the function del given as a parameter |
|[ft_lstfind](src/list/ft_lstfind.c)           |Searches for an element that stores a given data |
|[ft_lstiter](src/list/ft_lstiter.c)           |Iterates the list lst and applies the function f to the content of each element |
|[ft_lstiterif](src/list/ft_lstiterif.c)       |Iterates the list lst and applies the function f to the content of elements that are "equal" to the reference information |
|[ft_lstlast](src/list/ft_lstlast.c)           |Returns the last element of the list |
|[ft_lstmap](src/list/ft_lstmap.c)             |Iterates the list lst and applies the function f to the content of each element. Creates a new list resulting of the successive applications of the function f. The del function is here to delete the content of an element if needed. |
|[ft_lstnew](src/list/ft_lstnew.c)             |Allocates (with `malloc(3)`) and returns a new element |
|[ft_lstrev](src/list/ft_lstrev.c)             |Reverses the order of a list’s elements |
|[ft_lstsize](src/list/ft_lstsize.c)           |Counts the number of elements int a list |
|[ft_lstsort](src/list/ft_lstsort.c)           |Sorts the list’s contents by ascending order by comparing two links thanks to a function that can compare the content held in those two links |
|[ft_lstswap](src/list/ft_lstswap.c)           |Swaps the values of two list elements |

### GNL

| Name                                         |Description                     |
|:---------------------------------------------|:-------------------------------|
|[get_next_line](src/gnl/get_next_line.c)      |Reads a file line by line       |
<br>

### Acknowledgements

School project done at [42 Paris](https://www.42.fr).
