CC := gcc
#CFLAGS := 
DEST := ./build/

all: linear_search.c
	$(CC) linear_search.c -lcs50 -o $(DEST)/linear_search 