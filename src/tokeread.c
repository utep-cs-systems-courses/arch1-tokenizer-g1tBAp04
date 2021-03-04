
#include <stdio.h>
#include "tokenizer.h"
#include "history.h"

int main()
{
  
  printf("Please input text."); 

int go = 1;
 
char select;
char subselect;
char answer[100];

 char[10]huntid;
 int seek;

 while(go == 1){

   printf("\n,n for new, h for history, q to quit.");  
   
 if(select = n){
  printf("\n >");
  fgets(answer, 100, stdin);
  add_history(answer);
  printf("%s","new entry:",answer);
 }
 

 if(select = h){
   printf("write a to repeat full history, c for specific history.");
     fgets(subselect);
     printf("\n >");
     if (subselect = a){
       print_history(); 
     }
   if (subselect = c){
     printf("%s Which string do you request?");
     fgets(huntid,10,stdin);
     if(huntid[0] != !){
       printf("invalid.");
     }
     else{
       seek = huntid[1,(sizeof(huntid-1))];
       get_history(seek);
     }
   }
   break;
 }

 if (select = q){
   go = 0;
 done:
    return 0;
 }
 }
 
}
