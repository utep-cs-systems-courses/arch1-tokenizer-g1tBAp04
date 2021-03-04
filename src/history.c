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
  Item *temp = list;
  char cpd = '';

  while(temp->id != id){
    temp = temp->next;
  }
  cpd = temp->str;
  return cpd:  
}

void print_history(List *list){
  Item *temid = list->root;
  while(temid->next != NULL){
    printf("%s \n",temid->str);
    temid = temid->next;
  }
}

  void free_history(List *list){
   Item *fin = list->root;
  while(fin != NULL){
    free(fin);
    fin = fin->next;
  }
  free(list);
  }
