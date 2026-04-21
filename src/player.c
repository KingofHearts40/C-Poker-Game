#include "player.h"

int initialize_player_list(player player_list[], int max_players)
{
    int num_of_players;
    printf("How many players are playing? ");
    scanf("%d", &num_of_players); // make this safer later

    if (num_of_players > max_players)
    {
        printf("Max players is %d\n\n", max_players);
        num_of_players = 8;
    }

    for (int i = 0; i < num_of_players; i++)
    {
        player temp_player;
        player_list[i] = temp_player;
    }

    return num_of_players;
}

void deal_cards_to_players(player player_list[], int number_players, card ** next_card)
{
    //need to deal 2 cards to each players, so inner for loop needs to run twice
    for (int num_cards = 0; num_cards < 2; num_cards++)
    {
        for(int i = 0; i < number_players; i++)
        {
            player_list[i].cards_in_hand[num_cards] = **next_card;
            (*next_card)++; //parentheses needed because of operator precedence(++ before *)
        }
    }
}

void print_player_hands(player player_list[], int num_of_players)
{
    for(int i = 0; i < num_of_players; i++)
    {
        printf("Player %d has ", i+1);
        print_card_name(player_list[i].cards_in_hand[0]);
        printf(" and ");
        print_card_name(player_list[i].cards_in_hand[1]);
        printf("\n\n");
    }
}