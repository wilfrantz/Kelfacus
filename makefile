convert: celcius.o kelvin.o validation.o fahrenheit.o convert.o
	gcc convert.c celcius.c kelvin.c validation.c fahrenheit.c -o kelfacus

celcius.o: celcius.c
	gcc -c celcius.c

kelvin.o: kelvin.c
	gcc -c kelvin.c

fahrenheit.o: fahrenheit.c
	gcc -c fahrenheit.c

validation.o: validation.c
	gcc -c validation.c

convert.o: convert.c
	gcc -c convert.c

clean:
	rm *.o

