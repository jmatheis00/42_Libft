# 42_Libft
>The "Libft" project at 42 programming school challenged me to create a library of essential function.
It involved recreating standard C language functions,improving memory management and allocation skills.
Building this library deepend the understanding of the C language and the complexities of implementing a Makefile.
Building this adaptable toolbox establishes a solid foundation and provides support for future projects.

### Usage
1. clone this repository and `cd` into it:

```zsh
git clone https://github.com/jmatheis00/42_Libft.git && cd 42_Libft
```

2. Compile the library using make (without bonus part) or make bonus (with bonuse functions):

```zsh
make
```

```zsh
make bonus
```

### Source Code

| No  | Libc Functions                                                                 | No  | Additional Functions                                                                 |
| :-: | :----------------------------------------------------------------------------- | :-: | :--------------------------------------------------------------------------------------- |
| 1   | [ft_isalpha](https://github.com/jmatheis00/42_Libft/blob/master/ft_isalpha.c)   | 1   | [ft_substr](https://github.com/jmatheis00/42_Libft/blob/master/ft_substr.c)         |
| 2   | [ft_isdigit](https://github.com/jmatheis00/42_Libft/blob/master/ft_isdigit.c)   | 2   | [ft_strjoin](https://github.com/jmatheis00/42_Libft/blob/master/ft_strjoin.c)       |
| 3   | [ft_isalnum](https://github.com/jmatheis00/42_Libft/blob/master/ft_isalnum.c)   | 3   | [ft_strtrim](https://github.com/jmatheis00/42_Libft/blob/master/ft_strtrim.c)       |
| 4   | [ft_isascii](https://github.com/jmatheis00/42_Libft/blob/master/ft_isascii.c)   | 4   | [ft_split](https://github.com/jmatheis00/42_Libft/blob/master/ft_split.c)           |
| 5   | [ft_isprint](https://github.com/jmatheis00/42_Libft/blob/master/ft_isprint.c)   | 5   | [ft_itoa](https://github.com/jmatheis00/42_Libft/blob/master/ft_itoa.c)             |
| 6   | [ft_strlen](https://github.com/jmatheis00/42_Libft/blob/master/ft_strlen.c)     | 6   | [ft_strmapi](https://github.com/jmatheis00/42_Libft/blob/master/ft_strmapi.c)       |
| 7   | [ft_memset](https://github.com/jmatheis00/42_Libft/blob/master/ft_memset.c)     | 7   | [ft_putchar_fd](https://github.com/jmatheis00/42_Libft/blob/master/ft_putchar_fd.c) |
| 8   | [ft_bzero](https://github.com/jmatheis00/42_Libft/blob/master/ft_bzero.c)       | 8   | [ft_putstr_fd](https://github.com/jmatheis00/42_Libft/blob/master/ft_putstr_fd.c)   |
| 9   | [ft_memcpy](https://github.com/jmatheis00/42_Libft/blob/master/ft_memcpy.c)     | 9   | [ft_putendl_fd](https://github.com/jmatheis00/42_Libft/blob/master/ft_putendl_fd.c) |
| 10  | [ft_memmove](https://github.com/jmatheis00/42_Libft/blob/master/ft_memmove.c)   | 10  | [ft_putnbr_fd](https://github.com/jmatheis00/42_Libft/blob/master/ft_putnbr_fd.c)   |
| 11  | [ft_strlcpy](https://github.com/jmatheis00/42_Libft/blob/master/ft_strlcpy.c)   |     |                                                                                     |
| 12  | [ft_strlcat](https://github.com/jmatheis00/42_Libft/blob/master/ft_strlcat.c)   | **No**  | **Bonus Functions**                                                                 |
| 13  | [ft_toupper](https://github.com/jmatheis00/42_Libft/blob/master/ft_toupper.c)   | 1   | [ft_lstnew](https://github.com/jmatheis00/42_Libft/blob/master/ft_lstnew.c)         |
| 14  | [ft_tolower](https://github.com/jmatheis00/42_Libft/blob/master/ft_tolower.c)   | 2   | [ft_lstadd_front](https://github.com/jmatheis00/42_Libft/blob/master/ft_lstadd_front.c) |
| 15  | [ft_strchr](https://github.com/jmatheis00/42_Libft/blob/master/ft_strchr.c)     | 3   | [ft_lstsize](https://github.com/jmatheis00/42_Libft/blob/master/ft_lstsize.c)       |
| 16  | [ft_strrchr](https://github.com/jmatheis00/42_Libft/blob/master/ft_strrchr.c)   | 4   | [ft_lstlast](https://github.com/jmatheis00/42_Libft/blob/master/ft_lstlast.c)       |
| 17  | [ft_strncmp](https://github.com/jmatheis00/42_Libft/blob/master/ft_strncmp.c)   | 5   | [ft_lstadd_back](https://github.com/jmatheis00/42_Libft/blob/master/ft_lstadd_back.c) |
| 18  | [ft_memchr](https://github.com/jmatheis00/42_Libft/blob/master/ft_memchr.c)     | 6   | [ft_lstdelone](https://github.com/jmatheis00/42_Libft/blob/master/ft_lstdelone.c)   |
| 19  | [ft_memcmp](https://github.com/jmatheis00/42_Libft/blob/master/ft_memcmp.c)     | 7   | [ft_lstclear](https://github.com/jmatheis00/42_Libft/blob/master/ft_lstclear.c)     |
| 20  | [ft_strnstr](https://github.com/jmatheis00/42_Libft/blob/master/ft_strnstr.c)   | 8   | [ft_lstiter](https://github.com/jmatheis00/42_Libft/blob/master/ft_lstiter.c)       |
| 21  | [ft_atoi](https://github.com/jmatheis00/42_Libft/blob/master/ft_atoi.c)         | 9   | [ft_lstmap](https://github.com/jmatheis00/42_Libft/blob/master/ft_lstmap.c)         |
| 22  | [ft_calloc](https://github.com/jmatheis00/42_Libft/blob/master/ft_calloc.c)     |     |                                                                                     |
| 23  | [ft_strdup](https://github.com/jmatheis00/42_Libft/blob/master/ft_strdup.c)     |     |                                                                                     |

