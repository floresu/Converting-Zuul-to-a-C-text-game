#include "Room.h"
#include <cctype>
#include <algorithm>

using namespace std;

/**
 * Class Room - a room in an adventure game.
 *
 * This class is part of the "World of Zuul" application. 
 * "World of Zuul" is a very simple, text based adventure game.  
 *
 * A "Room" represents one location in the scenery of the game.  It is 
 * connected to other rooms via exits.  For each existing exit, the room 
 * stores a reference to the neighboring room.
 * 
 * @author  Michael Kölling and David J. Barnes
 * @author  Uriel Flores
 * @version 2011.08.08
 * @version 2015.10.04
 */
       // stores exits of this room.

    /**
     * Create a room described "description". Initially, it has
     * no exits. "description" is something like "a kitchen" or
     * "an open court yard".
     * @param description The room's description.
     */
    Room::Room(string description) 
    {
        this->description = description; //
    }

    /**
     * Define an exit from this room.
     * @param direction The direction of the exit.
     * @param neighbor  The room to which the exit leads.
     */
    void Room::setExit(string direction, Room* neighbor) 
    {
        exits[direction] = neighbor;
    }

    /**
     * @return The short description of the room
     * (the one that was defined in the constructor).
     */
    string Room::getShortDescription()
    {
        return description;
    }

    /**
     * Return a description of the room in the form:
     *     You are in the kitchen.
     *     Exits: north west
     * @return A long description of this room
     */
    string Room::getLongDescription()
    {
        return "You are " + description + ".\n" + getExitString();
    }

    /**
     * Return a string describing the room's exits, for example
     * "Exits: north west".
     * @return Details of the room's exits.
     */
    string Room::getExitString()
    {
        string returningstring = "Exits:";
        for(map<string, Room*>::iterator item = exits.begin(); item != exits.end();
            item++) {
            returningstring += " " + item->first; 
        }
        return returningstring;
    }

    /**
     * Return the room that is reached if we go from this room in direction
     * "direction". If there is no room in that direction, return null.
     * @param direction The exit's direction.
     * @return The room in the given direction.
     */
    Room *Room::getExit(string direction) 
    {
        if(exits.find(direction) != exits.end())
            return exits[direction];
        return NULL;
    }
