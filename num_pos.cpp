#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 int main()
 
 {
 	int j,i,z,x,max=0;
 
 	printf("ecrire combien de nombre pour le saisir: \n\a");
 	 	scanf("%d",&z);
 	 	
 	for (i=1 ;i<=z;i++){
 		printf("donner l' %d nombre \n",i);
 		scanf("%d",&x);
	 }
	 for (j=0;j<x;j++){
	 	if(number[j]>x){
	 		max=number[j];
			
				 }
		 	
	 }
	 
	printf("max : %d",max); 
 
 }
