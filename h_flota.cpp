//mejorar interfaz

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#define N 10

void interfaz();
void interfaz_j2();
void coor_j1();
void coor_j2();
void seleccionar();
void ReiniciarBarcos();

int m_original[N][N];
int m_original2[N][N];
int x, x2;
int y, y2;
int posicion;
int barco;
int tamano = 0;
int jugador = 0;
int portaviones = 0, destructor = 0, fragata = 0, crucero = 0;
bool rellenar = false;
int funciones;


int main(){

	if(rellenar == false){
		for(int f = 0; f < N; f++)
			for(int c = 0; c < N; c++){
				m_original[f][c] = 0;
				m_original2[f][c] = 0;
			}
		rellenar = true;
	}

	for(funciones = 0 ; funciones < 6 ; funciones++){
		interfaz();	
		seleccionar();
		coor_j1();
		interfaz();
	}
	ReiniciarBarcos();
	/*	for(int c = 0 ; c < 6 ; c++){
		interfaz();	
		selecionar();
		coor_j2;
		interfaz_j2();
		}
		ReiniciarBarcos();*/



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

	//seleccionar();

}
/*
   void interfaz_j2() {
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

   seleccionar_j2();

   }
 */

void seleccionar() {

	if(jugador == 0)
		printf("JUGADOR 1");
	else
		printf("JUGADOR 2");
	
	printf("\n\t1) Vertical\n\t2) Horizontal\n\tPosición: ");
	scanf(" %i", &posicion);
	
	for (int c = 2 ; c < 6 ; c++ ){
		tamaño = c;
		printf ("Barco%i:",tamaño);

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


}
/*void coor_j2 () {

  printf("Coordenadas (Formato: (X,Y)): ");
  scanf(" (%i,%i)", &x2, &y2);

  if(posicion == 1)
  for(int c = x; c < (x + tamano); c++)
  m_original2[c][y2] = 1;
  if(posicion == 2)
  for(int c = y; c < (y + tamano); c++)
  m_original2[x2][c] = 1;

  interfaz();
  }*/

