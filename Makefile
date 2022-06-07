run: 
	gcc -o experiment main.c compare.c applied.c nonApplied.c -Wall 
clean: 
	rm -f experiment
