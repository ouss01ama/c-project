#include<stdio.h>
int main()
{
	int a=125;
	int b=12345;
	long ax=1234567890;
	short s = 4043; 
	float x = 2.13459; 
	double dx = 1.1415927; 
	char c = 'W'; 
	long unsigned ux = 2541567890; 
	
	printf("a+c= %d\n",a+c);
	printf("dx+x= %f\n",dx+x);
	printf("(int)dx)+ax= %d\n",((int)dx)+ax);
	printf("s+c= %d\n",s+c);
	printf("ax +ux= %lu",ax+ux);
	return 0; 
	
}
