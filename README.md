# libft

libft is an individual school project at [42 Paris](https://www.42.fr) campus.

42 is a private, non-profit and tuition-free Computer Science school based on peer-to-peer learning and hands-on projects.

> First C project: many implementations of the Standard C Library functions, and additional functions.
<br>

### Table of Contents

- [Function list](#function-list)
- [Prerequisites](#prerequisites)
- [Acknowledgements](#acknowledgements)
<br>

In order to have a deeper understanding of C programming and data structures, 42 first school project is to implement some of the Standard C Library functions. It enables us to get a glimpse on basic algorithms and to create our own functions. The purpose is also to let us enrich this personal library in the future.

- **Libc Functions:** Standard C Library functions
- **Additional functions:** more functions required by 42
- Personal functions

The *'ft'* in front of function's names stands for *'fourty two'*. :)

**The libft project aims to be expanded and improved throughout the years.**
<br>

## Function list

### Memory functions

| Name                                |Description                                  |
|:------------------------------------|:--------------------------------------------|
|[ft_bzero](src/ft_bzero.c)           |                                             |
|[ft_calloc](src/ft_calloc.c)         |                                             |
|[ft_memalloc](src/ft_memalloc.c)     |                                             |
|[ft_memccpy](src/ft_memccpy.c)       |                                             |
|[ft_memchr](src/ft_memchr.c)         |                                             |
|[ft_memcmp](src/ft_memcmp.c)         |                                             |
|[ft_memcpy](src/ft_memcpy.c)         |                                             |
|[ft_memdel](src/ft_memdel.c)         |                                             |
|[ft_memmove](src/ft_memmove.c)       |                                             |
|[ft_memset](src/ft_memset.c)         |                                             |

### Input/Output functions

| Name                                |Description                                  |
|:------------------------------------|:--------------------------------------------|
|[ft_putchar](src/ft_putchar.c)       |                                             |
|[ft_putchar_fd](src/ft_putchar_fd.c) |                                             |
|[ft_putendl](src/ft_putendl.c)       |                                             |
|[ft_putendl_fd](src/ft_putendl_fd.c) |                                             |
|[ft_putnbr](src/ft_putnbr.c)         |                                             |
|[ft_putnbr_fd](src/ft_putnbr_fd.c)   |                                             |
|[ft_putstr](src/ft_putstr.c)         |                                             |
|[ft_putstr_fd](src/ft_putstr_fd.c)   |                                             |

### Char recon functions

| Name                                |Description                                  |
|:------------------------------------|:--------------------------------------------|
|[ft_tolower](src/ft_tolower.c)       |                                             |
|[ft_toupper](src/ft_toupper.c)       |                                             |
|[ft_isalnum](src/ft_isalnum.c)       |                                             |
|[ft_isalpha](src/ft_isalpha.c)       |                                             |
|[ft_isascii](src/ft_isascii.c)       |                                             |
|[ft_ischarset](src/ft_ischarset.c)   |                                             |
|[ft_isdigit](src/ft_isdigit.c)       |                                             |
|[ft_isprint](src/ft_isprint.c)       |                                             |
|[ft_isspace](src/ft_isspace.c)       |                                             |
|[ft_iswhitespace](src/ft_iswhitespace.c)|                                          |

### String functions

| Name                                |Description                                  |
|:------------------------------------|:--------------------------------------------|
|[ft_split](src/ft_split.c)           |                                             |
|[ft_strcat](src/ft_strcat.c)         |                                             |
|[ft_strchr](src/ft_strchr.c)         |                                             |
|[ft_strclr](src/ft_strclr.c)         |                                             |
|[ft_strcmp](src/ft_strcmp.c)         |                                             |
|[ft_strcpy](src/ft_strcpy.c)         |                                             |
|[ft_strdel](src/ft_strdel.c)         |                                             |
|[ft_strdup](src/ft_strdup.c)         |                                             |
|[ft_strequ](src/ft_strequ.c)         |                                             |
|[ft_striter](src/ft_striter.c)       |                                             |
|[ft_striteri](src/ft_striteri.c)     |                                             |
|[ft_strjoin](src/ft_strjoin.c)       |                                             |
|[ft_strlcat](src/ft_strlcat.c)       |                                             |
|[ft_strlcpy](src/ft_strlcpy.c)       |                                             |
|[ft_strlen](src/ft_strlen.c)         |                                             |
|[ft_strmap](src/ft_strmap.c)         |                                             |
|[ft_strmapi](src/ft_strmapi.c)       |                                             |
|[ft_strncat](src/ft_strncat.c)       |                                             |
|[ft_strncmp](src/ft_strncmp.c)       |                                             |
|[ft_strncpy](src/ft_strncpy.c)       |                                             |
|[ft_strnequ](src/ft_strnequ.c)       |                                             |
|[ft_strnew](src/ft_strnew.c)         |                                             |
|[ft_strnstr](src/ft_strnstr.c)       |                                             |
|[ft_strrchr](src/ft_strrchr.c)       |                                             |
|[ft_strrev](src/ft_strrev.c)         |                                             |
|[ft_strstr](src/ft_strstr.c)         |                                             |
|[ft_strtrim](src/ft_strtrim.c)       |                                             |
|[ft_substr](src/ft_substr.c)         |                                             |

### Conversion functions

| Name                                |Description                                  |
|:------------------------------------|:--------------------------------------------|
|[ft_atoi](src/ft_atoi.c)             |                                             |
|[ft_itoa](src/ft_itoa.c)             |                                             |

### List functions

| Name                                |Description                                  |
|:------------------------------------|:--------------------------------------------|
|[ft_lstadd_back](src/ft_lstadd_back.c) |                                         |
|[ft_lstadd_front](src/ft_lstadd_front.c) |                                         |
|[ft_lstclear](src/ft_lstclear.c)     |                                             |
|[ft_lstdelone](src/ft_lstdelone.c)   |                                             |
|[ft_lstiter](src/ft_lstiter.c)       |                                             |
|[ft_lstlast](src/ft_lstlast.c)       |                                             |
|[ft_lstmap](src/ft_lstmap.c)         |                                             |
|[ft_lstnew](src/ft_lstnew.c)         |                                             |
|[ft_lstsize](src/ft_lstsize.c)       |                                             |

### Miscellaneous functions

| Name                                |Description                                  |
|:------------------------------------|:--------------------------------------------|
|[ft_swap](src/ft_swap.c)             |                                             |
|[ft_nbrlen](src/ft_nbrlen.c)         |                                             |
|[get_next_line](src/get_next_line.c) |                                             |

### Prerequisites

* GNU make and a C compiler
* valgrind to check for memory leaks
<br>

### Acknowledgements

School project done at [42 Paris](https://www.42.fr).
