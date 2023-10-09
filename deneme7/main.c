#include <stdio.h>
#include <stdlib.h>
// (a+b)+(c*20)  kullanýcý negatif feðer girdiðinde yanlýþ iþlem.

int sayi1;
int sayi2;
int sayi3;
int x;

int func1(int a , int b, int c) //fonksiyonu tanýmladýk
{	

	return a+b+c*20;
}

int main() 

{	printf(" 3 deger giriniz ");
	scanf("%d", &sayi1 );
	scanf("%d", &sayi2 );
	scanf("%d", &sayi3 );

	if (sayi1<0)
{  printf("negatif deger girdiniz");}
	else if (sayi2<0)
{  printf("negatif deger girdiniz");}
	else if (sayi3<0)
{  printf("negatif deger girdiniz");}
	
	x= func1(sayi1,sayi2,sayi3);
	printf("%d",x);
	
	
	return 0;
}
