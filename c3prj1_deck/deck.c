#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "deck.h"

void print_hand(deck_t * hand){
  card_t ** card =hand -> cards ;
  card_t tempc;
  for (size_t i =0 ; i< hand -> n_cards ; i++){
    tempc = **(card +i);
    print_card(tempc);
  }
}

int deck_contains(deck_t * d, card_t c) {
  card_t ** card = d -> cards;
  card_t tempc;
  for (size_t i = 0; i < d -> n_cards; i++){
    tempc = **(card +i);
    if((tempc.value == c.value)&&(tempc.suit == c.suit)) return 1;
  }
  return 0;
}

void shuffle(deck_t * d){
  card_t ** card = d -> cards;
  card_t *tempc;
  int randomN; 
  for (size_t i =0; i< d -> n_cards; i++){
    randomN = i+ random()%((d ->n_cards)-i);
    tempc= card[i];
    card[i] = card[randomN];
    card[randomN] = tempc;
  }
}

void assert_full_deck(deck_t * d) {
  card_t ** card =d -> cards ;
  card_t tempc1;
  card_t tempc2;
  int count;
  for (size_t i = 0; i< d -> n_cards; i++){
    tempc1 = **(card+i);
    count = 0;
    for (size_t j = 0; j < d -> n_cards; j++){
      tempc2 = **(card +j);
      if((tempc1.value == tempc2.value)&&(tempc1.suit == tempc2.suit))
	count ++;
    }
    assert(count ==1);
  }
}
