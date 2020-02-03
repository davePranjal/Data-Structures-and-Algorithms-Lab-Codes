#include "cycle.h"

bool testCyclic(Ls list){
  bool b = false;
  NODE * hare = list.head;
  NODE * tort = list.head;
  while(1){
    if(hare == NULL || tort == NULL) //For empty list and linear list and list with two nodes
    break;
    if(hare->next == NULL) //For singleton list
    break;
    hare = hare->next->next;
    tort = tort->next;
    if(hare == tort  && hare!= NULL && tort != NULL){
      b = true;
      break;
    }
  }
  return b;
}
