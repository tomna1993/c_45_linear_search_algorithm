CC := gcc
#CFLAGS := 
DEST := ./build/

all: linear_search.c
	mkdir -p build
	$(CC) linear_search.c -lcs50 -o $(DEST)/linear_search 