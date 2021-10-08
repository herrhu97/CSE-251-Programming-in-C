hanoi:	hanoi.o display.o
	gcc -o hanoi hanoi.o display.o

# target:	dependencies
# 	 command

hanoi.o:	hanoi.c hanoi.h
	gcc -c hanoi.c

display.o:	display.c hanoi.h
	gcc -c display.c

clean:
	rm -f *.o hanoi