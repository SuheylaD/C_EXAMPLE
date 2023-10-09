#include <stdio.h>
#include <stdlib.h>

int factoriyel(int sayi)
{
	int fact=1;
	
	for(;sayi>0; sayi--)
	{
		fact*=sayi;
	}
	
	return fact;
	
}

int main()
{
	int n;
	printf("faktoriyelini almak istediginiz sayiyi giriniz\n") ;
	
	scanf("%d",&n);
	
	printf("faktoriyel:%d", factoriyel(n));
	
	return 0;
		
}
