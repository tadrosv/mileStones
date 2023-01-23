/*
Victor Tadros
CMPT 201 X01L
Instructor: Hanan Saleh
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define START 10
#define END 21

/* will as user to input a character(not a space) followed by a space and a
string. If a is in the 10th to 21st character of the string capatalize
the whole string*/
int main(void){

  char str[200];

  while(fgets(str, 200, stdin) != NULL){
    if (str[0] == ' ')
      /*not allowed*/
      printf("\n");

    else if(str[1] != ' ')
      printf("\n");


    else if (strlen(str)-2 < START)
      /*program does nothing*/
      printf("\n");


    else if (strlen(str)-2 > START){
      if (strlen(str)-2 < END){

        /*loop runs until end of string*/
        int i;
        for (i = START+1; i < strlen(str); i++){
          if (str[i] == str[0]){
            /*capatalize whole string (NOT including first and second char)*/
            int j;
            for (j = 2; j < strlen(str); j++)
              putchar(toupper(str[j]));
            break;
          }

          /*else display string as is*/
            if(i+1 == strlen(str)){
              int x;
              for (x = 2; x < strlen(str); x++)
                putchar(str[x]);
          }
        }
      }


      else {

        /*loop run until END*/
        int i;
        for (i = START+1; i < END+2; i++){
          if (str[i] == str[0]){
            /*capatalize whole string (NOT including first and second char)*/
            int j;
            for (j = 2; j < strlen(str); j++)
              putchar(toupper(str[j]));
            break;
          }

          /*else display string as is*/
            if (i == END+1){
              int x;
              for (x = 2; x < strlen(str); x++)
                putchar(str[x]);
              break;
            }
        }
      }
    }
  }
  return 0;
}
