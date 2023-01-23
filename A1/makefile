#version 1.01
#Victor Tadros
#CMPT 201 L01X
#Instructor: Hanan Saleh
#Purpose: Makefile

cc = gcc
CFLAGS = -Wall –ansi -pedantic –std=c89
LDFLAGS = -lm

all : monthOfYear sameChars primePairs compress echoUpper

monthOfYear : monthOfYear.c
	$(cc) $(CFLAGS) monthOfYear.c -c $(LDFLAGS)

sameChars : sameChars.c
	$(cc) $(CFLAGS) sameChars.c -c $(LDFLAGS)

primePairs : primePairs.c
	$(cc) $(CFLAGS) primePairs.c -c $(LDFLAGS)

compress : compress.c
	$(cc) $(CFLAGS) compress.c -c $(LDFLAGS)

echoUpper : echoUpper.c
	$(cc) $(CFLAGS) echoUpper.c -c $(LDFLAGS)


.PHONY:

clean:
	rm .o main

testing:

	./monthOfYear < /Tests/monthOfYear_input > /Tests/monthOfYear_output
	diff /Tests/monthOfYear_correct /Tests/monthOfYear_output

	./sameChars < /Tests/sameChars_input > /Tests/sameChars_output
	diff /Tests/sameChars_correct /Tests/sameChars_output

	./prime < /Tests/primePairs_input > /Tests/primePairs_output
	diff /Tests/primePairs_correct /Tests/primePairs_output

	./comp < /Tests/compress_input > /Tests/compress_output
	diff /Tests/compress_correct /Tests/compress_output

	./echo < /Tests/echoUpper_input > /Tests/echoUpper_output
	diff /Tests/echoUpper_correct /Tests/echoUpper_output

tar:
	monthOfYear.c
	sameChars.c
	primePairs.c
	compress.c
	echoUpper.c
	makefile
	/Tests
