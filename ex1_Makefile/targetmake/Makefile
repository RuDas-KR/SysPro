#Makefile

TARGET=add	#macro
CC=gcc
CFLAGS=
OBJS=main.o addnum.o
LIBS=
all:	$(TARGET)

$(TARGET):	$(OBJS)
	$(CC)	$(CFLAGS)	-o	$(TARGET)	$(OBJS)	$(LIBS);

main.o:	main.c
	$(CC)	$(CFLAGS)	-c	main.c
addnum.o:	addnum.c
	$(CC)	$(CFLAGS)	-c	addnum.c
