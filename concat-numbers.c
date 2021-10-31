#include <stdio.h>

#define EQSTWO( x, y) XEQS( x, TWOIFY(y) )
#define XEQS( x, y ) x = y
#define TWOIFY(y) 2##y
#define ONESHOT( x, y) x = 2##y

#define PRINTF( v, fm ) printf( "%" #fm "\n", v )
int main(void)
{
	EQSTWO( int x, 4 );
	ONESHOT( int y, 8 );

	PRINTF( x, d );
	PRINTF( y, d );
}

