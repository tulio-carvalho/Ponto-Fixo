
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

FILE *f;
int SolucaoPontoFixo(double *x0, double prec)
{
	double x,dx, i=0;
	f=fopen("dados1.5.dat","w"); // diferença entre os programas esta apenas no nome do arquivo
	
	
	do
	{
		x= cos(*x0);
		dx=fabs(x-*x0);
		*x0=x;
		fprintf(f,"%g\n",*x0);
		i=i+1;
	}while(dx>prec);
	fclose(f);
	return i;
}

void main(int argc, char **argv)
{
	double x,dx, prec,x0;

	x0= atof(argv[1]);
	prec= atof(argv[2]);
	printf("\nRaiz =%.10g em %d iterações\n",x0,SolucaoPontoFixo(&x0,prec));
		
}

