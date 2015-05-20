main: main.o mulriple.o
	gcc main.o mulriple.o -o main
main.o:main.c
	gcc -c main.c
feeling.o:mulriple.c
	gcc -c mulriple.c

clean:
	rm main *.o
