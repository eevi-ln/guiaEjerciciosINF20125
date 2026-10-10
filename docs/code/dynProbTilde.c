#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* palabra;
	int t =-1;
	while(scanf("%d ", &t) && t)
	{
		palabra = malloc(t * (sizeof(char)));
		int numSilabas = 1;
		int posSilabaTonica = 0;
		int posLetraTonica = 0;

		for(int i = 0; i < t; i++)
		{
			palabra[i] = getchar();
			if(palabra[i] == '-')
				numSilabas += 1;

			else if(palabra[i] == 'A' ||
				palabra[i] == 'E' ||
				palabra[i] == 'I' ||
				palabra[i] == 'O' ||
				palabra[i] == 'U')
				posSilabaTonica = numSilabas;
				posLetraTonica = i;
		}
		if(posSilabaTonica == numSilabas) 		// aguda
		{
			
		}

		else if(posSilabaTonica == numSilabas-1) 	// grave
		{

		}

		else if(posSilabaTonica == numSilabas-2) 	// esdrújula
		{
			
		}

		else						// sobreesdrújula
		{

		}


		if

		/*
		for(int i = 0; i < t; i++)
		{
			printf("%c", palabra[i]);
		}printf("\n");
		*/

		free(palabra);
	}

	return 0;
}
