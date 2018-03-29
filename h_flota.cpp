//mejorar interfaz

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#define N 10

void interfaz();
void coor();
void seleccionar();

int m_original[N][N];
int m_original2[N][N];
int x, x2;
int y, y2;
int posicion;
int barco;
int tamano = 0;
int jugador = 0;
bool rellenar = false;


int main(){

	if(rellenar == false){
		for(int f = 0; f < N; f++)
			for(int c = 0; c < N; c++){
				m_original[f][c] = 0;
				m_original2[f][c] = 0;
			}
		rellenar = true;
	}
	for(int j = 0 ; j < 2 ; j++){
		jugador++;
		for(int c = 0 ; c < 5 ; funciones++){
			interfaz();	
			seleccionar();
		}

	}

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
		if(jugador == 1){
			for(int c = 0; c < N; c++){
				printf("%i_|", m_original[f][c]);
			}
			printf("\n");
			printf("\t\t     ");
		}	
		if(jugador == 2){
			for(int c = 0; c < N; c++){
				printf("%i_|", m_original2[f][c]);
			}
			printf("\n");
			printf("\t\t     ");
		}
	}

}

void seleccionar() {

	if(jugador == 1)
		printf("JUGADOR 1");
	else
		printf("JUGADOR 2");
	
	printf("\n\t1) Vertical\n\t2) Horizontal\n\tPosición: ");
	scanf(" %i", &posicion);
	
      /*Mañana declarar el valor del tamaño para los barcos*/
	for (int c = 2 ; c<6  ; c++){
		tamaño=c;
		printf("Barco de tamaño %i", tamaño);
		coor();
	}	
}

void coor() {

	printf("Coordenadas (Formato: (X,Y)): ");
	scanf(" (%i,%i)", &x, &y);
	if(jugador == 1){
	if(posicion == 1)
		for(int c = x; c < (x + tamano); c++)
			m_original[c][y] = 1;
	if(posicion == 2)
		for(int c = y; c < (y + tamano); c++)
			m_original[x][c] = 1;

	}
	if(jugador ==2){
	if(posicion == 1)
		for(int c = x; c < (x + tamano); c++)
			m_original2[c][y] = 1;
	if(posicion == 2)
		for(int c = y; c < (y + tamano); c++)
			m_original2[x][c] = 1;

	}
}
