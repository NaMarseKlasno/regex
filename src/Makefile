all: zadanie1 test

zadanie1: zadanie1.o main.o
	gcc main.o zadanie1.o -o zadanie1
test: zadanie1.o test.o
	gcc zadanie1.o test.o -o test
	./test
zadanie1.o: zadanie1.c
	gcc -c zadanie1.c -o zadanie1.o
test.o: test.c
	gcc -c test.c -o test.o
main.o: main.c
	gcc -c main.c -o main.o

clean:
	rm -rf *.o