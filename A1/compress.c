/*
Name: Victor Tadros
Purpose: Compress a string into hexadecimals if a character is repeated more
         than one consective times
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void compress(char * str, int count, int i){

  char hex[6] = "ABCDEF";

  /*if count is 1*/
  if (count == 1)
    printf("%c", str[i]);

  /*if count less than 10*/
  else if (count > 1 && count < 10)
    printf("%c%d", str[i], count);

  /* if count >= 10 and <= 15*/
  else if (count >= 10 && count <= 15){
    int j;
    for (j = count - 10; j < strlen(hex); j++){
      printf("%c%c", str[i], hex[j]);
      break;
    }
  }

  /* if count is greater than 15*/
  else if (count > 15){
    int x, rem = count / 15;

    for (x = 0; x < rem; x++){
      printf("%c%c", str[i], hex[5]);
      
    }
    count = count % 15;

    if (count == 1)
      printf("%c", str[i]);    
    
    else if (count!=0 && count > 1 && count < 10)
      printf("%c%d", str[i], count);

    else if (count!=0 && count >= 10 && count <= 14){
      int j;
      for (j = count - 10; j < strlen(hex); j++){
	      printf("%c%c", str[i], hex[j]);
	      break;
      }
    }
  }
}


void calc(char * str){

  int leng = strlen(str);
  int i = 0;
  
  for (; i < leng; i++) {
    int count = 1;

    while (i < leng && str[i] == str[i + 1]) {
      count++;
      i++;
    }
    compress(str, count, i);
  }
}


int main(void) {

  char * str;
  str = malloc(sizeof(char) * 200);
  
  while(fgets(str, 200, stdin) != NULL){
    calc(str);
  }
  return 0;
}
