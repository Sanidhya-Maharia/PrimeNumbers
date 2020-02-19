#include <stdio.h>

int main(void) {
  int x, i, a;
  printf("Enter a number: ");
  scanf("%d", &x);
  a=0;
  for(i=2;i<x;i++){
    if(x%i==0)
      a++;
    
  }
  if(a==0)
    printf("%d is a prime number", x);
  else
    printf("%d is not a prime number", x);
  return 0;
}