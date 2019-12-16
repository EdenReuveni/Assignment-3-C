all: part1 part2  

part1:
	gcc -o isort part1.c
part2:
	gcc -o txtfind part2.c

clean:
	rm -f *.o *.a *.so mains maind