compile: euler.o main.o
	@gcc -o euler euler.o main.o
run: compile
	@./euler
euler.o: euler.c
	@gcc -c euler.c
main.o: main.c
	@gcc -c main.c
clean:
	rm *.o euler

