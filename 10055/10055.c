#include <stdio.h>

int main()
{
	long long int a, e;
	while (scanf("%lld %lld", &a, &e) != EOF)
	{		
		printf("%lld\n", a < e ? e - a : a - e);		
	}
	return 0;
}