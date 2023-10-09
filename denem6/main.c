#include <stdio.h>
#include <stdlib.h>


int sayi1;
int sayi2;
int x;
int func1(int a , int b) 
{	

	return a+b;
}

int main() 

{	printf(" 2 deger giriniz\n ");
	scanf("%d", &sayi1 );
	scanf("%d", &sayi2 );

	
	x= func1(sayi1,sayi2);
	printf("%d",x);
	return 0;
}
