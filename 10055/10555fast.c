#include <stdio.h>

__inline void fscanl(long long int *x) {

	register char c = 0;
	while (c<33) {
		c = getchar_unlocked();
		if (c == EOF)
			exit(0);
	}
	*x = 0;
	while (c>33)
	{
		*x = (*x << 1) + (*x << 3) + c - 48;
		c = getchar_unlocked();
	}
}



int main()
{
	long long int a, e;
	while (1)
	{
		fscanl(&a);
		fscanl(&e);
		if (a < e) 
			printf("%lld\n", e - a);
		
		else
			printf("%lld\n", a - e);
	}
	return 0;
}