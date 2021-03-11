custdmd=~/ws/dlang/dmd/generated/linux/release/64/dmd -I~/ws/dlang/druntime/import/ -I~/ws/dlang/phobos -L-L$HOME/ws/dlang/phobos/generated/linux/release/64/

build_c: def_init.c
	gcc -Wall def_init.c -o def_init_c

build_d: def_init.d
	$(custdmd) def_init.d -of=def_init_d

.PHONY: clean

clean:
	rm -rf def_init_c def_init_d
