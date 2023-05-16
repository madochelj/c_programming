/* Author: mlj
 * Date: 5/15/2023
 * Purpose: Classify a poker and and print the results
 */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_RANKS 13
#define NUM_SUITS 3
#define NUM_CARDS 5

/* External Variables */
int num_in_rank[NUM_RANKS];
int num_in_suits[NUM_SUITS];
bool straight, flush, four, three;
int pairs;

/* prototyhpes */
void read_cards(void);
void analyze_hand(void);
void printf_results(void);

/********************************************************
 * main: calls read_cards, analyze_hand, printf_results *
 * Reaply                                               *
 * ******************************************************/
int main(void)
{
        return 0;
}
 /*******************************************************
  * read_cards: reads the cards into the external       *
  *  variable num _in_rank and num_in_suits;            *
  *  checks for bad cards and duplicate cards           *
  *  ****************************************************/
void  read_cards(void)
{
        bool card_exists[NUM_RANKS][NUM_SUITS];
        char ch, rank_ch, suit_ch;
        int rank, suit;
        bool bad_card;
        int cards_read = 0;

        for (rank = 0; rank < NUM_CARDS; rank++) {
                num_in_rank[rank] = 0;
                for (suit = 0; suit < NUM_SUITS; suit++) {
                        card_exists[rank][suit] = false;
                }
        }

        for (suit = 0; suit < NUM_SUITS; suit++) {
                num_in_suits[suit] = 0;
        }

        while (cards_read < NUM_CARDS) {
                bad_card = false;

                printf("Enter a card: ");

                rank_ch = getchar();
                switch (rank_ch) {
                        case '0':       exit(EXIT_SUCCESS);
                        case '2':        rank = 0; break;
                        case '3':        rank = 1; break;
                        case '4':        rank = 2; break;
                        case '5':        rank = 3; break;
                        case '6':        rank = 4; break;
                        case '7':        rank = 5; break;
                        case '8':        rank = 6; break;
                        case '9':        rank = 7; break;
                        case 't': case 'T':    rank = 8; break;
                        case 'j': case 'J':    rank = 9; break;
                        case 'q': case 'Q':    rank = 10; break;
                        case 'k': case 'K':    rank = 11; break;
                        case 'a': case 'A':    rank = 12; break;
                        default:               bad_card = true;
                }

                suit_ch = getchar();
                switch (suit_ch) {
                        case 'c': ca
                }
        }
}
