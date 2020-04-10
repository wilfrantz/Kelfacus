convert: print.o celcius.o kelvin.o validation.o fahrenheit.o main.o
	gcc main.c print.c celcius.c kelvin.c validation.c fahrenheit.c -g -o kelfacus

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

print.o: print.c
	gcc -c print.c

clean:
	rm *.o

