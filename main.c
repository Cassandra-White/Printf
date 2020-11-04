#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	/*char *test = "je suis un test";
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int m = 0;
	int n = 0;
	unsigned int UI = 4294967295;
	int o = 0;
	int p = 0;
	unsigned int UI1 = 1535058372;
	int q = 0;
	int r = 0;
//	char *UI2 = "368574687";
	int s = 0;
	int t = 0;
	int u = 0;
	int v = 0;
//	char *pointeur = test;




//	*__________________________________________________________*


	i = ft_printf("Test CHAR [%c]\n", '%');
	j = printf("Test CHAR [%c]\n", '%');
	printf("i = %d\n", i);
	printf("J = %d\n", j);
	k = ft_printf("Test STRING [%s]\n","je suis le meilleur");
	l = printf("Test STRING [%s]\n","je suis le meilleur");
	printf("k = %d\n", k);
	printf("l = %d\n", l);

	m = ft_printf("Test INT [%d]\n", 1234567891);
	n = printf("Test INT [%d]\n",1234567891);
	printf("m = %d\n", m);
	printf("n = %d\n", n);	

	o = ft_printf("Test UNSIGNED INT [%u]\n", UI);
	p = printf("Test UNSIGNED INT [%u]\n", UI);


	printf("o = %d\n", o);
	printf("p = %d\n", p);	


	q = ft_printf("Test HEXA LOW [%x]\n", UI1);
	r = printf("Test HEXA LOW [%#x]\n", UI1);


	printf("o = %d\n", q);
	printf("p = %d\n", r);	

	q = ft_printf("Test HEXA UPPER [%X]\n", UI1);
	r = printf("Test HEXA UPPER [%X]\n", UI1);


	printf("o = %d\n", q);
	printf("p = %d\n", r);	
	
	
	
	s = ft_printf("Test POINTER [%p]\n", test);
	t = printf("Test POINTER [%p]\n", test);


	printf("s = %d\n", s);
	printf("t = %d\n", t);	


	u = ft_printf("Test PERCENT [%%]\n");
	v = printf("Test PERCENT [%%]\n");


	printf("u = %d\n", u);
	printf("v = %d\n", v);	
*/
	//ft_printf(" je suis un test %s, %c, %d\n",'P', "caca", 123);
//	printf("____________________________________________________\n");
	ft_printf(" je suis un test [%d]\n",-0);
/*	printf(" je suis un test [%11d]\n",-123456789);
	
	ft_printf(" je suis un test [%-11d]\n",-123456789);
	printf(" je suis un test [%-11d]\n",-123456789);
*/
	ft_printf(" je suis un test [%*d]\n",5,123456789);
/*	printf(" je suis un test [%*d]\n",5,-123456789);

	ft_printf(" je suis un test [%-*d]\n",5,-123456789);
	printf(" je suis un test [%-*d]\n",5,-123456789);

	ft_printf(" je suis un test [%.11d]\n",-123456789);
	printf(" je suis un test [%.11d]\n",-123456789);


	ft_printf(" je suis un test [%-.11d]\n",-123456789);
	printf(" je suis un test [%-.11d]\n",-123456789);

	ft_printf(" je suis un test [%.*d]\n",11,-123456789);
	printf(" je suis un test [%.*d]\n",11,-123456789);

	ft_printf(" je suis un test [%-.*d]\n",11,-123456789);
	printf(" je suis un test [%-.*d]\n",11,-123456789);
	


//	printf(" je suis un test [%*c]\n", -9, 'r');
//	printf(" \n     %.9d   \n", 789);
*/
	return(0);
}

