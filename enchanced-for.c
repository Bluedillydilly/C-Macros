#include <stdio.h>

#define FOREACH( v, a ) \
	for( int i = 0, v = a[i]; i < sizeof(a) / sizeof(a[0]); i++, v = a[i] )
int main( void ) {
	int a[] = {1, 2, 3, 4, 5};	
	for( int i = 0, c = a[i]; i < sizeof(a) / sizeof(a[0]); i++, c = a[i] ) {
		printf("%d\n", c );
	}
	FOREACH( bb, a ) {
		printf("%d\n", bb );
	}	
}
