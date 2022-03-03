CC=gcc
DC=dmd

build_c: scope.c
	$(CC) -Wall scope.c -o scope_c

build_d: scope.d
	$(DC) -dip1000 scope.d -of=scope_d

.PHONY: clean

clean:
	rm -rf scope_c scope_d
