CC=gcc
DC=dmd

build_c: safe.c
	$(CC) -Wall safe.c -o safe_c

build_d: safe.d
	$(DC) safe.d -of=safe_d

.PHONY: clean

clean:
	rm -rf safe_c safe_d
