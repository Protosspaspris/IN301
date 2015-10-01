#include <stdio.h>

int main()
{
	int i,n;
	float j,k;
	k=0;
	j=1;
	printf("entrer n : \n");
	scanf("%i",&n);
	
	for(i=1;i<n+1;i++)
	{
		k=k+1/(j*j);
		j++;
	}
	printf("la somme vaut %f \n",k);
}

