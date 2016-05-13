#include #include <stdio.h>

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
		*x = *x * 10 + c - '0';
		c = getchar_unlocked();
	}
}

__inline void write(long long int x){

	register char buffor[35];
	register long long int i = 0;
	do{
		buffor[i++] = (x % 10) + '0';
		x /= 10;
	} while (x);
	i--;
	while (i >= 0) putchar_unlocked(buffor[i--]);
	putchar_unlocked('\n');
}


int main()
{
	long long int a, e;
	while (1)
	{
		fscanl(&a);
		fscanl(&e);
		if (a < e) {
			write(e - a);
		}
		else
			write(a - e);
	}
	return 0;
}