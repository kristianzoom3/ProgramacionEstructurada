/*
Determinar si dado una entrada entera
representa un a�o bisiesto o no.
Se determina inicialmente si es m�ltiplo de 4. 
Dentro de los m�ltiplos de 100 debe cumplir si es m�ltiplo de 400.
Se utiliza una bandera (esBisiesto)
*/
{
	bisiesto valor de entrada para verificar
	esBisiesto bandera con dos valores 0/1 F/V
	por defecto esBisiesto se inicia como Falso (0)
	*/
	scanf("%d", &bisiesto);
	sino esBisiesto tiene valor por defecto falso*/
	{
		/* Verificaci�n de m�ltiplo de 100*/
		if (bisiesto%100 == 0)
		{
			if (bisiesto%400 == 0)
			{
				esBisiesto = 1;
		}
		/* Es m�ltiplo de 4 pero no de 100*/
		else
		{
		esBisiesto = 1;	
		}
	}
	
	if (esBisiesto)
	{
		printf("%d es un a�o bisiesto", bisiesto);
	}
	else 
	{
		printf("%d NO es un a�o bisiesto", bisiesto);
	}
	return 0;