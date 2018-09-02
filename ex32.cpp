#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,x;
	printf("entrer un nombre \n");
	scanf("%d",&x);
	for (i=1 ; i<=500;i++){
	
	if ((x<1)||(x>100))
	{
		printf("le nombre doit comprix etre 1 et 100!! \n\a");
		printf("\n");
		printf("donner un nombre \n");
		scanf("%d",&x);	
	}
	if((i%x)==3){
	printf("%d\n",i);
				}	
						}
		
	 		
	return 0;
	
}
