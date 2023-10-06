#include <stdio.h>
#include <stdlib.h>

void func1()
{
	
	  int a,b;
	  
	  a=4;
	  b=3;
		  printf("Sayi %d\n",a+b);
		  
		}
		
void func2()
{
	int x,y,z;
	x=5;
	y=10,
	z=15;
	printf("3 sayi toplami;%d \n",x+y+z);
	
}

void func3()
{
	 int a;
  	 int i;
	
 
    for(i=0;i<=100;i++)
    {
       
     printf(" %d \n",i);
    }

}

int main()
{
	func1();
	func2();
	func3();
		
	return 0;
}
