#include <stdio.h>
#include "tokenizer.h"


int main()
{
  
printf("try a text");

char answer[100];

while(answer != "<>"){
  printf(">");
 fgets(answer);
  puts(answer);
 }
 return (0);
}
