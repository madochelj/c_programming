/* Author: mlj
 * Date:4/16/2023
 * Purpose: Deal a random deck of cards
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//#include <sys/select.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
        bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
        int num_cards, rank, suit;

        const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};
        const char suit_code[] = {'c', 'd', 'h', 's'};

        srand((unsigned) time(NULL));

        printf("Enter nu,ber of cards in hand: ");
        scanf("%d", &num_cards);

        printf("Your hand: ");
        while (num_cards > 0) {
                suit = rand() % NUM_SUITS;      
                rank = rand() % NUM_RANKS;
                if (!in_hand[suit][rank]) {
                        in_hand[suit][rank] = true;
                        num_cards--;
                        printf(" %c%c", rank_code[rank], suit_code[suit]);
                }
        }
        printf("\n");
        return 0;
}

