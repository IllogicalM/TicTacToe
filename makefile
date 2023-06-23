all:
	g++ -I src/include -L src/lib -o bin/TicTacToe main.cpp game/src/*.cpp -lmingw32 -lSDL2main -lSDL2