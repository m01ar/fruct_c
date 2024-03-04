WD=build
CC=gcc
CFLAGS=-std=c99 -Wall -Wextra -Werror -Wpedantic -Wconversion


all: report

report: wd temp_api.o report.o
	$(CC) $(CFLAGS) -o $(WD)/report $(WD)/temp_api.o $(WD)/report.o

temp_api.o: wd temp_api.h temp_api.c
	$(CC) -c $(CFLAGS) -o $(WD)/temp_api.o temp_api.c

report.o: wd temp_api.h report.c
	$(CC) -c $(CFLAGS) -o $(WD)/report.o report.c


.PHONY: clean
clean:
	rm -rf $(WD)/

.PHONY: wd
wd:
	[ ! -d $(WD) ] && mkdir $(WD) || true
