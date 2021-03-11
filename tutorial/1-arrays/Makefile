custdmd=~/ws/dlang/dmd/generated/linux/release/64/dmd -I~/ws/dlang/druntime/import/ -I~/ws/dlang/phobos -L-L$HOME/ws/dlang/phobos/generated/linux/release/64/

build_c: arrays.c
	gcc -Wall arrays.c -o arrays_c

build_d: arrays.d
	$(custdmd) arrays.d -of=arrays_d

.PHONY: clean

clean:
	rm -rf arrays_c arrays_d
