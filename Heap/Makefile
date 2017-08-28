%.o: %.c %.h
	gcc -Wall -c -o $@ $<

main: main.o heap.o
	gcc -Wall -o $@ $^
