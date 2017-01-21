# A simple Makefile. Working on making it better.
.SILENT:

all: release

release:
	g++ -std=c++11 -O3 -o driver *.cpp
debug:
	g++ -std=c++11 -O2 -g -o debug *.cpp
clean:
	rm driver debug pokemon.tar.gz
dist:
	tar cf pokemon.tar *.h *.c Makefile README.md
	gzip pokemon.tar
