convert: celcius.o kelvin.o validation.o fahrenheit.o main.o
	gcc main.c celcius.c kelvin.c validation.c fahrenheit.c -o kelfacus

celcius.o: celcius.c
	gcc -c celcius.c

kelvin.o: kelvin.c
	gcc -c kelvin.c

fahrenheit.o: fahrenheit.c
	gcc -c fahrenheit.c

validation.o: validation.c
	gcc -c validation.c

main.o: main.c
	gcc -c main.c

clean:
	rm *.o

