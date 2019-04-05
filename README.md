# libft

libft is an individual school project at [42 Paris](https://www.42.fr) campus.

42 is a private, non-profit and tuition-free Computer Science school based on peer-to-peer learning and hands-on projects.

> First C project: many implementations of the Standard C Library functions, and additional functions.

In order to have a deeper understanding of C programming and data structures, 42 first school project is to implement some of the Standard C Library functions. It enables us to get a glimpse on basic algorithms and to create our own functions. The purpose is also to let us enrich this personal library in the future.

- Libc Functions: Standard C Library functions
- Additional functions: more functions required by 42
- Personal functions

The 'ft' in front of function's names stands for 'fourty two'.


## Table of Contents

- [Function list](#function-list)
- [Motivation](#motivation)
- [Getting Started](#getting-started)
	- [Prerequisites](#prerequisites)
  - [Installing](#installing)
- [Contributing](#contributing)
- [Future improvements](#future-improvements)


## Function list

| Memory | Input/Output | String | List | Conversion | Misc. |
| :---: | :---: | :---: | :---: | :---: | :---: |
| ft_memalloc | ft_putchar_fd | ft_isalpha | ft_lstadd | ft_atoi | ft_nbrlen |
| ft_memccpy | ft_putchar | ft_isalnum | ft_lstdel | ft_itoa | ft_swap |
| ft_memchr | ft_putstr_fd | ft_isdigit | | ft_lstdelone | |
| ft_memcmp | ft_putstr | ft_isprint | | ft_lstiter | |
| ft_memcpy | ft_putnbr_fd| ft_isascii | | ft_lstmap | |
| ft_memdel | ft_putnbr | ft_iswhitespace | | ft_lstnew | |
| ft_memmove | ft_putendl_fd | ft_ischarset| | | |
| ft_memset | ft_putendl | ft_toupper | | | |
| ft_bzero | | ft_tolower| | | |
| | | ft_strclr | | | |
| | | ft_strdel | | | |
| | | ft_strnew | | | |
| | | ft_strlen | | | |
| | | ft_strdup | | | |
| | | ft_strcat | | | |
| | | ft_strncat | | | |
| | | ft_strlcat | | | |
| | | ft_strchr | | | |
| | | ft_strnchr | | | |
| | | ft_strcpy  | | | |
| | | ft_strncpy | | | |
| | | ft_strcmp | | | |
| | | ft_strncmp | | | |
| | | ft_strjoin | | | |
| | | ft_strequ | | | |
| | | ft_strnequ | | | |
| | | ft_striter | | | |
| | | ft_striteri | | | |
| | | ft_strmap | | | |
| | | ft_strmapi | | | |
| | | ft_strstr | | | |
| | |	ft_strnstr | | | |
| | | ft_strchr | | | |
| | | ft_strrchr | | | |
| | | ft_strsplit | | | |
| | | ft_strsub | | | |
| | | ft_strtrim | | | |
| | | ft_strrev | | | |

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

TODO: complete usage description

## Contributing

Feel free to submit a pull request, issue or suggestion.

## Future improvements

- [ ] add [get-next-line](https://github.com/rrsw/get-next-line)
- [ ] fix ft_memcmp
- [ ] fix ft_itoa and ft_atoi for more portability
