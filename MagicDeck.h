/*
 * Header file for Magic Deck
 * File:   MagicDeck.h
 * Author: Jake Smith
 */

#ifndef MAGICDECK_H
#define MAGICDECK_H

#include <iostream>
#include <fstream>
#include <string>
#include<cstdlib>

#include "Magic.h"
using namespace std;

class MagicDeck {
public:
    MagicDeck();
    MagicDeck(const MagicDeck& orig);
    
    void ReadDeck();
    void PrintDeck();
    
    //Get Methods
    void  totalValue();
    void  mostValuable();
    void  mostNumerous();
    
    virtual ~MagicDeck();
private:
    Magic deck[999];
    int count;
};

#endif /* MAGICDECK_H */

