#include <stdio.h>
#include "tokenizer.h"


int space_char(char c)
{if(c == ' ' || '\t'){return 1;}
  return 0;
}

int non_space_char(char c)
{if(c != ' ' || '\t'){return 1;}
  return 0;
}

char *word_start(char *str)
{while(space_char(*str)){str++;}
  return str;
}

char *word_terminator(char *word)
{while(non_space_char(*word)){word++;}
  return word;
}

int count_words(char *str){
  int count = 0;
  char *serch = str;
  
  while(*serch){

      count++;
      serch = word_start(serch);
      serch = word_terminator(serch);
      serch = word_start(serch);
  }
  return count;
}

char *copy_str(char *inStr, short len){

   char *group = (char*)malloc(len*sizeof(char)+1);

 for(int i= 0; i < len; i++){
     group[i] = inStr[i];
 }
   group[len] = '\0';
     return group;
}

char **tokenize(char *s){
  int attach = count_words(s);
  char **trav = ((char**)malloc((attach+1)*sizeof(char)));
  char *tail;
  char *head = word_start(s);
  
  for(int pick = 0; pick < attach; pick++){
    tail = word_terminator(head);
      *trav[pick] = copy_str(head,(tail - head));
    head = word_start(tail);
  }
  *trav[attach+1] = '\0';
  return trav;
}

void print_tokens(char **tokens){
  for (int cr = 0; cr < (tokens+cr); cr ++)
    {printf("%s \n" , *(tokens + cr));}
}

void free_tokens(char **tokens){ 
  while(*tokens != '\0'){ 
   free(*tokens);}
 free(tokens);
}

