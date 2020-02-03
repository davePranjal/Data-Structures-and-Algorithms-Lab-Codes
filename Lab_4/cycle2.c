#include "cycle.h"

bool testCyclic(Ls list){
  NODE * curr = list.head;
  NODE * prev = NULL;
  NODE * next = NULL;
  while(1){
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
      if(curr == NULL)
      {
        return false;
      }
      if(curr == list.head)
      {
        return true;
      }
    }
      return true;
  }
