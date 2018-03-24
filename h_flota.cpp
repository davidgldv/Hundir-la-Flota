#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define N 25

void interfaz();
void coor_j1();

int m_original[N][N];
int x;
int y;

int main(){

	for(int f = 0; f < N; f++)
		for(int c = 0; c < N; c++)
			m_original[f][c] = 0;
		


		interfaz();

		return EXIT_SUCCESS;
	}

	void interfaz() {
		system("clear");
		printf("\n");
		printf("\t\t\t");
		for(int f = 0; f < N; f++){
			if(f <= 9 )
				printf("|%i ", f);
			else
				printf("|%i", f);
		}
		printf("\n");
		printf("\t\t\t");
		for(int f = 0; f < N; f++)
			printf("|__");
		printf("\n");
		printf("\t\t     ");
		for(int f = 0; f < N; f++){
			if( f <= 9)
				printf(" %i_|", f);
			else
				printf(" %i|", f);
			for(int c = 0; c < N; c++){
				printf("%i_|", m_original[f][c]);
			}
			printf("\n");
			printf("\t\t     ");
		}

		coor_j1();

	}

	void coor_j1 () {

		printf("Coordenadas (Formato: (X,Y)): ");
		scanf(" (%i,%i)", &x, &y);

		m_original[y][x] = 1;
		interfaz();
	}
