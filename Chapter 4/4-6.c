#include<stdio.h>

int main( void )
{
	
	int x;
	
	// a)
		for ( x = 2; x <= 13; x += 2 )
			printf("%d\n", x);
	
	// b)
		for ( x = 5; x <= 11; x += 7 )
			printf("%d\n", x);
	
	// c)
		for ( x = 3; x <= 15; x += 3 )
			printf("%d\n", x);
	
	// d)
		for ( x = 1; x <= 5; x += 7 )
			printf("%d\n", x);
			
	// e)
		for ( x = 12; x >= 2; x -= 3 )
			printf("%d\n", x);
	
	return 0;
}
