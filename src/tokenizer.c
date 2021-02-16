#include <stdio.h>
#include "tokenizer.h"


int space_char(char c){
 
 if(c == ' ' | '\t'){
  return 1;
 }
 return 0;

}

int non_space_char(char c){

 if(c != ' ' | '\t'){
  return 1;
 }
 return 0;

}
