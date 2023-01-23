/*
Victor Tadros
Assignment 1
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void){

  char s1[20];
  char s2[20];
  int i, count = 0;

  while(scanf("%s %s", s1, s2) != -1){

    for (i = 0; i < strlen(s1); i++) {
      int x;
      for (x = 0; x < strlen(s2); x++) {
        if (s1[i] == s2[x])
          count++;
      }
    }

    if (count != strlen(s2)){
	    printf("%s and %s : False\n", s1, s2);
      count = 0;
    }

    else{
	    printf("%s and %s : True\n", s1, s2);
      count = 0;
    }
    
  }
  return 0;
}

