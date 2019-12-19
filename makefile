CC=gcc
FLAG=-Wall
AR=ar
fPIC=-fPIC
all: main_isort main_txtfind 

main_isort:   
	$(CC) $(FLAG) part1.c -g -o isort
main_txtfind:  
	$(CC) $(FLAG) part2.c -g -o txtfind

.PHONY:  isort txtfind clean all
clean:
	rm -f *.o *.a *.so isort txtfind
