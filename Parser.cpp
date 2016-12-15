#include <cctype>
#include <algorithm>

#include "Parser.h"
#include "Command.h"
#include "CommandWords.h"

using namespace std;

/**
 * This class is part of the "World of Zuul" application. 
 * "World of Zuul" is a very simple, text based adventure game.  
 * 
 * This parser reads user input and tries to interpret it as an "Adventure"
 * command. Every time it is called it reads a line from the terminal and
 * tries to interpret the line as a two word command. It returns the command
 * as an object of class Command.
 *
 * The parser has a set of known command words. It checks user input against
 * the known commands, and if the input is not one of the known commands, it
 * returns a command object that is marked as an unknown command.
 * 
 * @author  Michael Kölling and David J. Barnes
 * @author  Uriel Flores
 * @version 2011.08.08
 * @version 2015.10.03
 */

      // source of command input

    /**
     * Create a parser to read from the terminal window.
     */
    Parser::Parser() 
    {
        CommandWords* commands = new CommandWords();
    }

    /**
     * @return The next command from the user.
     */
    Command Parser::getCommand() 
    {
        string inputLine;   // will hold the full input line
        string word1 = ("");
        string word2 = ("");

        cout << ">"<< endl;     // print prompt

        getline(cin,inputLine);

        string delimiters = " "; // identifies string
        size_t location; // location as a byte
        size_t next = -1; // next = -1 as a byte
        
        vector<string> words;
        words.push_back("go");
        words.push_back("quit");
        words.push_back("help");
            for (vector<string>::iterator item = words.begin();
            item != words.end();
            item++)
        {
            string word = *item; // dereference the item
            cout << word;
        }
        do {
            location = next + 1;
            next = inputLine.find_first_of( delimiters, location );
            cout << inputLine.substr( location, next - location ) << endl;
            inputLine.push_back( location );
        }
        while (next != string::npos);

            if(commands.isCommand(word1)) 
            {
            return Command(word1, word2);
            }
            else {
                return Command(0, word2); 
        }
    }        

    /**
     * Print out a list of valid command words.
     */
    void Parser::showCommands()
    {
        commands.showAll();
    }
