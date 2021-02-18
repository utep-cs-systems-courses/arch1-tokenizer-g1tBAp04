#include <stdio.h>
#include "tokenizer.h"


int space_char(char c){
 
 if(c == ' ' || '\t'){
  return 1;
 }
 return 0;

}

int non_space_char(char c){

 if(c != ' ' || '\t'){
  return 1;
 }
 return 0;

}

char *word_start(char *str){
  while(space_char(*str)){
    str++;
  }
  return str;
}

char *word_terminator(char *word){
  while(non_space_char(*word)){
    word++;
  }
  return word;
}
