#include <stdio.h>
#include "tokenizer.h"


int main()
{
  
printf("try a text, q to quit.");

char answer[100];

 while(answer[0] != 'q'){
  printf("\n >");
  fgets(answer, 100, stdin);
  printf("%s", answer);
 }
 return (0);
}
