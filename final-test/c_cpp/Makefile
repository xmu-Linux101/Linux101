result:main.o my_stack.o
	g++ main.o my_stack.o -o result

main.o: main.cpp
	g++ -c main.cpp

my_stack.o: my_stack.cpp
	g++ -c my_stack.cpp

clean:
	rm result *.o
