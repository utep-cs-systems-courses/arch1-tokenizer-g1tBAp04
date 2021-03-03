#include<stdio.h>
#include"history.h"
#include "tokenizer.h"


List* init_history(){
  List* list = (List*)malloc(sizeof(List));
  return list;
}


void add_history(List *list, char *str){
  int id;
  Item addenum = (Item*)malloc(sizeof(Item));
  addenum -> id = 0;
  //add string to node
  if(list->root == NULL){
    list->root = addenum;  
  }
      
  Item *step = list->root;
  
  while(step->next != NULL){
    step = step->next;
    id++;
  }
  step->next = addenum;
  addenum->id = id;
}


char *get_history(List *list, int id){
 
}

void print_history(List *list){
  for(int all =0; all < list; all++){
  print(all+":"+list[all])
   }

  void free_history(List *list){
    
  }
}
