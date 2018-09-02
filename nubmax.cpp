#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 int main()
 
 {
 	int a[5];
 	int i,m,imax;
 	
 	
 	for (i=0;i<5;i++)
 	{
 		printf("A[%i]=",i);
 	scanf("%i",&a[i])	;
 		
	}
	m=a[0]; imax=0;
		for (i=1;i<5;i++)
 	{
 	if(a[i]>m)
	 {
	 	m=a[i];
	 	imax=i;
		 }	
 		
	}
 printf("Highest value: %i \n Position: %i",m,imax+1);
 
	 }
