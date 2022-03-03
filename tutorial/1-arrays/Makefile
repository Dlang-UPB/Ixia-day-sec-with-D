CC=gcc
DC=dmd

build_c: arrays.c
	$(CC) -Wall arrays.c -o arrays_c

build_d: arrays.d
	$(DC) arrays.d -of=arrays_d

.PHONY: clean

clean:
	rm -rf arrays_c arrays_d
