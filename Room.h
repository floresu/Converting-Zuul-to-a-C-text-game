/*
@author  Uriel Flores
@version 2011.10.08
*/
// InputReader.h
#ifndef Room_H
#define Room_H

#include <set>
#include <iostream>

#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;
class Room
{
private:
	string description;
    map<string, Room*> exits;
	
public:
	Room();
	Room(string description);
	void setExit(string direction, Room *neighbor);
	string getShortDescription();
	string getLongDescription();
	string getExitString();
	Room *getExit(string direction);
};


#endif
