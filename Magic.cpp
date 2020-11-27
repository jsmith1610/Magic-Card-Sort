/*
 In this class implementation all the information is received and stored as a variable 
 */
#include <valarray>
#include "Magic.h"

Magic::Magic() {
    cardName = " ";
    manaCost = 0;
    cardType = " ";
    cardText = " ";
    cardNumber = 0;
    
    rarity = " ";
    condition =" ";
    purchasePrice = 0.0;
    currentValue = " ";
    quantity = 0;
    
}
Magic::Magic(const Magic& obj) {
    cardName = obj.cardName;
    manaCost = obj.manaCost;
    cardType = obj.cardType;
    cardText = obj.cardText;
    
    rarity = obj.rarity;
    condition = obj.condition;
    purchasePrice =obj.purchasePrice;
    currentValue = obj.currentValue;
    quantity = obj.quantity;
}

//Get Methods
string Magic::getCardName(){
    return cardName;
}
int Magic::getManaCost(){
    return manaCost;
}
string Magic::getType(){
    return cardType;
}
string Magic::getCardText(){
    return cardText;
}
int Magic::getCardNumber(){
    return cardNumber;
}

//Get Methods for the quality of the card
string Magic::getRarity(){
    return rarity;
} 
string Magic::getCondition(){
    return condition;
}
float Magic::getPurchasePrice(){
    return purchasePrice;
}
string Magic::getCurrentValue(){
    return currentValue;
}
int Magic::getQuantity(){
    return quantity;
}

//Set Methods
void Magic::setCardName(string CardName){
    cardName = CardName;
}
void Magic::setManaCost(int ManaCost){
    manaCost = ManaCost;
}
void Magic::setType(string CardType){
    cardType = CardType;
}
void Magic::setCardText(string CardText){
    cardText = CardText;
}
void Magic::setCardNumber(int CardNumber){
    cardNumber = CardNumber;
}

//Set Methods for the Card Quality
void Magic::setRarity(string Rarity){
    rarity = Rarity;
}
void Magic::setCondition(string Condition){
    condition = Condition;
}
void Magic::setPurchasePrice(float PurchasePrice){
    purchasePrice = PurchasePrice;
}
void Magic::setCurrentValue(string CurrentValue){
    currentValue = CurrentValue;
}
void Magic::setQuantity(int Quantity){
    quantity = Quantity;
}

Magic::~Magic() {
}
