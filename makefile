.PHONY: clean tidy

prog1: 
	gcc prog1.c -o $@
	./prog1

prog2:
	g++ prog2.cpp -o $@
	./$@

clean:
	rm *.o

tidy: clean
	rm prog1 prog2 