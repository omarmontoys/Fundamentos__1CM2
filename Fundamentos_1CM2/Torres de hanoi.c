/*
Hecho por Omar Montoya Romero
Objetivo calcular el minimo de movimientos para resolver el puzzle
Fecha 25/01/2021
Basado en varios videos de youtube
*
***
*****
*******
*********
===========		==========		==========
O				A				D
Formula para calcular movimientos mínimos necesarios:
m = 2^n -1
*/

#include <stdio.h>
#include <stdlib.h>


void imprime( int *tab, int fil, int col, int ultNum )
{

	int f, c;
	int i, esp;


	for( c=col-1; c >= 0; c-- )
	{
		for( f=0; f < fil; f++ )
		{
			esp = ( ultNum - tab[col*f+c] )/2;

			for( i=0; i < esp; i++ )
				printf( " " );

			for( i=0; i < tab[col*f+c]; i++ )
				printf( "*" );

			for( i=0; i < esp; i++ )
				printf( " " );

			printf( "\t" );
		};

		printf( "\n" );
	};


}


void mueveDisco( int *tab, int fil, int col, int ultNum, int filOrig, int filDest )
{
	int cO=col-1, cD=col-1;



	while( cO >= 0  &&  tab[col*filOrig+cO] == 0 )
	{
		cO--;
	}
	if( cO < 0 )
		cO = 0;


	while( cD >= 0  &&  tab[col*filDest+cD] == 0 )
	{
		cD--;
	}


	tab[col*filDest+cD+1] = tab[col*filOrig+cO];
	tab[col*filOrig+cO] = 0;


	imprime( tab, fil, col, ultNum );
}


void hanoi( int *tab, int fil, int col, int disc, int ultNum, int O, int A, int D )
{
	if( disc==1 )
	{

		system("clear");
		mueveDisco( tab, fil, col, ultNum, O, D );
		if(col<=5) system("sleep 0.8"); else if(col<=10) system("sleep 0.3"); else if(col<=15) system("sleep 0.06"); else if(col>15) system("sleep 0.02");
	}
	else
	{
		hanoi( tab, fil, col, disc-1, ultNum, O, D, A );

		system("clear");
		mueveDisco( tab, fil, col, ultNum, O, D );
		if(col<=5) system("sleep 0.8"); else if(col<=10) system("sleep 0.3"); else if(col<=15) system("sleep 0.06"); else if(col>15) system("sleep 0.02");

		hanoi( tab, fil, col, disc-1, ultNum, A, O, D );
	};

}


main()
{
	int fil=3, col, *tablero = NULL;
	int f, c, disc=1, ultNum;


	printf( "Indique el numero de discos: " );
	scanf( "%i", &col );

	tablero = (int *)malloc( sizeof(int)*fil*col );

	for( f=0; f < fil; f++ )
		for( c=col-1; c >= 0; c-- )
		if( f==0 )
	{
		tablero[col*f+c] = disc;
		disc+=2;
	}
		else
		   tablero[col*f+c] = 0;

		ultNum = disc;

		system("clear");
		imprime( tablero, fil, col, ultNum );
		system("sleep 1");

		hanoi( tablero, fil, col, col, ultNum, 0, 1, 2 );
}
