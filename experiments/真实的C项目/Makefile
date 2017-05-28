main:main.o calculator.o
	gcc main.o calculator.o -o main
main.o:main.c
	gcc -c main.c
calculator.o:calculator.c
	gcc -c calculator.c

clean:
	rm main *.o
