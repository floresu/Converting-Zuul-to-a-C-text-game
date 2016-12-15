/*
@author  Uriel Flores
@version 2011.10.08
*/
#ifndef Command_H
#define Command_H

#include <iostream>
#include <string>
using namespace std;

class Command
{
private:
	string commandWord;
	string secondWord;

public:
	Command(string, string);
	string getCommandWord();
	string getSecondWord();
	bool isUnknown();
	bool hasSecondWord();

};

#endif
