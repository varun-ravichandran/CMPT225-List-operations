part1: part1.o
	g++ -Wall -std=c++11 -o part1 part1.o

part1.o: part1.cpp Vector.h List.h
	g++ -Wall -std=c++11 -o part1.o -c part1.cpp 

part2: part2.o
	g++ -Wall -std=c++11 -o part2 part2.o  

part2.o: part2.cpp Vector2.h List.h
	g++ -Wall -std=c++11 -o part2.o -c part2.cpp 
clean:
	rm -rf part1 part2 part1.o part2.o
