/**
 *@file blackout.h
 *@author Adhish Majumdar
 *@version 0.0.0
 *@date 14/03/2013
 *@brief File with definition of the class Blackout.
 *@details The Blackout class handles data and events required for the game.
 */

#ifndef BLACKOUT_H
#define BLACKOUT_H

#include <iostream>
#include <fstream>
#include <string>
#include <time.h>

#include "tools.h"
#include "board.h"

#ifndef DEFAULT_INITIALIZATION_LOOPS
#define DEFAULT_INITIALIZATION_LOOPS 20
#endif

#ifndef DEFAULT_GAMESQUARESIZE
#define DEFAULT_GAMESQUARESIZE 3
#endif

#ifndef MAX_GAMESQUARESIZE
#define MAX_GAMESQUARESIZE 8
#endif

#ifndef GAME_RECURSION_LIMIT
#define GAME_RECURSION_LIMIT 10
#endif

/**
 * The Blackout class functions handle data and events during the game.
 */
class Blackout
{
 private:
  /**
   * The board on wich the game is played.
   */
  Board *b;
  /**
   * Keeps count of the number of moves.
   */
  int nMoves;
  /**
   * The highscore. It is retrieved from the archive.
   */
  int highScore;
  /**
   * Dimensions of the board.
   */
  int nPoints;
  /**
   *
   */
  bool win;

 public:
    /**
     * Constructor that initializes the game.
     */
    Blackout (int boardSize=DEFAULT_GAMESQUARESIZE);
    /**
     * This function generates a new game. THis is done by basically starting from a full square, and performing the number of moves specified by the nInitializationLoops variable, and taking the final state as the beginning of the game. This ensures that we get a 'solvable' puzzle.
     * @param nInitializationLoops Number of moves used initially carried out to jumble up the puzzle. Default value: DEFAULT_INITIALIZATION_LOOPS.
     * @param count Counts the number of recursions.
     */
    bool generateGame (int nInitializationLoops=DEFAULT_INITIALIZATION_LOOPS, int count=0);
    /**
     * Checks for the win condition - that is if the board is composed of only one kind of item, all 0's or all 1's.
     */
    bool checkWinCondition ();
    /**
     * Carries out the move at the position given by x and y.
     * @param x Row number of the point where the move is carried out.
     * @param y Column number of the point where the move is carried out.
     */
    bool applyMove (int x, int y);
    /**
     * Saves the current state of the game to file.
     * @param fileName Name of the file to which the game is to be saved.
     */
    bool saveGame (const char* fileName);
    /**
     * Loads the game from a file.
     * @param fileName File of the file from which to load the game.
     */
    bool loadGame (const char* fileName);
    /**
     * Resets the game to its initial state.
     */
    void reset ();
    /**
     * Flips the value of the cell at position x, y.
     * @param x Row number of the point where the move is carried out.
     * @param y Column number of the point where the move is carried out.
     */
    void flipCell (int x, int y);
    /**
     * Displays the game board.
     */
    bool show ();
    /**
     * Returns the number of moves carried out.
     */
    int getMoves ();
    /**
     * Returns the win state.
     */
    bool getWin();
};

#endif
