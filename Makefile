all:
	g++ -std=c++11 -O3 -o driver *.cpp
debug:
	g++ -std=c++11 -Og -g -o debug *.cpp
clean:
	rm driver debug
