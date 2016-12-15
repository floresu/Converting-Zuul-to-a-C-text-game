/*
@author  Uriel Flores
@version 2011.10.08
*/
#ifndef Game_H
#define Game_H

#include <set>
#include <iostream>
#include "Room.h"
#include "Parser.h"


#include <vector>
#include <string>
using namespace std;
class Game
{
private:
	Parser parser;
	Room *currentRoom;
	void createRooms();
	void printWelcome();
	bool processCommand(Command command);
	void printHelp();
	void goRoom(Command command);
	bool quit(Command command);
public:
	Game();
	void play();
};


#endif
