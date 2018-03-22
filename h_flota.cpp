#include <stdio.h>
#include <stdlib.h>

#define N 25

void j1_colocar();


int main(){

    for(int f = 0; f < N; f++){
        for(int c = 0; c < N; c++){
            printf("|_|");
          }
        printf("\n");
    }
  return EXIT_SUCCESS;
}
