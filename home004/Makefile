TASK1=srtasc2
TASK2=max3
TASK3=maxdig1
TASK4=summaxmin5
TASK5=lineeqn4
TASK6=abvlsseql2
TASK7=max5
TASK8=min5
TASK9=isasc3
TASK10=season1
TASK11=istriang3

WD=build
CC=gcc
CFLAGS=-std=c99 -Wall -Wextra -Werror -Wpedantic

all: 1 2 3 4 5 6 7 8 9 10 11

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

6: wd 6_$(TASK6).c
	$(CC) $(CFLAGS) -o $(WD)/6_$(TASK6) 6_$(TASK6).c

7: wd 7_$(TASK7).c
	$(CC) $(CFLAGS) -o $(WD)/7_$(TASK7) 7_$(TASK7).c

8: wd 8_$(TASK8).c
	$(CC) $(CFLAGS) -o $(WD)/8_$(TASK8) 8_$(TASK8).c

9: wd 9_$(TASK9).c
	$(CC) $(CFLAGS) -o $(WD)/9_$(TASK9) 9_$(TASK9).c

10: wd 10_$(TASK10).c
	$(CC) $(CFLAGS) -o $(WD)/10_$(TASK10) 10_$(TASK10).c

11: wd 11_$(TASK11).c
	$(CC) $(CFLAGS) -o $(WD)/11_$(TASK11) 11_$(TASK11).c

clean:
	rm -rf $(WD)/

wd:
	[ ! -d $(WD) ] && mkdir $(WD) || true
