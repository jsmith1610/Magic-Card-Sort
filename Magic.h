/*
 * The purpose of this program is to process all the cards in a text doc
 * store their information then tell a few simple things like total value,
 * most numerous card in the deck, and the most valuable card based on purchase 
 * price.
 */

/*
 * File:   Magic.h
 * Author: Jacob Smith
 */
#include <iostream>
#include <cstdlib>
#include <string>
#ifndef MAGIC_H
#define MAGIC_H

using namespace std;

class Magic {
public:
    Magic();
    Magic(const Magic& orig);
    
    //Get Methods Card Type
    string getCardName();
    int getManaCost();
    string getType();
    string getCardText();
    int getCardNumber();
    
    //Get Methods for Card Quality
    string getRarity();
    string getCondition();
    float getPurchasePrice();
    string getCurrentValue();
    int getQuantity();
    
    //Set Method Card Type
    void setCardName(string CardName);
    void setManaCost(int ManaCost);
    void setType(string CardType);
    void setCardText(string CardText);
    void setCardNumber(int CardNumber);
    
    //Set Methods for Card Quality
    void setRarity(string Rarity);
    void setCondition(string Condition);
    void setPurchasePrice(float PurchasePrice);
    void setCurrentValue(string CurrentValue);
    void setQuantity(int Quantity);
    
    virtual ~Magic();
    
private:
    string cardName;
    int manaCost;
    string cardType;
    string cardText;
    int cardNumber;
    
    string rarity;
    string condition;
    float purchasePrice;
    string currentValue;
    int quantity;
        
};

#endif /* MAGIC_H */


