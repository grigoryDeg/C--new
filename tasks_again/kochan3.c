#include  <stdio.h>

int main(void)
{
	int triangularNumber, n;
	for( int n = 5; n <= 50; n = n + 5) {
		triangularNumber = (n*(n+1))/2;
		printf("for chislo %i triangularNumber is %i\n\n", n, triangularNumber);
	}
		return 0;
}