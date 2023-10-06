#include <stdio.h>
#include <stdlib.h>

void func1(int a, int b)
{
    printf("iki degerin toplami %d \n", a+b);
}

void func2(int x, int y)
{
    printf("iki degerin farki %d \n", x-y);
}

void func3(int a, int b)
{
    printf("iki degerin carpimi %d \n", a*b);
}

void func4(int a, int b)
{
    printf("iki degerin bolumu %d \n", a/b);
}

int main()
{
	int islem;
	
    int sayi1, sayi2;
    printf("girmek istediginiz birinci degeri giriniz\n");
    scanf("%d", &sayi1);

    printf("girmek istediginiz ikinci degeri giriniz\n");
    scanf("%d", &sayi2);
    
    {printf("\n******Secmek istediginiz islemi giriniz******\n");
    printf("1.TOPLAMA\n");
    printf("2.CIKARMA\n");
    printf("3.CARPMA\n");
    printf("4.BOLME\n");
    
    scanf("%d",&islem);}
    
   {
    if(islem == 1)
	{
    	func1(sayi1,sayi2);
        
    }
    else if(islem == 2)
	{
    	func2(sayi1,sayi2);
       
    }
    else if(islem == 3)
	{
    	func3(sayi1,sayi2);
       
    }
    else if(islem == 4)
	{
    	func4(sayi1,sayi2);
       
    }
    
    else
	{
        printf("Dogru secim yapiniz !!!");
    }

		}

    return 0;
}
