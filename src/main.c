#include "card_func.h"
#include "player.h"

int main()
{
    card deck_of_cards[NUMBEROFCARDS];
    player player_list[MAXPLAYERS];

    initialize_deck_of_cards(deck_of_cards, NUMBEROFCARDS);
    shuffle_cards(deck_of_cards, NUMBEROFCARDS);

    int num_of_players;
    card * next_card = deck_of_cards; //points to deck_of_cards[0]

    num_of_players = initialize_player_list(player_list, MAXPLAYERS);
    deal_cards_to_players(player_list, num_of_players, &next_card);
    
    print_player_hands(player_list, num_of_players);    
    print_card_name(*next_card);

    return 0;
}