CC = gcc
CFLAGS = -Iinclude

src_files = $(wildcard src/*.c)
obj_files = $(src_files:.c=.o)

caesar: $(obj_files)
	$(CC) -o $@ $^
	rm -f src/*.o


all: caesar

src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o caesar
