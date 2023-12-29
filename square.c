# include<stdio.h>
int   main( )
{
    int *n, sum = 0;
	int *p, *square;
	
		printf(" Enter side of square : ");
		scanf("%d ",&n);
		
		p = &n;
		square = &sum;
		
		sum = (*p) * (*p);
		
		printf("\n Area of square is : %d ", *square);
}