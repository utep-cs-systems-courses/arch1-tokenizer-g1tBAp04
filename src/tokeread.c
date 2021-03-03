
#include <stdio.h>
#include "tokenizer.h"


int main()
{
  
 printf("try a text, q to quit.");

char answer[100];

 
  printf("\n >");
  fgets(answer, 100, stdin);
  printf("%s", answer);

  char *manip;
   manip =  word_start(answer);
    printf(manip);
   manip =  word_terminator(manip); 
    printf("||c||",*manip); 

    
 done:
    return 0;
}
