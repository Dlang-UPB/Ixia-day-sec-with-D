custdmd=~/ws/dlang/dmd/generated/linux/release/64/dmd -I~/ws/dlang/druntime/import/ -I~/ws/dlang/phobos -L-L$HOME/ws/dlang/phobos/generated/linux/release/64/

build_c: scope.c
	gcc -Wall scope.c -o scope_c

build_d: scope.d
	$(custdmd) -dip1000 scope.d -of=scope_d

.PHONY: clean

clean:
	rm -rf scope_c scope_d
