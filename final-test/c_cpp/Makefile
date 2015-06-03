result:main my_stack
	gcc main.o my_stack.o -o result

main:main_clean main.c
	gcc -c -O0 main.c
main_clean:
	if [-e main.o]; then rm main.o; fi

my_stack:my_stack_clean my_stack.c
	gcc -c -O0 main.c
my_stack_clean:
	if [-e main.o]; then rm my_stack.o; fi

clean:
	if [-e result]; then rm result; fi

