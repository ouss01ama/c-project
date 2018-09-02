#include <stdio.h>
#include <stdlib.h>

int main()
{
	int h,m,s;
	printf("\a");
	printf("donner le nombre(en secondes) pour le convertir :\n");
	scanf("%d",&s);
	h = (s/3600); 
	
	m = (s -(3600*h))/60;
	
	s = (s -(3600*h)-(m*60));
	printf("le temps en H:M:S est :%d:%d:%d",h,m,s);
	return 0;
	
	
	
}
