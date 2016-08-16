
		/*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*
		*																	*
		*						*** CRYSTAL POTION ***						*
		*																	*
		*	Nome:			CRYSTAL_POTION_GRAFICA_G.H						*
		*	Programmato da: Montalbano Marco								*
		*	Genere:			libreria del gioco (grafica pozione del gioco)	*
		*	Piattaforma:	Windows											*
		*	Copyright:		2006 / 2007										*
		*																	*
		*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*	*/


//Elenco funzioni contenute
//Lista colori base di sistema
/*
	0	Nero			0
	1	Blu (Dark)		1
	2	Verde (Dark)	2
	3	Azzurro (Dark)	3
	4	Rosso (Dark)	4
	5	Viola (Dark)	5
	6	Giallo (Dark)	6
	7	Grigio (Light)	7
	8	Grigio (Dark)	8
	9	Blu (Light)		9
	10	Verde (light)	A
	11	Azzurro (Light)	B
	12	Rosso (Light)	C
	13	Viola (Light)	D
	14	Giallo (Light)	E
	15	Bianco			F
*/

//Elenco funzioni contenute
void CRYSTAL_POTION_GRAFICA_G(int, int);


//Mostra la guida del gioco
void CRYSTAL_POTION_GRAFICA_G(int b, int a)
{

DrawPoints(4 + (dimensione_pixel*a), 0 + (dimensione_pixel*b), 102, 51, 0);
DrawPoints(5 + (dimensione_pixel*a), 0 + (dimensione_pixel*b), 102, 51, 0);
DrawPoints(4 + (dimensione_pixel*a), 1 + (dimensione_pixel*b), 26, 0, 102);
DrawPoints(5 + (dimensione_pixel*a), 1 + (dimensione_pixel*b), 26, 0, 102);
DrawPoints(3 + (dimensione_pixel*a), 2 + (dimensione_pixel*b), 26, 0, 102);
DrawPoints(4 + (dimensione_pixel*a), 2 + (dimensione_pixel*b), 102, 204, 230);
DrawPoints(5 + (dimensione_pixel*a), 2 + (dimensione_pixel*b), 153, 204, 230);
DrawPoints(6 + (dimensione_pixel*a), 2 + (dimensione_pixel*b), 26, 0, 102);
DrawPoints(2 + (dimensione_pixel*a), 3 + (dimensione_pixel*b), 26, 0, 102);
DrawPoints(3 + (dimensione_pixel*a), 3 + (dimensione_pixel*b), 51, 204, 179);
DrawPoints(4 + (dimensione_pixel*a), 3 + (dimensione_pixel*b), 102, 204, 230);
DrawPoints(5 + (dimensione_pixel*a), 3 + (dimensione_pixel*b), 153, 204, 230);
DrawPoints(6 + (dimensione_pixel*a), 3 + (dimensione_pixel*b), 153, 204, 230);
DrawPoints(7 + (dimensione_pixel*a), 3 + (dimensione_pixel*b), 26, 0, 102);
DrawPoints(1 + (dimensione_pixel*a), 4 + (dimensione_pixel*b), 26, 0, 102);
DrawPoints(2 + (dimensione_pixel*a), 4 + (dimensione_pixel*b), 26, 204, 179);
DrawPoints(3 + (dimensione_pixel*a), 4 + (dimensione_pixel*b), 51, 204, 179);
DrawPoints(4 + (dimensione_pixel*a), 4 + (dimensione_pixel*b), 102, 204, 230);
DrawPoints(5 + (dimensione_pixel*a), 4 + (dimensione_pixel*b), 102, 204, 230);
DrawPoints(6 + (dimensione_pixel*a), 4 + (dimensione_pixel*b), 102, 204, 230);
DrawPoints(7 + (dimensione_pixel*a), 4 + (dimensione_pixel*b), 153, 204, 230);
DrawPoints(8 + (dimensione_pixel*a), 4 + (dimensione_pixel*b), 26, 0, 102);
DrawPoints(1 + (dimensione_pixel*a), 5 + (dimensione_pixel*b), 26, 0, 102);
DrawPoints(2 + (dimensione_pixel*a), 5 + (dimensione_pixel*b), 26, 204, 179);
DrawPoints(3 + (dimensione_pixel*a), 5 + (dimensione_pixel*b), 51, 204, 179);
DrawPoints(4 + (dimensione_pixel*a), 5 + (dimensione_pixel*b), 51, 204, 179);
DrawPoints(5 + (dimensione_pixel*a), 5 + (dimensione_pixel*b), 102, 204, 230);
DrawPoints(6 + (dimensione_pixel*a), 5 + (dimensione_pixel*b), 102, 204, 230);
DrawPoints(7 + (dimensione_pixel*a), 5 + (dimensione_pixel*b), 102, 204, 230);
DrawPoints(8 + (dimensione_pixel*a), 5 + (dimensione_pixel*b), 26, 0, 102);
DrawPoints(1 + (dimensione_pixel*a), 6 + (dimensione_pixel*b), 26, 0, 102);
DrawPoints(2 + (dimensione_pixel*a), 6 + (dimensione_pixel*b), 26, 204, 179);
DrawPoints(3 + (dimensione_pixel*a), 6 + (dimensione_pixel*b), 26, 204, 179);
DrawPoints(4 + (dimensione_pixel*a), 6 + (dimensione_pixel*b), 51, 204, 179);
DrawPoints(5 + (dimensione_pixel*a), 6 + (dimensione_pixel*b), 51, 204, 179);
DrawPoints(6 + (dimensione_pixel*a), 6 + (dimensione_pixel*b), 102, 204, 230);
DrawPoints(7 + (dimensione_pixel*a), 6 + (dimensione_pixel*b), 102, 204, 230);
DrawPoints(8 + (dimensione_pixel*a), 6 + (dimensione_pixel*b), 26, 0, 102);
DrawPoints(1 + (dimensione_pixel*a), 7 + (dimensione_pixel*b), 26, 0, 102);
DrawPoints(2 + (dimensione_pixel*a), 7 + (dimensione_pixel*b), 26, 204, 179);
DrawPoints(3 + (dimensione_pixel*a), 7 + (dimensione_pixel*b), 26, 204, 179);
DrawPoints(4 + (dimensione_pixel*a), 7 + (dimensione_pixel*b), 26, 204, 179);
DrawPoints(5 + (dimensione_pixel*a), 7 + (dimensione_pixel*b), 51, 204, 179);
DrawPoints(6 + (dimensione_pixel*a), 7 + (dimensione_pixel*b), 51, 204, 179);
DrawPoints(7 + (dimensione_pixel*a), 7 + (dimensione_pixel*b), 51, 204, 179);
DrawPoints(8 + (dimensione_pixel*a), 7 + (dimensione_pixel*b), 26, 0, 102);
DrawPoints(2 + (dimensione_pixel*a), 8 + (dimensione_pixel*b), 26, 0, 102);
DrawPoints(3 + (dimensione_pixel*a), 8 + (dimensione_pixel*b), 26, 204, 179);
DrawPoints(4 + (dimensione_pixel*a), 8 + (dimensione_pixel*b), 26, 204, 179);
DrawPoints(5 + (dimensione_pixel*a), 8 + (dimensione_pixel*b), 26, 204, 179);
DrawPoints(6 + (dimensione_pixel*a), 8 + (dimensione_pixel*b), 26, 204, 179);
DrawPoints(7 + (dimensione_pixel*a), 8 + (dimensione_pixel*b), 26, 0, 102);
DrawPoints(3 + (dimensione_pixel*a), 9 + (dimensione_pixel*b), 26, 0, 102);
DrawPoints(4 + (dimensione_pixel*a), 9 + (dimensione_pixel*b), 26, 0, 102);
DrawPoints(5 + (dimensione_pixel*a), 9 + (dimensione_pixel*b), 26, 0, 102);
DrawPoints(6 + (dimensione_pixel*a), 9 + (dimensione_pixel*b), 26, 0, 102);

}

