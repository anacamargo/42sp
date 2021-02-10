TARGET=libft
GCC=gcc
LD=gcc
CCFLAGS=$(DEBUG) $(OPT) $(WARN) $(PATHREAD) -pipe
LDFLAGS=$(PTHREAD) -export-dynamic
OBJS= main.o ft_isalnum.o ft_isalpha.o ft_isdigit.o ft_isprint.o ft_memset.o ft_strlcpy.o ft_strlen.o ft_tolower.o ft_toupper.o
all: $(OBJS)
		$(LD) -o $(TARGET) $(OBJS) $(LDFLAGS)

main.o: main.c
	$(CC) -c $(CCFLAGS) main.c -o main.o

ft_isalnum.o: ft_isalnum.c
	$(CC) -c $(CCFLAGS) ft_isalnum.c -o ft_isalnum.o

ft_isalpha.o: ft_isalpha.c
	$(CC) -c $(CCFLAGS) ft_isalpha.c -o ft_isalpha.o

ft_isdigit.o: ft_isdigit.c
	$(CC) -c $(CCFLAGS) ft_isdigit.c -o ft_isdigit.o

ft_isprint.o: ft_isprint.c
	$(CC) -c $(CCFLAGS) ft_isprint.c -o ft_isprint.o

ft_memset.o: ft_memset.c
	$(CC) -c $(CCFLAGS) ft_memset.c -o ft_memset.o

ft_strlcpy.o: ft_strlcpy.c
	$(CC) -c $(CCFLAGS) ft_strlcpy.c -o ft_strlcpy.o

ft_strlen.o: ft_strlen.c
	$(CC) -c $(CCFLAGS) ft_strlen.c -o ft_strlen.o

ft_tolower.o: ft_tolower.c
	$(CC) -c $(CCFLAGS) ft_tolower.c -o ft_tolower.o

ft_toupper.o: ft_toupper.c
	$(CC) -c $(CCFLAGS) ft_toupper.c -o ft_toupper.o

clean:
	rm -f *.o