SRCS	= 	ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strdup.c \
			ft_calloc.c \
			ft_substr.c \
			ft_striteri.c\
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

SRCS_BONUS = ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c

OBJS	= $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

INCDIR	= includes
NAME	= libft.a
LIBC	= ar rc
LIBR	= ranlib
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

$(NAME):$(OBJS)
		$(LIBC) $(NAME) $(OBJS)

all:	$(NAME)

bonus:	$(OBS) $(OBJS_BONUS)
		$(LIBC) $(NAME) $(OBJS_BONUS) 	

%.o:	%.c
		$(CC) $(CFLAGS) -c $< -o $@ -I $(INCDIR)

clean:
		$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re