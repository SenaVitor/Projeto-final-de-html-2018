#include <iostream>
#include <stdio.h>
#include <math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void soma () {
	int i;
	float n1;
	float r;
	
	printf ("DESEJA A TABUADA DE QUAL NUMERO? EM UMA VARIACAO DE 1 A 100. \n");
	scanf ("%f", &n1);
	printf ("_____________________________________________ \n");
	printf ("|TABUADA DE %4.2f | \n ", n1);
	printf ("_____________________________________________ \n");
	for (i=0; i < 101; i++){
		r=n1+i;
		printf ("%4.2f +%4.2d = %4.2f \n", n1, i, r);
	}
	
	
	printf ("OBRIGADO PELA PREFERENCIA :)");
}
void sub () {
	int i;
	float n1;
	float r;
	
	printf ("DESEJA A TABUADA DE QUAL NUMERO? EM UMA VARIACAO DE 1 A 100. \n");
	scanf ("%f", &n1);
	printf ("_____________________________________________ \n");
	printf ("|TABUADA DE %4.2f | \n ", n1);
	printf ("_____________________________________________ \n");
	for (i=0; i < 101; i++){
		r=n1-i;
		printf ("%4.2f -%4.2d = %4.2f \n", n1, i, r);
	}
	
}
void mult (){
	int i;
	float n1;
	float r;
	
	printf ("DESEJA A TABUADA DE QUAL NUMERO? EM UMA VARIACAO DE 1 A 100. \n");
	scanf ("%f", &n1);
	printf ("_____________________________________________ \n");
	printf ("|TABUADA DE %4.2f | \n ", n1);
	printf ("_____________________________________________ \n");
	for (i=0; i < 101; i++){
		r=n1*i;
		printf ("%4.2f X%4.2d = %4.2f \n", n1, i, r);
	}
	
}
void div (){
		int i;
	float n1;
	float r;
	
	printf ("DESEJA A TABUADA DE QUAL NUMERO? EM UMA VARIACAO DE 1 A 100. \n");
	scanf ("%f", &n1);
	printf ("_____________________________________________ \n");
	printf ("|TABUADA DE %4.2f | \n ", n1);
	printf ("_____________________________________________ \n");
	for (i=0; i < 101; i++){
		r=n1/i;
		printf ("%4.2f DIVIDIDO POR %4.2d E IGUAL A %4.3f \n", n1, i, r);
	}
}
int main(int argc, char** argv) {
	char op;
	
	printf ("_____________________________________________ \n");
	printf ("=================|BEM VINDO|================= \n ");
	printf ("_____________________________________________ \n");
	printf ("........ESCOLHA UMA DAS NOSSAS TABUADAS...... \n");
	printf ("__________________________________ \n");
	printf ("|								  | \n");
	printf ("|  1 -> TABUADA DA SOMA          | \n");
	printf ("|  2 -> TABUADA DA SUBTRACAO     | \n");
	printf ("|  3 -> TABUADA DA MULTIPLICACAO | \n");
	printf ("|  4 -> TABUADA DA DIVISAO       | \n");
	printf ("__________________________________ \n");
	
	scanf ("%c", &op);
	switch(op){
		case '1':
			soma ();
			break;
		case '2':
			sub ();
			break;
		case '3':
			mult ();
			break;
		case '4':
			div ();
			
	} 
	return 0;
}
