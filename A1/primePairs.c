/*
Victor Tadros
*/

#include <stdio.h>  
int prime(int n);

/* main - after user input, function will determine if number has vaild prime pairs
	  by calling funtion prime*/
int main(void) {  

  int i, num, count = 0;  

  while(scanf("%d", &num) != -1){
  
    for (i = 2; i <= num; i++){  
      if (prime(i) && prime(i+2)){ /*if prime pairs return 0*/
	      printf (" \n\t(%d, %d) ", i, i+2);  
	      count++;
      }  
    } 
    printf("\n\n");
  }
  return 0;  
}  

/* prime - determines if parameter n is a prime number, if so returns 0, else 
           returns 1 */
int prime(int n){  

  int i = 2;  

  for (i = 2; i <= n/2; i++){  
    /* if n divisible by 1 with no remainder, return 0*/  
    if (n%i == 0)  
      return 0;  
  }
  /* if remainder, return 1*/
  if (i > n / 2)  
    return 1;
  return 1;
} 
