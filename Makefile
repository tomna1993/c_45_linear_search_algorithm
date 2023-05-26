CC := gcc
#CFLAGS := 
DEST := ./build/

substitution: linear_serach.c
	$(CC) linear_serach.c -lcs50 -o $(DEST)/linear_serach 