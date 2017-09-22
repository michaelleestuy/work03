#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  srand(time(NULL));
  int orig[10];
  int i;
  for(i = 0; i < 10; i++){
    orig[i] = rand();
  }

  orig[9] = 0;
  
  printf("original array:\n");
  for(i = 0; i < 10; i++){
    printf("%d\n", orig[i]);    
  }

  int arr[10];
  
  for(i = 0; i < 10; i++){
    *(arr + i) = *(&orig[9-i]);
  }

  printf("new array:\n");
  for(i = 0; i < 10; i++){
    printf("%d\n", arr[i]);    
  }

  return 0;
}

