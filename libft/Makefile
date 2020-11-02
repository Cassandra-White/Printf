NAME	= libft.a

A		= a.out

FLAG	=  -Wall -Wextra -Werror

.C		= ft_putchar.c ft_strlen.c ft_atoi.c ft_bzero.c \
ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
ft_memchr.c ft_memcmp.c ft_isalpha.c ft_isdigit.c \
ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_calloc.c \
ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c  \
ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
ft_putstr_n.c ft_uitoa.c ft_itoa_base.c ft_lltoa_base.c \
use_in_set.c ft_strndup.c ft_putstr.c ft_strncpy.c

.O		= ft_putchar.o ft_strlen.o ft_atoi.o ft_bzero.o \
ft_memset.o ft_memcpy.o ft_memccpy.o ft_memmove.o \
ft_memchr.o ft_memcmp.o ft_isalpha.o ft_isdigit.o \
ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o \
ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o \
ft_strlcpy.o ft_strlcat.o ft_strnstr.o ft_calloc.o \
ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o \
ft_split.o ft_itoa.o ft_strmapi.o ft_putchar_fd.o \
ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o \
ft_putstr_n.o ft_uitoa.o ft_itoa_base.o ft_lltoa_base.o \
use_in_set.o ft_strndup.o ft_putstr.o ft_strncpy.o

DIRECTORY	= includes

all        : $(NAME)

$(NAME)		:
			gcc $(FLAG) -c -I $(DIRECTORY) $(.C)
			ar rc $(NAME) $(.O)
			ranlib $(NAME)

bonus		: 
			gcc $(FLAG) -c -I $(DIRECTORY) $(BONUS.C)
			ar rc $(NAME) $(BONUS.O)
			ranlib $(NAME)

clean		:  
			rm -f $(.O)

fclean  	:	clean 
			rm -rf $(NAME)

re		: 	fclean all

.PHONY 		:	re fclean clean all
