TASK1=sum3
TASK2=summult3
TASK3=diff2
TASK4=mean3
TASK5=product1

WD=build
CC=gcc
CFLAGS=-std=c99 -Wall -Werror -Wpedantic

all: 1 2 3 4 5

1: wd 1_$(TASK1).c
	$(CC) $(CFLAGS) -o $(WD)/1_$(TASK1) 1_$(TASK1).c

2: wd 2_$(TASK2).c
	$(CC) $(CFLAGS) -o $(WD)/2_$(TASK2) 2_$(TASK2).c

3: wd 3_$(TASK3).c
	$(CC) $(CFLAGS) -o $(WD)/3_$(TASK3) 3_$(TASK3).c

4: wd 4_$(TASK4).c
	$(CC) $(CFLAGS) -o $(WD)/4_$(TASK4) 4_$(TASK4).c

5: wd 5_$(TASK5).c
	$(CC) $(CFLAGS) -o $(WD)/5_$(TASK5) 5_$(TASK5).c

clean:
	rm -rf $(WD)/

wd:
	[ ! -d $(WD) ] && mkdir $(WD) || true
