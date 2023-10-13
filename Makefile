all: 
	gcc -o programa src/testing.c src/Sorting/*.c


clean:
	rm -f programa
