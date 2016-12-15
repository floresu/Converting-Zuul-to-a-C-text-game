/*
@author  Uriel Flores
@version 2011.10.08
*/
#ifndef Parser_H
#define Parser_H

#include <iostream>
#include <string>
#include <new>
#include "Command.h"
#include "CommandWords.h"

//#include <vector>
using namespace std;

class Parser
{
private:
	CommandWords commands;
public:
	Parser();
	Command getCommand(); 
	void showCommands();
};

#endif
