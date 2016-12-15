/*
@author  Uriel Flores
@version 2011.10.08
*/
#ifndef CommandWords_H
#define CommandWords_H

#include <iostream>
#include <string>
#include <vector>
#include <new>
//#include "Parser.h"
using namespace std;

class CommandWords
{
private:
	vector<string> validCommands;

public:
	CommandWords();
	bool isCommand(string aString);
	void showAll();

};

#endif
