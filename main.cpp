/*
 * The main program just calls the methods that will display the cards and give
 * the total value of you deck, the card that you have the most of, and the card
 * that has the greatest purchase price.
 */
#include "Magic.h"
#include "MagicDeck.h"

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    MagicDeck deck;//Creates an object out of the magic deck
    
    deck.ReadDeck();
    deck.PrintDeck();
    deck.totalValue();
    deck.mostValuable();
    deck.mostNumerous();
    
    system("pause");//Note this is because on Windows I use minGW which uses the 
    //pc terminal and this will prevent the terminal from closing after the 
    //program is finished running. Allows me to see the final output.
    return 0;
}


