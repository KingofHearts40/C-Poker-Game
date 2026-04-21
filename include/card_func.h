#ifndef CARD_FUNC_H
#define CARD_FUNC_H

#define NUMBEROFCARDS 52

#include<stdio.h>

enum FaceValue {Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace};
enum Suit {Hearts, Spades, Clubs, Diamonds};

typedef struct card{
    enum FaceValue face_value;
    enum Suit suit;
}card;

void initialize_deck_of_cards(card arr[], int size);
const char* convert_faceval_to_string(enum FaceValue val);
const char* convert_suitval_to_string(enum Suit val);
void shuffle_cards(card arr[], int size);
void print_array_cards(card array[], int size);
void print_card_name(card card);


#endif