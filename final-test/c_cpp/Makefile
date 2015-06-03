main:main.o my_stack.o
	gcc main.o my_stack.o -o main

main.o:main.c
	gcc -c -O0 main.c

my_stack.o: my_stack.c
	gcc -c -O0 my_stack.c
clean:
	rm main *.o


