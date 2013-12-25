test: main.o employee.o sort.o
	gcc -o test main.o employee.o sort.o
main.o: main.c
	gcc -c main.c
employee.o: employee.c
	gcc -c employee.c
sort.o: sort.c
	gcc -c sort.c
clean:
	rm *.o test

