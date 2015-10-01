#include <stdio.h>

int main()
{
  int i,n;
  printf ("Entrez n : ");
  scanf("%i",&n);

  for(i=0;n!=1;i++)
  {
	 if (n%2==0) n=n/2;
	 else n=3*n+1;
  }
  printf("nombre d'itérations: %i \n",i);
  
}


