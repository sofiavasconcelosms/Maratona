
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N;
  printf("Digite o numero que deseja de 0 a 10: ");
  scanf("%d", &N);
  if (N == 0) {
    printf("*");
    printf("\n*");
  } else if (N == 1) {
    printf("I");
    printf("\n*");

  } else if (N ==2) {
    printf("II");
    printf("\n*");

  }else if(N ==3){
    printf("III");
    printf("\n*");
  }else if(N ==4){
    printf("IIII");
    printf("\n*");
  }else if(N ==5){
    printf("IIIII");
    printf("\n*");
  }else if(N ==6){
    printf("IIIII");
    printf("\nI");
  }else if(N ==7){
    printf("IIIII");
    printf("\nII");
    }else if(N ==8){
      printf("IIIII");
      printf("\nIII");
    }else if(N ==9){
      printf("IIIII");
      printf("\nIIII");
    }else if(N ==10){
      printf("IIIII");
      printf("\nIIIII");
  }
  return 0;
}
