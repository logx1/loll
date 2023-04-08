SRC	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
			ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memset.c \
			ft_bzero.c ft_calloc.c ft_strdup.c ft_memchr.c ft_memcpy.c ft_strjoin.c ft_memcmp.c \
			ft_memmove.c ft_strnstr.c ft_strlcat.c ft_strlcpy.c ft_atoi.c ft_itoa.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_substr.c \
			ft_strtrim.c ft_split.c

BONUSSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c


CC = gcc
CFLAGS = -Wall -Werror -Wextra
OBJ = $(SRC:.c=.o)
BONUSOBJ = $(BONUSSRC:.c=.o)
NAME = libft.a
AR = ar rcs

all: $(NAME)

bonus: $(BONUSOBJ)
	$(AR) $(NAME) $^

$(NAME): $(OBJ)
	$(AR) $@ $^
%.o:%.c
	$(CC) $(CFLAGS) -c $^ -o $@ 

fclean:
	rm -rf $(NAME) $(OBJ) $(BONUSOBJ)
clean:
	rm -rf $(OBJ) $(BONUSOBJ)
re:fclean $(NAME)