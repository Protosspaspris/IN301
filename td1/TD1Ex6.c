#include <stdio.h>

int main()
{
  int i,n,test;
  test=0;
  printf ("Entrez un nombre entier : ");
  scanf("%i",&n);
  
  for (i=2;i<n;i++)
	{
		 if (n%i==0) test=1;
	}
  if (!test) printf ("%i est premier \n",n);
  else printf ("%i n'est pas premier \n",n);
}
