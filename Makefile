all: src/function.c src/function.h src/main.c
	gcc -Wall -o recurse src/function.c src/main.c