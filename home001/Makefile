TASK1=hello
TASK2=ladder
TASK3=asciiart

WD=build
CC=gcc
CFLAGS=-std=c99 -Wall -Wextra -Werror -Wpedantic

all: 1 2 3

1: wd 1_$(TASK1).c
	$(CC) $(CFLAGS) -o $(WD)/1_$(TASK1) 1_$(TASK1).c

2: wd 2_$(TASK2).c
	$(CC) $(CFLAGS) -o $(WD)/2_$(TASK2) 2_$(TASK2).c

3: wd 3_$(TASK3).c
	$(CC) $(CFLAGS) -o $(WD)/3_$(TASK3) 3_$(TASK3).c

clean:
	rm -rf $(WD)/

wd:
	[ ! -d $(WD) ] && mkdir $(WD) || true
