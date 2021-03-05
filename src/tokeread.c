
#include <stdio.h>
#include "tokenizer.h"
#include "history.h"

int main()
{
  
printf("Please input text."); 

int go = 1;
 
char select;
char subselect[1];
char answer[100];

 List *reader;


 char huntid[10];
 int seek;

 while(go == 1){

   printf("\n,n for new, h for history, q to quit.");  
   
 if(select == 'n'){
  printf("\n >");
  fgets(answer, 100, stdin);
  char *piece = &answer[0];
  void add_history(List *list ,char *piece);
 char **tokenize(char* piece);
 }
 

 if(select == 'h'){
   printf("write a to repeat full history, c for specific history.");
   fgets(subselect,1,stdin);
     printf("\n >");
     if (subselect == 'a'){
     void print_history(List *reader); 
     }
   if (subselect == 'c'){
     printf("%s Which string do you request?");
     fgets(huntid,10,stdin);
     if(huntid[0] != '!'){
       printf("invalid.");
     }
     else{
       seek = huntid[1,(sizeof(huntid-1))];
       char *get_history(reader, seek);
     }
   }
   break;
 }

 if (select = 'q'){
   go = 0;
 done:
    return 0;
 }
 }
 
}
