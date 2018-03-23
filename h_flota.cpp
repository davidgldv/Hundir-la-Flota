#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define N 25

void j1_colocar();

int m_original[N][N];

int main(){
	system("clear");
	printf("\n");
	printf("\t\t\t");
	for(int f = 0; f < N; f++){
		for(int c = 0; c < N; c++){
			m_original[f][c] = 0;
			printf("%i ", m_original[f][c]);
		}
		printf("\n");
		printf("\t\t\t");
	}
	sleep(3);
	system("clear");

	return EXIT_SUCCESS;
}
