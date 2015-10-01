#include <stdio.h>

int main()
{
  int i,m,n,nmax,sum,sun,temp;
  sum=0;
  sun=0;
  printf ("Entrez nmax : ");
  scanf("%i",&nmax);
  
  for(n=1;n<=nmax;n++)
  {
	  for(m=2;m>n;m++)
	  {
		for(i=1;i<m;i++)
		{
			{
				if (n%i==0) sun=sun+i;
				if (m%i==0) sum=sum+i;
				sum=sum-m;
				sun=sun-n;
			}
		}
		if (sun==m && sum==n) printf(" %i et %i sont amis \n",m,n);
		else printf(" %i et %i ne sont pas amis \n",m,n);
		
	  }
  }
}

