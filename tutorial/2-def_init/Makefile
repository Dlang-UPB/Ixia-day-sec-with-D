CC=gcc
DC=dmd

build_c: def_init.c
	$(CC) -Wall def_init.c -o def_init_c

build_d: def_init.d
	$(DC) def_init.d -of=def_init_d

.PHONY: clean

clean:
	rm -rf def_init_c def_init_d
