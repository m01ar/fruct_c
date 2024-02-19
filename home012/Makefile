WD=build
CC=gcc
CFLAGS=-std=c99 -Wall -Wextra -Werror -Wpedantic -Wconversion



all: main

main: wd temp_api.o main.o
	$(CC) $(CFLAGS) -o $(WD)/main $(WD)/temp_api.o $(WD)/main.o

temp_api.o: wd temp_api.h temp_api.c
	$(CC) -c $(CFLAGS) -o $(WD)/temp_api.o temp_api.c

main.o: wd temp_api.h main.c
	$(CC) -c $(CFLAGS) -o $(WD)/main.o main.c



.PHONY: clean
clean:
	rm -rf $(WD)/

.PHONY: wd
wd:
	[ ! -d $(WD) ] && mkdir $(WD) || true
