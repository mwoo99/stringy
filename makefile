werunthisplace: stringy.c
	gcc stringy.c -o werunthisplace

run: werunthisplace
	./werunthisplace

clean: 
	rm *~
