convert: convert.o
	gcc convert.c -o convert

convert.o: convert.c
	gcc -c convert.c

clean:
	rm *.o

