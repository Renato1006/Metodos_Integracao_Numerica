/*
Integração Numérica:

Método do retângulo composto

*Divide o intervalo [a,b] em N subintervalos.
*São necessários N+1 pontos para definir N intervalos.
*X1=a e Xn-1=b

	I= h \sum[i=1][N]{f(xi)}
 
*/

#include<stdio.h>
#include<math.h>


double f(double x)
{	return(97000*x/(5*pow(x,2)+570000));
}

int main()
{	int i;	
	double x, a=40, b=93, N1, N2, N3, h, I=0;
	
	printf("\nSubintervalos para N1: ");
	scanf("%lf", &N1);
	
	printf("\nSubintervalos para N2: ");
	scanf("%lf", &N2);
	
	printf("\nSubintervalos para N3: ");
	scanf("%lf", &N3);
	
	//Calculando para N1
	h=(b-a)/N1;
	
	x=a;
	for(i=1; i<=N1; i++)
	{	I+= f(x);
		x+=h;
	}
	
	printf("\nO valor desta integral para %lf é: %lf\n", N1, h*I);	
	
	//Calculando para N2
	h=(b-a)/N2;
	I=0;
	
	x=a;
	for(i=1; i<=N2; i++)
	{	I+= h*f(x);
		x+=h;
	}
	
	printf("\nO valor desta integral para %lf é: %lf\n", N2, I);
	
	//Calculando para N3
	h=(b-a)/N3;
	I=0;
	
	x=a;
	for(i=1; i<=N3; i++)
	{	I+= f(x);
		x+=h;
	}
	
	printf("\nO valor desta integral para %lf é: %lf\n", N3, h*I);
}
