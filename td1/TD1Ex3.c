#include <stdio.h>

int main()
{
	int x,y,reste;
	reste=0;
	printf("entrer x : \n");
	scanf("%i",&x);
	printf("entrer y : \n");
	scanf("%i",&y);
	printf("%i x %i",x,y);
	
	while (x!=1)
	{
		if(x%2==0)
		{
			x=x/2;
			y=2*y;
		}
		else
		{
			x=x-1;
			reste=y+reste;
		}
	printf("= %i x %i + %i \n",x,y,reste);
	}
	reste=y+reste;
	printf("= %i \n",reste);
}

