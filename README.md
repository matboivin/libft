# libft

libft is an individual school project at [42 Paris](https://www.42.fr) campus.

42 is a private, non-profit and tuition-free Computer Science school based on peer-to-peer learning and hands-on projects.

> First C project: many implementations of the Standard C Library functions, and additional functions.

In order to have a deeper understanding of C programming and data structures, 42 first school project is to implement some of the Standard C Library functions. It enables us to get a glimpse on basic algorithms and to create our own functions. The purpose is also to let us enrich this personal library in the future.

- **Libc Functions:** Standard C Library functions
- **Additional functions:** more functions required by 42
- Personal functions

The *'ft'* in front of function's names stands for *'fourty two'*. :)


## Table of Contents

- [Function list](#function-list)
- [Motivation](#motivation)
- [Getting Started](#getting-started)
	- [Prerequisites](#prerequisites)
  - [Installing](#installing)
- [Future improvements](#future-improvements)
- [Acknowledgements](#acknowledgements)
- [Contributing](#contributing)


## Function list

|Memory|Input/Output|Char|String|List|Conversion|Misc.|
|:---:|:---:|:---:|:---: |:--:|:---:|:---:|
|[ft_bzero](srcs/ft_bzero.c)|[ft_putchar_fd](srcs/ft_putchar_fd.c)|[ft_toupper](srcs/ft_toupper.c)|[ft_strlen](srcs/ft_strlen.c)|[ft_lstadd](srcs/ft_lstadd.c)|[ft_atoi](srcs/ft_atoi.c)|[ft_nbrlen](srcs/ft_nbrlen.c)|
|[ft_memalloc](srcs/ft_memalloc.c)|[ft_putchar](srcs/ft_putchar.c)|[ft_tolower](srcs/ft_tolower.c)|[ft_strdup](srcs/ft_strdup.c)|[ft_lstdel](srcs/ft_lstdel.c)|[ft_itoa](srcs/ft_itoa.c)|[ft_swap](srcs/ft_swap.c)|
|[ft_memchr](srcs/ft_memchr.c)|[ft_putstr_fd](srcs/ft_putstr_fd.c)|[ft_isalpha](srcs/ft_isalpha.c)|[ft_strclr](srcs/ft_strclr.c)|[ft_lstdelone](srcs/ft_lstdelone.c)||[get_next_line](srcs/get_next_line.c)|
|[ft_memcmp](srcs/ft_memcmp.c)|[ft_putstr](srcs/ft_putstr.c)|[ft_isalnum](srcs/ft_isalnum.c)|[ft_strdel](srcs/ft_strdel.c)|[ft_lstiter](srcs/ft_lstiter.c)| | |
|[ft_memcpy](srcs/ft_memcpy.c)|[ft_putnbr_fd](srcs/ft_putnbr_fd.c)|[ft_isdigit](srcs/ft_isdigit.c)|[ft_strnew](srcs/ft_strnew.c)|[ft_lstmap](srcs/ft_lstmap.c)| | |
|[ft_memccpy](srcs/ft_memccpy.c)|[ft_putnbr](srcs/ft_putnbr.c)|[ft_isascii](srcs/ft_isascii.c)|[ft_strcpy](srcs/ft_strcpy.c)|[ft_lstnew](srcs/ft_lstnew.c)| | |
|[ft_memmove](srcs/ft_memmove.c)|[ft_putendl_fd](srcs/ft_putendl_fd.c)|[ft_isprint](srcs/ft_isprint.c)|[ft_strncpy(srcs/ft_strncpy.c)| | | |
|[ft_memset](srcs/ft_memset.c)|[ft_putendl](srcs/ft_putendl.c)|[ft_ischarset](srcs/ft_ischarset.c)|[ft_strcat](srcs/ft_strcat.c)| | | |
|[ft_memdel](srcs/ft_memdel.c)| |[ft_iswhitespace](srcs/ft_iswhitespace.c)|[ft_strncat](srcs/ft_strncat.c)| | | |
| | | |[ft_strlcat](srcs/ft_strlcat.c)| | | |
| | | |[ft_strcmp](srcs/ft_strcmp.c)| | | |
| | | |[ft_strncmp](srcs/ft_strncmp.c)| | | |
| | | |[ft_strjoin](srcs/ft_strjoin.c)| | | |
| | | |[ft_strequ](srcs/ft_strequ.c)| | | |
| | | |[ft_strnequ](srcs/ft_strnequ.c)| | | |
| | | |[ft_striter](srcs/ft_striter.c)| | | |
| | | |[ft_striteri](srcs/ft_striteri.c)| | | |
| | | |[ft_strmap](srcs/ft_strmap.c)| | | |
| | | |[ft_strmapi](srcs/ft_strmapi.c)| | | |
| | | |[ft_strstr](srcs/ft_strstr.c)| | | |
| | | |[ft_strnstr](srcs/ft_strnstr.c)| | | |
| | | |[ft_strchr](srcs/ft_strchr.c)| | | |
| | | |[ft_strrchr](srcs/ft_strrchr.c)| | | |
| | | |[ft_strsplit](srcs/ft_strsplit.c)| | | |
| | | |[ft_strsub](srcs/ft_strsub.c)| | | |
| | | |[ft_strtrim](srcs/ft_strtrim.c)| | | |
| | | |[ft_strrev](srcs/ft_strrev.c)| | | |

## Motivation

Understand data structures and basic algorithms.

**The libft project aims to be expanded and improved throughout the years.**


## Getting Started

### Prerequisites

* GNU make and a C compiler

### Installing

1. In the terminal go to an appropriate folder where you want to clone this repo and run:
```
git clone https://github.com/rrsw/libft/
```

2. Then move to the newly created directory:
```
cd libft/
```

3. Build the libft. To do so, run:
```
make
```

4. To remove the object files, run:
```
make clean
```

5. To remove the object files and delete the libft, run:
```
make fclean
```

6. To remove object files, libft and to build it again run:
```
make re
```

TODO: complete usage description

## Future improvements

- [X] add [get-next-line](https://github.com/rrsw/get-next-line)
- [ ] add fixed version of get_next_line
- [ ] fix ft_memcmp
- [ ] fix ft_itoa and ft_atoi for more portability

## Acknowledgements

School project done at [42 Paris](https://www.42.fr).

## Contributing

Feel free to submit a pull request, issue or suggestion.
