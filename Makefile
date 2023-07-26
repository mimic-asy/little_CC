CFLAGS=-std=c11 -g -static
myc : coding.c

test : coding
	./test.sh

clean :
	rm -f coding *.o *~ tmp*

.PHONY: test clean