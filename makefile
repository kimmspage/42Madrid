# Nombre del ejecutable
NAME = libft.h

# Compilador
CC = ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_strlen, ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_strlcpy, ft_ctrlcat, ft_toupper, ft_tolower, ft_strchr, ft_strrchr, ft_strncmp, ft_memchr, ft_memcmp, ft_strnstr, ft_stoi, calloc, strdup

# Flags de compilación
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente
SRCS = $(wildcard *.c)

# Archivos objeto generados
OBJS = $(SRCS:.c=.o)

# Regla principal: compila el ejecutable
all: $(NAME)

# Regla para crear el ejecutable a partir de los objetos
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Regla para compilar archivos .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpia los archivos .o y el ejecutable
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

# Reconstruye desde cero
re: fclean all
