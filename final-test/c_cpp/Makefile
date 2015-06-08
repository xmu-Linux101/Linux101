main.out: main.o my_stack.o
	gcc main.o my_stack.o -o main.out

main.o: main.c my_stack.h
	gcc -c main.c

my_stack.o:
	gcc -c my_stack.c


clean:
	rm *.o main.out

