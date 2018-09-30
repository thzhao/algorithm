C=gcc
CFLAGS=-Wall -g -std=gnu99 
INCLUDEFLAGS=

TARGET = main
TESTTG = test_main

insert:util.o insertsort.o
	gcc $(CFLAGS) -o insert util.o insertsort.o

util.o:util.c
	gcc $(CFLAGS) -o util.o -c util.c

insertsort.o:insertsort.c
	gcc $(CFLAGS) -o insertsort.o -c insertsort.c
