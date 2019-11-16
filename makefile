convert: celcius.o kelvin.o fahrenheit.o print.o convert.o
	gcc convert.c celcius.c kelvin.c fahrenheit.c print.c -o convert

celcius.o: celcius.c
	gcc -c celcius.c

kelvin.o: kelvin.c
	gcc -c kelvin.c

fahrenheit.o: fahrenheit.c
	gcc -c fahrenheit.c

print.o: print.c
	gcc -c print.c

convert.o: convert.c
	gcc -c convert.c

clean:
	rm *.o

