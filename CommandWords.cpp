#include "CommandWords.h"
#include <vector> 
#include <cctype>
#include <algorithm>

using namespace std;
/**
 * This class is part of the "World of Zuul" application. 
 * "World of Zuul" is a very simple, text based adventure game.
 * 
 * This class holds an enumeration of all command words known to the game.
 * It is used to recognise commands as they are typed in.
 *
 * @author  Michael Kölling and David J. Barnes
 * @author  Uriel Flores
 * @version 2011.08.08
 * @version 2015.10.03
 */
    
     /**
     * Constructor - initialise the command words.
     */
    CommandWords::CommandWords()
    {
        vector<string> validCommands;
        validCommands.push_back("go");
        validCommands.push_back("quit");
        validCommands.push_back("help");
            for (vector<string>::iterator item = validCommands.begin();
            item != validCommands.end();
            item++)
    {
        string word = *item; // dereference the item
        cout << word;
    }
    }

    /**
     * Check whether a given String is a valid command word. 
     * @return true if it is, false if it isn't.
     */
    bool CommandWords::isCommand(string aString)
    {
        for(int i = 0; i < aString.length(); i++) {
            if((validCommands[i]) == (aString))
                return true;
        }
        // if we get here, the string was not found in the commands
        return false;
    }

    /**
     * Print all valid commands to System.out.
     */
    void CommandWords::showAll() 
    {
        for(vector<string>::iterator command = validCommands.begin(); 
            command != validCommands.end(); command++)
            cout << *command;
    }
