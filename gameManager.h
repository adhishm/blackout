/**
 *@file gameManager.h
 *@author Adhish Majumdar
 *@version 0.0.0
 *@date 21/03/2013
 *@brief Function declarationss for the game manager
 *@details This file contains function declarations for the game manager. The game manager manages the gameplay by calling appropriate functions depending on the interaction with the player.
 */

#ifndef GAMEMANAMAGER_H
#define GAMEMANAGER_H

#include <string>

#include "blackout.h"

/**
 * Function to start the game. This is called by the main() function.
 */
void play ();

/**
 * Shows the game menu and returns the option chosen by the user.
 */
int showMenu ();

/**
 * Plays the game.
 * @param bl Pointer to the object of the Blackout class that contains all the game data.
 */
void game (Blackout *bl);

/**
 * Loads the game data into the memory pointed to by Blackout *bl. The return value is true of the load is successful, else it is false.
 * @param bl Pointer to the object of the Blackout class into which game data is to be loaded.
 */
bool loadGameData (Blackout *bl);

/**
 * Deciphers the input from the user.
 * Return value:
 *  0: Quit game
 * -1: Reset game
 * -2: Save game
 * -3: Load game
 * None of the above: move
 */
int decipherInput (std::string m);

/**
 * Save the game.
 * @param bl Pointer to game data
 * @param question The question to be asked
 */
void save (Blackout *bl, std::string question);

/**
 * Loads a new game.
 * @param bl Pointer to game data
 */
void load (Blackout *bl);

/**
 * Resets the game.
 * @param bl Pointer to game data
 */
void reset (Blackout *bl);

/**
 * Quits the game.
 * @param bl Pointer to game data
 */
bool quit (Blackout *bl);

#endif
