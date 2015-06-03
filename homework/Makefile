main:main.o gcd.o
	g++ main.o gcd.o -o main
main.o:main.cpp
	g++ -c main.cpp
gcd.o:gcd.cpp
	g++ -c gcd.cpp

clean:
	rm main *.o
