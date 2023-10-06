CC = gcc
CFLAGS = -Wall -Wextra -Werror
EXEC = libft.a
SRC = $(willcard *.c)
OBJ = $(SRC:.c=.o)

all : $(EXEC)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(EXEC): $(OBJ)
	$(CC) -o $@ $^ 

clean : 
	rm -rf *.o

fclean : clean
	rm -rf $(EXEC)

re : fclean all