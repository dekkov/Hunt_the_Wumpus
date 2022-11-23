CC=g++
EXE_FILE=hunt

all: $ (EXE_FILE)

$ (EXE_FILE): wumpus.o gold.o bat.o pit.o event.o room.o player.o game.o wumpus.h gold.h bat.h pit.h event.h room.h player.h game.h main.cpp
	$(CC) wumpus.o gold.o bat.o pit.o event.o room.o player.o game.o main.cpp -std=c++11 -o $(EXE_FILE)

wumpus.o: wumpus.h wumpus.cpp
	$(CC) -c wumpus.cpp

gold.o: gold.h gold.cpp
	$(CC) -c gold.cpp

bat.o: bat.h bat.cpp
	$(CC) -c bat.cpp

pit.o: pit.h pit.cpp
	$(CC) -c pit.cpp

event.o: event.h event.cpp
	$(CC) -c event.cpp

room.o: room.h room.cpp
	$(CC) -c room.cpp

player.o: player.h player.cpp
	$(CC) -c player.cpp

game.o: game.h game.cpp
	$(CC) -c game.cpp -std=c++11

clean:
	rm -f *.o $(EXE_FILE)