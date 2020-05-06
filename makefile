g = g++
CFLAGS = -Wall -Werror -MP -MMD


.PHONY: clean run all


all: ./bin/chessviz.exe


-include build/src/*.d


./bin/chessviz.exe: ./build/main.o ./build/DrawingBoard.o ./build/move.o
	$(g) $(CFLAGS) -o ./bin/chessviz.exe ./build/main.o ./build/move.o ./build/DrawingBoard.o -lm


./build/main.o: ./src/main.cpp ./src/header.h
	$(g) $(CFLAGS) -o build/main.o -c src/main.cpp -lm


./build/DrawingBoard.o: ./src/DrawingBoard.cpp ./src/header.h
	$(g) $(CFLAGS) -o ./build/DrawingBoard.o -c ./src/DrawingBoard.cpp -lm


./build/move.o: ./src/move.cpp ./src/header.h
	$(g) $(CFLAGS) -o ./build/move.o -c ./src/move.cpp -lm


clean:
	rm -rf build/*.o build/*.d

run:
	./bin/chessviz.exe
