# A simple Makefile. Working on making it better.

all: release

release:
	g++ -std=c++11 -O3 -o driver *.cpp
debug:
	g++ -std=c++11 -O2 -g -o debug *.cpp
clean:
	rm driver debug
