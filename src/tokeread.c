
#include <stdio.h>
#include "tokenizer.h"


int main()
{
  
 printf("try a text, q to quit.");

char answer[100];

 
while(answer[0] != 'q'){
  printf("\n >");
  fgets(answer, 100, stdin);

  char *st =  word_start(answer);
  char *end =  word_terminator(answer); 
  printf("%s", answer, "\n");
  printf("begins:", st , "\n");
  printf("ends:", end, "\n"); 
   }
 return (0);
}
