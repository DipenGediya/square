#include<stdio.h>

main()
{
	int temp,a = 10,b = 20;
	
	int *p = &a;
	int	*p1 = &b;
	
	printf("Before Swapping = \n");
	printf("A = %d\n",*p);
	printf("B = %d\n",*p1);
	
	temp = *p;
	*p = *p1;
	*p1 = temp;
	
	printf("After swapping = \n");
	printf("A = %d\n",*p);
	printf("B = %d",*p1);
}