#include "card_func.h"
#include<time.h>
#include<stdlib.h>

void initialize_deck_of_cards(card arr[], int size)
{
    int num_of_suits = 4;
    int num_of_face_cards = size/4; //should be 13

    for (int s = 0; s < num_of_suits; s ++)
    {
        for (int fv = 0; fv < num_of_face_cards; fv++)
        {
            int active_array_spot = (s*13) + fv; //s*13 is initially 0, then 13, then 26... then each card is offset by 1
            card card = {.face_value = fv % 13, .suit = s % 4}; 

            arr[active_array_spot] = card;
        }
    }
}

const char* convert_faceval_to_string(enum FaceValue val)
{
    switch(val)
    {        
        case Two: return "Two";
        case Three: return "Three";
        case Four: return "Four";
        case Five: return "Five";
        case Six: return "Six";
        case Seven: return "Seven";
        case Eight: return "Eight";
        case Nine: return "Nine";
        case Ten: return "Ten";
        case Jack: return "Jack";
        case Queen: return "Queen";
        case King: return "King";
        case Ace: return "Ace";
    }
}

const char* convert_suitval_to_string(enum Suit val)
{
    switch(val)
    {        
        case Hearts: return "Hearts";
        case Diamonds: return "Diamonds";
        case Clubs: return "Clubs";
        case Spades: return "Spades";
    }
}

void shuffle_cards(card arr[], int size)
{
    srand(time(NULL));

    for(int i = 0; i < size; i ++)
    {
        int random_spot = rand() % 52;
        card temp = arr[i];
        arr[i] = arr[random_spot];
        arr[random_spot] = temp;
    }
}

void print_array_cards(card array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("Array position %d is the %s of %s\n", i, convert_faceval_to_string(array[i].face_value), convert_suitval_to_string(array[i].suit));
    }
}

void print_card_name(card card)
{
    printf("%s of %s", convert_faceval_to_string(card.face_value), convert_suitval_to_string(card.suit));
}