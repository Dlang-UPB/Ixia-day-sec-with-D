custdmd=~/ws/dlang/dmd/generated/linux/release/64/dmd -I~/ws/dlang/druntime/import/ -I~/ws/dlang/phobos -L-L$HOME/ws/dlang/phobos/generated/linux/release/64/

build_c: safe.c
	gcc -Wall safe.c -o safe_c

build_d: safe.d
	$(custdmd) safe.d -of=safe_d

.PHONY: clean

clean:
	rm -rf safe_c safe_d
