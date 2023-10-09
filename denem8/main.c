	#include <stdio.h>
	
	int a[20];
	int i;
	
	int main()
	{
		for (i=20; i>0 ; i--)
		{
			a[i]=i*i;
			printf(" a[i] %d - %d index\n", a[i],i);
		}
		
		return 0;
	}
