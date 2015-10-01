#include <stdio.h>

int main()
{
	int temps,sec,min,hour;
	printf("nombre de secondes : \n");
	scanf("%i",&temps);
	
	if(temps%60 !=0)
	{
		sec=temps%60;
		temps=temps-sec;
	}
	
	min=temps/60;
	
	
	if(temps%60 !=0)
	{
		min=temps%60;
		temps=temps-min;
		
	}
	
	hour=min/60;
	
	if(hour !=0);
	{
		min=min-(60*hour);
	}
	printf("%i heures %i minutes %i secondes \n",hour,min,sec);
}

