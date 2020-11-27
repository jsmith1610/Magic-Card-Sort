/*
 * This .cpp holds the Magic Deck class implementation,
 * Here is where most of the information in the magic class will be sent through 
 * so that it can be stored in the magic deck array
 */

/* 
 * File:   MagicDeck.cpp
 * Author: Jake Smith
 */

#include "MagicDeck.h"
#include "Magic.h"

MagicDeck::MagicDeck() {
    
}
MagicDeck::MagicDeck(const MagicDeck& obj) {
}
MagicDeck::~MagicDeck() {
}

void MagicDeck::totalValue(){//Adds up all your cards Purchase prices and totals them 
    float total;
  for(int i = 0; i < count; i++){
      total += deck[i].getPurchasePrice();
    }
    cout << "Total Value: " << total << endl;  
}

void MagicDeck::mostValuable(){//Displays your most valuable card based on purchase price
    int MAX = 0;
    int maxIndex = 0;
    for(int i = 0; i < count; i++){
        if(deck[i].getPurchasePrice() > MAX){
            MAX = deck[i].getPurchasePrice();
            maxIndex = i;
        }  
    }
    cout << "Most Valuable: " << deck[maxIndex].getCardName() << endl;
}

void MagicDeck::mostNumerous(){//Displays the card that you have the most of in your deck
    int MAX = 0;
    int maxIndex = 0;
    for(int i = 0; i < count; i++){
        if(deck[i].getQuantity() > MAX){
            MAX = deck[i].getQuantity();
            maxIndex = i;
        }
    }
    cout << "Most Numerous: " << deck[maxIndex].getCardName() << endl;
}

void MagicDeck::ReadDeck(){
    // Open input file
   ifstream din;
   din.open("deck.txt");
   if (din.fail())
      cout << "Could not open deck.txt\n";
   
   // Read count of Cards
   string str;
   getline(din, str);
   count = atoi(str.c_str());

   // Loop reading book records
   for (int i = 0; i < count && !din.eof(); i++)
   {
       //Read in lines for the Card Type properties
      getline(din, str);
      deck[i].setCardName(str);
      getline(din, str);
      deck[i].setManaCost(atoi(str.c_str()));
      getline(din, str);
      deck[i].setType(str);
      getline(din, str);
      deck[i].setCardText(str);
      getline(din, str);
      deck[i].setCardNumber(atoi(str.c_str()));
      
     //Read in lines for the Card Quality properties
      getline(din, str);
      deck[i].setRarity(str);
      getline(din, str);
      deck[i].setCondition(str);
      getline(din, str);
      deck[i].setPurchasePrice(atof(str.c_str()));
      getline(din, str);
      deck[i].setCurrentValue(str);
      getline(din, str);
      deck[i].setQuantity(atoi(str.c_str())); 
   }
   // Close input file
   din.close();
}
   void MagicDeck::PrintDeck(){
       int number = 0;
       for (int i = 0; i < count; i++)
   {  
       number++;
       cout << "Card " << number << endl;
       cout << deck[i].getCardName() << endl;
       cout << deck[i].getManaCost() << endl;
       cout << deck[i].getType() << endl;
       cout << deck[i].getCardText() << endl;
       cout << deck[i].getCardNumber() << endl;
       
       cout << deck[i].getRarity() << endl;
       cout << deck[i].getCondition() << endl;
       cout << deck[i].getPurchasePrice() << endl;
       cout << deck[i].getCurrentValue() << endl;
       cout << deck[i].getQuantity() << endl;
       cout << endl;
       
   }
   }
   


