convert: celcius.o kelvin.o fahrenheit.o convert.o
	gcc convert.c celcius.c kelvin.c fahrenheit.c -o convert

celcius.o: celcius.c
	gcc -c celcius.c

kelvin.o: kelvin.c
	gcc -c kelvin.c

fahrenheit.o: fahrenheit.c
	gcc -c fahrenheit.c

convert.o: convert.c
	gcc -c convert.c

clean:
	rm *.o

