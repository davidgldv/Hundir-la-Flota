#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define N 25

void interfaz();
void coor_j1();
void seleccionar();

int m_original[N][N];
int x;
int y;
int posicion;
int barco;
int tamano;

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

	seleccionar();

}

void seleccionar() {
	printf("\n\t1) Vertical\n\t2) Horizontal\n\tPosición: ");
	scanf(" %i", &posicion);
	printf("\n\t1) barco 5\n\t2) barco 4\n\t3) barco 3\n\t4) barco 2\n\tBarco: ");
	scanf(" %i", &barco);

	if(barco == 1)
		tamano = 5;
	if(barco == 2)
		tamano = 4;
	if(barco == 3)
		tamano = 3;
	if(barco == 4)
		tamano = 2;

	coor_j1();
}

void coor_j1 () {

	printf("Coordenadas (Formato: (X,Y)): ");
	scanf(" (%i,%i)", &x, &y);

	if(posicion == 1)
		for(int c = x; c < (x + tamano); c++)
			m_original[c][y] = 1;
	if(posicion == 2)
		for(int c = y; c < (y + tamano); c++)
                        m_original[x][c] = 1;

	interfaz();
}
