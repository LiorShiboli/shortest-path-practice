CC=gcc
FLAGS=-wall -g
all: connections
connections: main.o my_mat.o
	$(CC) $(FLAGS) -o connections main.o my_mat.o
main.o:main.c my_mat.h
	$(CC) $(FLAGS) -c main.c
my_mat.o:my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c