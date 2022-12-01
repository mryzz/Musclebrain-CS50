CC = clang
override CFLAGS += -g -Wno-everything -I .cs50/include -static
override LDFLAGS+=-L .cs50/lib
override LDLIBS+=-lcs50

SRCS = $(shell find . \( -path ./.ccls-cache -o -path ./libcs50-10.1.1 -o -path ./.cs50 \) -type d -prune -o -type f -name '*.c' -print)
OBJS = $(patsubst %.c, %.o, $(SRCS))

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) $(LDLIBS) -o main

clean:
	rm -f $(OBJS) main