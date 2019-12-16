all: part1 part2  

part1:
	gcc wall -g -o isort part1.c
part2:
	gcc wall -g -o txtfind part2.c

clean:
	rm -f *.o *.a *.so mains maind