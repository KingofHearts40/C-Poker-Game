#ifndef PLAYER_H
#define PLAYER_H

#include "card_func.h"

#define MAXPLAYERS 8

typedef struct player{
    card cards_in_hand[2];
}player;

int initialize_player_list(player player_list[], int max_players);
void deal_cards_to_players(player player_list[], int number_players, card ** next_card);
void print_player_hands(player player_list[], int num_of_players);

#endif