#include <stdio.h>
#include <stdlib.h>

int main()
{   
	int x,y,z,result,max;
	printf("entrer le premier nombre entier :\n");
	scanf("%d",&x);
	printf("entrer le second nombre entier :\n");
	scanf("%d",&y);
	printf("entrer le troisiéme nombre entier :\n");
	scanf("%d",&z);
	result=(x+y+abs(x-y))/2;
    max=(result+z+abs(result-z))/2;
	printf("le nombre max est : %d",max);
	printf("\n");
		
	return 0;	
	
}
